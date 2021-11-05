#include <iostream>
using namespace std;

void solve() {
	long long n, m, x;
	cin >> n >> m >> x;
	x--;
	long long c = x / n;
	long long r = x % n;
	cout << r*m + c + 1 << "\n";
}

int main() {
	long long t;
	cin >> t;
	for (long long i = 0; i < t; i++) {
		solve();
	}
	return 0;
}
