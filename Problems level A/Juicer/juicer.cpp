#include <iostream>

using namespace std;

int main() {
	long long n, b, d, sum = 0, count = 0;
	cin >> n >> b >> d;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (x <= b) {
			sum += x;
		}
		if (sum > d) {
			count++;
			//empty the waste section
			sum = 0;
		}
	}
	cout << count <<endl;
	return 0;
}
