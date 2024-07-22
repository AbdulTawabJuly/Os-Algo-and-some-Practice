////RMS (Rate Monotonic Scheduling)
//#include<iostream>
//using namespace std;
//typedef long long int ll;
//
//int gcd(int a, int b)
//{
//	if (b == 0)
//		return a;
//	return gcd(b, a % b);
//}
//
//ll findlcm(int arr[], int n)
//{
//
//	ll ans = arr[0];
//
//
//	for (int i = 1; i < n; i++)
//		ans = (((arr[i] * ans)) / (gcd(arr[i], ans)));
//
//	return ans;
//}
//
//class Processes
//{
//
//	friend ostream& operator<<(ostream&, Processes&);
//
//private:
//	int pid;
//	int period;
//	int next_deadline;
//	int remainingtime;
//	bool Check;
//	int Deadline;
//	int executionTime;
//	int currentExecTime;
//	
//	static int no_of_processes;
//public:
//	Processes()
//	{
//		pid = 0;
//		period = 0;
//		executionTime = 0;
//		Deadline = 0;
//		currentExecTime = 0;
//		Check = false;
//
//		next_deadline = 0;
//		remainingtime = 0;
//
//		//Deadlines = 0;
//	}
//
//	int GetPeriod()
//	{
//		return period;
//	}
//	/*void SetDeadlines(int lcm,int n)
//	{
//		int num = lcm / n;
//		Deadlines = new int[num];
//		int temp = executionTime;
//		for (int i = 0; i < num; i++)
//		{
//			Deadlines[i] = temp;
//			temp = temp + temp;
//		}
//	}*/
//	int GetExecutionTime()
//	{
//		return executionTime;
//	}
//	void SetRemainingTime(int t)
//	{
//		remainingtime = t;
//	}
//	int GetRemainingTime()
//	{
//		return remainingtime;
//	}
//	void SetProcessDetails(int p, int exec)
//	{
//
//		pid = no_of_processes;
//		no_of_processes++;
//		period = p;
//		executionTime = exec;
//		remainingtime = exec;
//		next_deadline = period;
//		Deadline = period;
//	}
//
//	int GetID()
//	{
//		return pid;
//	}
//	int GetCurrentExecTime()
//	{
//		return currentExecTime;
//	}
//	void SetCurrentExecTime(int n)
//	{
//		currentExecTime = n;
//	}
//};
//ostream& operator<<(ostream& out, Processes& p)
//{
//	cout << "P" << p.pid << "( " << p.executionTime << " , " << p.period << " )";
//	return out;
//}
//int Processes::no_of_processes = 0;
//int main()
//{
//	int n;
//	cout << "Enter how many processes do you want to schedule : ";
//	cin >> n;
//	Processes* p = new Processes[n];
//	int exec, period;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Enter Period for P " << i << " : ";
//		cin >> period;
//		cout << "Enter Execution Time for P " << i << " : ";
//		cin >> exec;
//		p[i].SetProcessDetails(period, exec);
//	}
//
//	int* Deadlines = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		Deadlines[i] = p[i].GetPeriod();
//	}
//
//	int LCM = findlcm(Deadlines, n);
//
//	int time = 0;
//	int j = 0;
//	int k = 0;
//	int prev;
//	int priority = 0;
//	int temp = 0;
//
//	for (int i = 0; i < n - 1; i++) // Sorting Processes on the basis of Deadlines
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (p[i].GetPeriod() > p[j].GetPeriod())
//			{
//				Processes tempP = p[i];
//				p[i] = p[j];
//				p[j] = tempP;
//			}
//		}
//	}
//
//	for (int i = 0; i < LCM; i++)
//	{
//		/*for (int j = 0; j < n-1; j++)
//		{
//			if (time - p[j].GetPeriod() < time - p[j + 1].GetPeriod())
//			{
//				temp = j;
//			}
//			else
//			{
//				temp = j + 1;
//			}
//		}*/
//
//		if (temp < n)
//		{
//			cout<<p[temp].GetID() << " - ";
//		}
//		else
//		{
//			cout << " - ";
//		}
//		
//		if (p[temp].GetRemainingTime() > 0)
//		{
//			cout << "Executing P" << p[temp].GetID() << " at time " << time;
//			p[temp].SetRemainingTime(p[temp].GetRemainingTime() - 1);
//		}
//		else if (p[temp].GetRemainingTime() == 0)
//		{
//			cout << "Process P" << i << " finished executing" << endl;
//		}
//		
//		p[temp].SetCurrentExecTime(p[temp].GetCurrentExecTime() + 1);
//
//		
//		
//
//		if (time == LCM) 
//		{
//			return 0; 
//		}
//		time++;
//	}
//	system("pause");
//}