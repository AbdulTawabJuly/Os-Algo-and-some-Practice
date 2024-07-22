//#include<iostream>.
//#include <algorithm>
//using namespace std;
//void swap(int* a, int* b)
//{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int PartitionPart2(int a[], int low, int high)
//{
//	int pivot, index, i;
//	index = low;
//	pivot = high;
//	for (i = low; i < high; i++)
//	{
//		if (a[i] < a[pivot])
//		{
//			swap(&a[i], &a[index]);
//			index++;
//		}
//	}
//	swap(&a[pivot], &a[index]);
//
//	return index;
//}
//int Partition(int a[], int low, int high, int k)
//{
//	int index;
//	if (low < high)
//	{
//		index = PartitionPart2(a, low, high);
//		if (index == k - 1)
//			return k - 1;
//		else if (index > k - 1)
//			Partition(a, low, index - 1, k);
//		else
//			Partition(a, index + 1, high, k);
//	}
//}
//
//int main()
//{
//	/*int n, i, k, kk;
//	cout << "\nEnter the number of element: ";
//	cin >> n;*/
//	/*int* arr = new int[n];
//	for (i = 0; i < n; i++)
//	{
//		cout << "Enter element " << i + 1 << ": ";
//		cin >> arr[i];
//	}
//
//	cout << "\nEnter the k : ";
//	cin >> k;
//	kk = Partition(arr, 0, n - 1, k);
//	cout << "\nThe kth smallest element: " << arr[kk];*/
//
//
//	int Arr[9] = { 1,2,3,4,5,6,7,8,9 };
//	cout << max({1,2,3,4,5});
//
//
//
//	return 0;
//}