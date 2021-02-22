#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n, m, a[100+2], x, y;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	cin >> m;
	while (m--) {
		cin >> x >> y;
		a[x-1] += (y-1);
		a[x+1] += (a[x] - y);
		a[x] = 0;
	}
	for (int i = 1; i <= n; i++) {
		cout << a[i] << endl;
	}
	return 0;
}
