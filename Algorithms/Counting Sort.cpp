#include<iostream>
using namespace std;
void Print(int* Arr,int size) {
	for (int i = 0; i < size; i++) {
		cout << Arr[i] << " ";
	}
	cout << endl;
}
void Countins_Sort(int Arr[],int size) {

	
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (Arr[i] > max) {
			max = Arr[i];
		}
	}

	int *C = new int[max];
	for (int j = 0; j < max; j++) {
		C[j] = 0;
	}
	for (int j = 0; j < size; j++) {
		C[Arr[j]] ++;
	}

	for (int k = 0; k < max; k++) {
		C[k] += C[k - 1];
	}

	int* Result = new int[size];
	for (int l = size - 1; l >= 0; l++) {
		Result[C[Arr[l]]] = Arr[l];
		C[Arr[l]]--;

	}

	Print(Arr, size);
}
int main() {
	int Arr[10] = {2,3,5,1,6,4,2,7,0,3};
	Countins_Sort(Arr, 10);
}