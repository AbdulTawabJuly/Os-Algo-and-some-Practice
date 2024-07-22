#include<iostream>
using namespace std;
int main()
{
	int max = -10;
	int Ar[9] = { -2,1 ,-3,4,-1,2,1,-5,4 };
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < i; j++)
		{
			int sum = 0;
			for (int k = i; k <= j; k++)
			{
				sum += Ar[k];
			}
			if (sum > max)
			{
				max = sum;
			}
		}
	}

	cout << max;
}