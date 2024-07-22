//#include<iostream>
//using namespace std;
//
//void Print(int Arr[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << Arr[i] << " ";
//    }
//    cout << endl;
//}
//
//void Sort(int Arr[], int size)
//{
//    int start = 0;
//    int end = size - 1;
//    int mid = 0;
//
//    while (mid <= end)
//    {
//        if (Arr[mid] == 0)
//        {
//            
//            //int temp = 0;
//            int temp = Arr[start];
//            Arr[start] = Arr[mid];
//            Arr[mid] = temp;
//            start++;
//        }
//        else if (Arr[mid] == 1)
//        {
//            mid = mid + 1;
//        }
//        else
//        {
//          
//           // int temp = 0;
//            int temp = Arr[mid];
//            Arr[mid] = Arr[end];
//            Arr[end] = temp;
//
//            end--;
//        }
//    }
//
//    Print(Arr, size);
//}
//
//
//
//int main()
//{
//    int arr[5] = { 1,0,2,0,2 };
//    Sort(arr, 5);
//
//    int arr2[11] = { 1,2,1,2,1,2,1,2,1,2,0 };
//    Sort(arr2, 11);
//
//
//
//    return 0;
//}