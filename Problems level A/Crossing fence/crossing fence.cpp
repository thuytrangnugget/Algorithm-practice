#include<iostream>
using namespace std;

int n,h,x,ans;

int main() {
	cin >> n >> h;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x > h) ans++;
		ans ++;
	}
	cout << ans << "\n";
	return 0;
}
