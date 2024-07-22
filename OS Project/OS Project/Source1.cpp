#include<iostream>
#include<queue>
using namespace std;

class Processes
{
private:
	int processes;
	int* startDeadline;
	int* available;
	bool schedulable;
	int* deadline;
	int* executionTime;
	int executed;
	int* remainingExecution;
public:
	Processes(int num_of_processes, int* exec, int* dead)
	{
		processes = num_of_processes;
		schedulable = true;
		executed = 0;

		available = new int[num_of_processes];
		for (int i = 0; i < num_of_processes; i++)
		{
			available[i] = 1;
		}
		startDeadline = new int[num_of_processes];
		for (int i = 0; i < num_of_processes; i++)
		{
			startDeadline[i] = dead[i];
		}
		deadline = new int[num_of_processes];
		for (int i = 0; i < num_of_processes; i++)
		{
			deadline[i] = dead[i];
		}
		executionTime = new int[num_of_processes];
		for (int i = 0; i < num_of_processes; i++)
		{
			executionTime[i] = exec[i];
		}

		remainingExecution = new int[num_of_processes];
		for (int i = 0; i < num_of_processes; i++)
		{
			remainingExecution[i] = exec[i];
		}
	}

	int CheckMinDeadline()
	{
		int min = 999999;
		int process = 99;
		for (int i = 0; i < processes; i++)
		{
			if (deadline[i] < min && available[i])
			{
				min = deadline[i];
				process = i;
			}
		}
		return process;

	}

	bool CheckAvailabilityRefresh()
	{
		for (int i = 0; i < processes; i++)
		{
			if (deadline[i] == executed)
			{
				if (available[i])
					return false;
				else
				{
					deadline[i] += startDeadline[i];
					available[i] = 1;
					remainingExecution[i] = executionTime[i];
				}
			}
		}
		return true;
	}


	bool Run(int size)
	{
		while (executed < size)
		{
			schedulable = CheckAvailabilityRefresh();
			if (!schedulable)
				return false;

			int curr = CheckMinDeadline();
			executed += 1;
			if (curr == 99)
			{
				cout << "Stall->";
			}
			else
			{
				cout << "P" << curr << "->";
				remainingExecution[curr] -= 1;
				if (remainingExecution[curr] == 0)
					available[curr] = 0;
			}
		}
	}
};

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int findlcm(int arr[], int n)
{

	int ans = arr[0];


	for (int i = 1; i < n; i++)
		ans = (((arr[i] * ans)) / (gcd(arr[i], ans)));

	return ans;
}

int main()
{
	cout << "Using Earliest Deadline First Algorithm" << endl;

	int processes = 0;
	cout << "Enter how many processes do you want to schedule : ";
	cin >> processes;
	int* deadlines = new int[processes];
	int* exe = new int[processes];
	int exec, period;
	for (int i = 0; i < processes; i++)
	{
		cout << "Enter Period for P " << i << " : ";
		cin >> deadlines[i];
		cout << "Enter Execution Time for P " << i << " : ";
		cin >> exe[i];
	}

	int schedulable;
	int result = findlcm(deadlines, processes);
	cout << "LCM of given " << processes << " integers is: " << result << endl;

	Processes P(processes, exe, deadlines);
	schedulable = P.Run(result);
	if (!schedulable)
	{
		cout << endl << "Given Process, Deadline and Execution time combination is not schedulable" << endl;

	}
	else
	{
		cout << endl << "Given Process, Deadline and Execution time combination is schedulable" << endl;
	}
}