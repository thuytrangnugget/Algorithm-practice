#include <iostream>
#include <cmath>

using namespace std;


int main() {
	int n, ans; cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y, z; cin >> x >> y >> z;
		if (x + y + z >= 2) ans++;
	}
	cout << ans << "\n";
	return 0;
}
