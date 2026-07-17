#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

struct BenchResult {
	string name;
	vector<double> times_ms;
};

void print_stats(const BenchResult & r) {
	for (double result : r.times_ms) {
		cout << result << endl;
	}
}

int main() {
	vector<double> times = {};
	BenchResult results ("sum", times);
	for (int i=0; i<10; i++) {
		auto t0 = std::chrono::steady_clock::now();
		long long sum = 0;
		for (long j=0; j<1000000; j++) {
			sum += j+2;
		}
		auto t1 = std::chrono::steady_clock::now();
		auto ms = std::chrono::duration_cast<std::chrono::microseconds>(t1 - t0).count();
		cout << "sum: " << sum << "\n";
		results.times_ms.push_back(ms);
	}
	print_stats(results);
	return 0;
}
