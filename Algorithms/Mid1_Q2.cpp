﻿//// Merge sort in C++
//
//#include <iostream>
//using namespace std;
//
//// Merge two subarrays L and M into arr
//int merge(int arr[], int p, int q, int r) {
//
//    // Create L ← A[p..q] and M ← A[q+1..r]
//    int n1 = q - p + 1;
//    int n2 = r - q;
//
//    int* L = new int[n1 + 1];
//    	int*M = new int[n2+1];
//
//
//    for (int i = 0; i < n1; i++)
//        L[i] = arr[p + i];
//    for (int j = 0; j < n2; j++)
//        M[j] = arr[q + 1 + j];
//
//    // Maintain current index of sub-arrays and main array
//    int i, j, k;
//    i = 0;
//    j = 0;
//    k = p;
//
//    // Until we reach either end of either L or M, pick larger among
//    // elements L and M and place them in the correct position at A[p..r]
//    int count = 0;
//    while (i < n1 && j < n2) {
//        if (L[i] <= M[j]) {
//            count = count + (n2 - j + 1);
//            arr[k] = L[i];
//            i++;
//        }
//        else {
//            arr[k] = M[j];
//            j++;
//        }
//        k++;
//    }
//
//    // When we run out of elements in either L or M,
//    // pick up the remaining elements and put in A[p..r]
//    while (i < n1) {
//        arr[k] = L[i];
//        i++;
//        k++;
//    }
//
//    while (j < n2) {
//        arr[k] = M[j];
//        j++;
//        k++;
//    }
//    return count;
//}
//
//// Divide the array into two subarrays, sort them and merge them
//int mergeSort(int arr[], int l, int r) {
//    if (l < r) {
//        // m is the point where the array is divided into two subarrays
//        int m = l + (r - l) / 2;
//
//       int x= mergeSort(arr, l, m);
//       int y= mergeSort(arr, m + 1, r);
//
//        // Merge the sorted subarrays
//        int z=merge(arr, l, m, r);
//
//        return x + y + z;
//    }
//    else {
//        return 0;
//    }
//}
//
//// Print the array
//void printArray(int arr[], int size) {
//    for (int i = 0; i < size; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//}
//
//// Driver program
//int main() {
//    int arr[] = { 6, 5, 12, 10, 9, 1 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//   cout<< mergeSort(arr, 0, size - 1)<<endl;
//    return 0;
//}