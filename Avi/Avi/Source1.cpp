#include<iostream>
using namespace std;
class Practice {
private:
	int Age1;
protected:
	int Age2;
public:
	int Age3;
};
class Child :Practice {
	Practice *L;
	int h = L->Age2;
public:
	int GetAge() {
		int h = L.Age2;
		return h;
	}
};
int main() {
	Practice  A;
}