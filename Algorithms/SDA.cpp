//#include<iostream>
//using namespace std;
//class Parent {
//public:
//	Parent() {
//		cout << "Parent Constructor" << endl;
//	}
//	virtual void Rent(int r)=0;
//};
//class Child1 :public Parent
//{
//	int rent;
//public:
//	Child1() {
//		cout << "Child1 Constructor" << endl;
//	}
//	void Hello() {
//		cout << "Hello World" << endl;
//	}
//	void Rent(int r) {
//		cout << "Rent 1 Called" << endl;
//		rent = r;
//	}
//};
//class Child2 :public Parent
//{
//	int rent;
//public:
//	Child2() {
//		cout << "Child2 Constructor" << endl;
//	}
//	void Hello() {
//		cout << "Hello World" << endl;
//	}
//	void Rent(int r) {
//		cout << "Rent 2 Called" << endl;
//		rent = r;
//	}
//};
//class Child3 :public Parent
//{
//	int rent;
//public:
//	Child3() {
//		cout << "Child3 Constructor" << endl;
//	}
//	void Hello() {
//		cout << "Hello World" << endl;
//	}
//	void Rent(int r) {
//		cout << "Rent 3 Called" << endl;
//		rent = r;
//	}
//};
//int main() {
//	/*Child1 abc;
//	abc.Hello();*/
//
//	int Arr[3] = {10,20,30};
//	Parent *Arr1[3];
//	Arr1[0] = new Child1;
//	Arr1[1] = new Child2;
//	Arr1[2] = new Child3;
//
//	for (int i = 0; i < 3; i++) {
//		Arr1[i]->Rent(Arr[i]);
//	}
//
//}