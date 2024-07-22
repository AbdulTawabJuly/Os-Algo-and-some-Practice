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
//	int executionTime;
//	int currentExecTime;
//	static int no_of_processes;
//	int priority;
//public:
//	Processes()
//	{
//		pid = 0;
//		period = 0;
//		executionTime = 0;
//		currentExecTime = 0;
//		priority = 0;
//	}
//
//	int GetPeriod()
//	{
//		return period;
//	}
//	void SetPriority(int p)
//	{
//		priority = p;
//	}
//	int GetExecutionTime()
//	{
//		return executionTime;
//	}
//	void SetProcessDetails(int p, int exec)
//	{
//
//		pid = no_of_processes;
//		no_of_processes++;
//		period = p;
//		executionTime = exec;
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
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (p[i].GetPeriod() > p[j].GetPeriod())
//			{
//				Processes temp = p[i];
//				p[i] = p[j];
//				p[j] = temp;
//
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		p[i].SetPriority(i + 1);
//	}
//	int* periods = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		periods[i] = p[i].GetPeriod();
//	}
//
//	int LCM = findlcm(periods, n);
//
//
//	int time = 0;
//	int j = 0;
//	int k = 0;
//	int prev;
//	for (int i = 0; i < LCM; i++)
//	{
//
//		j = 0;
//
//		if (k < n)
//		{
//			cout << "P" << p[k].GetID() << "-";
//		}
//		else
//		{
//			cout << " -";
//		}
//		time++;
//		p[k].SetCurrentExecTime(p[k].GetCurrentExecTime() + 1);
//		//goes through all proccesses and sets the time executed in a particular period(currentExecutionTime) to 0
//		//if a new period has started
//
//		for (int m = 0; m < n; m++)
//		{
//			if (time % p[m].GetPeriod() == 0)
//			{
//				//if a process misses its deadline
//				if (p[m].GetCurrentExecTime() < p[m].GetExecutionTime())
//				{
//					cout << "Process " << m << " missed deadline" << endl;
//					system("pause");
//					return 0;
//				}
//				p[m].SetCurrentExecTime(0);
//			}
//		}
//		while (p[k].GetCurrentExecTime() >= p[k].GetExecutionTime())
//		{
//			k++;
//
//		}
//
//		while (j < k)
//		{
//			if (time % p[j].GetPeriod() == 0)
//			{
//				k = j;
//
//				p[k].SetCurrentExecTime(0);
//				break;
//			}
//			j++;
//		}
//	}
//	system("pause");
//}