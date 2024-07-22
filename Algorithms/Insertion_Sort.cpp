//#include<iostream>
//using namespace std;
//void Print(int Arr[], int size) {
//	for (int i = 0; i<size; i++) {
//		cout << Arr[i] << " ";
//	}
//}
//void InsertionSort(int Arr[],int size) {
//
//	for (int i = 1; i < size; i++) {
//		int j = i - 1;
//		int key = Arr[i];
//		while (j >= 0 && Arr[j] > key) {
//			Arr[j + 1] = Arr[j];
//			j--;
//		}
//		Arr[j + 1] = key;
//	}
//
//	Print(Arr, size);
//}
//int main() {
//	int Arr[10] = { 2,1,6,4,9,0,7,8,3,2 };
//	InsertionSort(Arr, 10);
//
//}