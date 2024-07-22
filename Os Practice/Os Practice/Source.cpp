#include<iostream>
#include<string>
using namespace std;
void FIZZBUZZ(string Arr[],int count)
{
	if (count == 0)
	{
		Arr[count] = to_string(count);
	}
	else if (count % 3 == 0 && count % 5 == 0)
	{
		Arr[count]="FIZZBUZZ";
	}
	else if(count %3 == 0)
	{
		Arr[count] = "FIZZ";
	}
	else if (count % 5 == 0)
	{
		Arr[count] = "BUZZ";
	}
	else
	{
		Arr[count] = to_string(count);
	}
}


int main()
{
	string arr[100];
	for (int i = 0; i <= 50; i++)
	{
		FIZZBUZZ(arr, i);
	}
	for (int i = 0; i <= 50; i++)
	{
		cout << arr[i] << endl;
	}

}
