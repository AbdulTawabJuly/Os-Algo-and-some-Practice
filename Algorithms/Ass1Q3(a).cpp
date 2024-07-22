//#include<iostream>
//using namespace std;
//
//int median(int a[], int from, int to)
//{
//    int med = (from + to) / 2;
//    if ((a[from] < a[med] && a[med] <= a[to]) || (a[to] < a[med] && a[med] < a[from]))
//        return med;
//    else if ((a[med] < a[from] && a[from] < a[to]) || (a[to] < a[from] && a[from] < a[med]))
//        return from;
//    else if ((a[med] < a[to] && a[to] < a[from]) || (a[from] < a[to] && a[to] < a[med]))
//        return to;
//}
//
//void quickSort(int a[], int from, int to)
//{ // sort partition from ... to of array a
//    int i, pivot, new_val;
//    if (from < to) // at least 2 elements in partition
//    {
//        //pivot = from; --> old version, first element is pivot
//        pivot = median(a, from, to);
//        for (i = from; i <= to; i++)
//        {
//            new_val = a[i];
//            if (new_val < a[pivot])
//            { // shift values to the right
//                a[i] = a[pivot + 1];
//                a[pivot + 1] = a[pivot];
//                a[pivot] = new_val;
//                pivot++;
//            } // else a[i] stays put
//        }
//        quickSort(a, from, pivot - 1); // left partition
//        quickSort(a, pivot + 1, to); // right partition
//    } // else (from >= to) only 0 or 1 elements
//} // end quicksort
//
//
//
//void Print(int Arr[], int size)
//{
//    for (int i = 0; i < size; i++) 
//    {
//        cout << Arr[i] << " ";
//    }
//}
//
//int main() {
//    int Arr[6] = { 3,1,6,7,9,8 };
//    quickSort(Arr, 0, sizeof(Arr)/sizeof(Arr[0]));
//    Print(Arr, 6);
//
//}