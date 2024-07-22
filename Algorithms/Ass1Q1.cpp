//// Merge sort in C++
//
//#include <iostream>
//using namespace std;
//
//// Merge two subarrays L and M into arr
//int Find_And_Compare(int arr[], int p, int q, int r,int k) {
//
//    int temp = arr[p];
//    int j = 0, unique = 0;
//    for (int i = p; i <= r; i++) {
//        if (j < k && temp == arr[i]) {
//            j++;
//        }
//        else if (j < k && temp != arr[i]) {
//            unique = arr[i-1];
//            j = 1;
//            temp = arr[i];
//        }
//        else if (j == k)
//        {
//            if (i == r) {
//                unique = arr[r];
//            }
//            j = 1;
//            temp = arr[i];
//            /*unique = arr[i];*/
//        }
//    }
//    return unique;
//}
//
//// Divide the array into two subarrays, sort them and merge them
//int FindUnique(int arr[], int l, int r,int k) {
//    if (l < r) {
//        // m is the point where the array is divided into two subarrays
//        int m = l + (r - l) / 2;
//
//        FindUnique(arr, l, m,k);
//        FindUnique(arr, m + 1, r,k);
//
//        // Merge the sorted subarrays
//     int unique=   Find_And_Compare(arr, l, m, r, k);
//      return unique;
//    }
//    return arr[l];
//}
//
//
//// Driver program
//int main() {
//    int arr[] = {56,42,42,42, 34,34,34, 18, 18,18,61,61,61 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//   cout<<"Unique Element is : "<< FindUnique(arr, 0, size - 1, 3);
//
//    return 0;
//}