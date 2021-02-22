#include <iostream>
#include <string>
using namespace std;

int main() {
	long long n, x, d, ans = 0;
	char c;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> c >> d;
		if (c == '+') {
			x += d;
		} else if (d <= x) {
			x -= d;
		} else {
			ans++;
		}
	}
	cout << x << " " << ans;
}
