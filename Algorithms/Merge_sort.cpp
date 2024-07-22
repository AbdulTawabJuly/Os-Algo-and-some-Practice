//#include<iostream>
//using namespace std;
//void Print(int Arr[], int size) {
//	for (int i = 0; i<size; i++) {
//		cout << Arr[i] << " ";
//	}
//}
//void Merge(int Arr[],int start,int mid,int end) {
//	int n1 = mid - start + 1;
//	int n2 = end - mid;
//	int *L=new int[n1+1];
//	int* R = new int[n2+1];
//	for (int i = 0; i < n1; i++) {
//		L[i] = Arr[start + i ];
//	}
//	for (int j = 0; j < n2; j++) {
//		R[j] = Arr[mid + j+1];
//	}
//	
//    int k = start;
//	int i = 0, j = 0;
//	while(i<n1&&j<n2) {
//		if (L[k] <= R[k]) {
//			Arr[k] = L[i];
//			i++;
//		}
//		else {
//			Arr[k] = R[j];
//			j++;
//		}
//	}
//
//	while (i < n1) {
//		Arr[k] = L[i];
//		i++;
//		k++;
//	}
//
//	while (j < n2) {
//		Arr[k] = R[j];
//		j++;
//		k++;
//	}
//}
//void MergeSort(int Arr[],int start,int end) {
//	if (start < end) {
//		int mid = (start + end) / 2;
//		MergeSort(Arr, start, mid);
//		MergeSort(Arr, mid+1, end);
//		Merge(Arr, start, mid, end);
//	}
//	
//}
//int main() {
//	int Arr[10] = { 2,1,6,4,9,0,7,8,3,2 };
//	MergeSort(Arr, 0,9);
//	Print(Arr, 10);
//}