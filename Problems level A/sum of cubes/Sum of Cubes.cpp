#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t; cin >> t;
	int flag = 0;
	long long a, b, x;
	
	for (int n = 0; n < t; n++) {
		cin >> x;
		if (flag == 1) break;
		for (long long i = 1; i < 10000; i++) {
			a = i * i * i;
			b = cbrt(x-a);
			if (a + b*b*b == x && b > 0) {
				flag = 1;
			}
		}
		if (flag == 0) cout << "NO\n";
		else cout << "YES\n";
		flag = 0;
	}
	
}
