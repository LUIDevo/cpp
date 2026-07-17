#include <iostream>
#include <vector>
using namespace std;

#include <chrono>
int main() {
	for (int i=0; i<10; i++) {
		auto t0 = std::chrono::steady_clock::now();
		for (long j=0; j<1000000; j++) {
			cout << j+2 << endl;
		}
		auto t1 = std::chrono::steady_clock::now();
		auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(t1 - t0).count();
	}
	return 0;
}
