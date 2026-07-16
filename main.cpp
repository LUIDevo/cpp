
#include <iostream>
using namespace std;

int add (int a, int b) {
	return a+b;
}

int main() {
	int x = 1, y=2;
	if (x < y) {
		cout << "Y IS BIGGER" << endl;
	}
	cout << add(x,y) << endl;
	cin >> x;
	cout << "Hello World!" << endl;
	cout << add(x,y) << endl;
	for (int i=0; i<5; i++) {
		cout << "HI";
	}
	return 0;
}
