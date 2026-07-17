#include <iostream>
#include <vector>
using namespace std;

#include <chrono>
int main() {
	vector<double> results = {};
	for (int i=0; i<10; i++) {
		auto t0 = std::chrono::steady_clock::now();
		for (long j=0; j<1000000; j++) {
			long x = j+2;
		}
		auto t1 = std::chrono::steady_clock::now();
		auto ms = std::chrono::duration_cast<std::chrono::microseconds>(t1 - t0).count();
		results.push_back(ms);
	}
	for (double result : results) {
		cout << result << endl;
	}
	return 0;
}
