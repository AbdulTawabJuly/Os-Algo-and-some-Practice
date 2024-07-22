//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int partition(int arr[], int s, int e) {
//    int pivot = arr[e];
//    int i = s - 1;
//
//    for (int j = s; j < e; j++) {
//        if (arr[j] <= pivot) {
//            i++;
//            swap(arr[i], arr[j]);
//        }
//    }
//
//    swap(arr[i + 1], arr[e]);
//    return i + 1;
//}
//
//int findKthSmallest(int arr[], int s, int e, int k) {
//    if (k >= 0 && k <= e - s) {
// int pivotIndex = partition(arr, s, e);
//
//        if (pivotIndex - s == k) {
//            return arr[pivotIndex];
//        } else if (pivotIndex - s > k) {
//            return findKthSmallest(arr, s, pivotIndex - 1, k);
//        } else {
//            return findKthSmallest(arr, pivotIndex + 1, e, k - (pivotIndex - s + 1));
//        }
//    }
//
//    // Invalid input
//    return -1;
//}
//
//int main() {
//    int arr[] = {12, 3, 1, 7, 10, 19, 14};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int k = 3; // Find the 3rd smallest element
//
//    int result = findKthSmallest(arr, 0, n - 1, k);
//
//    if (result != -1) {
//        cout << "The " << k << "th smallest element is: " << result << endl;
//    } else {
//     cout << "Invalid input or k out of range." << endl;
//    }
//
//    return 0;
//}