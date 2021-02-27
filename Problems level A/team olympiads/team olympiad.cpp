#include <iostream>

using namespace std;

int a, b, arr[4][5000], ma[4], ans;
int main() {
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cin >> b;
		//ma[] is indexed 0, but output is indexed 1
		arr[b][ma[b]++] = i; //position of i-th student
	}
	
	ans = min(ma[1], min(ma[2], ma[3]));
	cout << ans << endl;
	for (int i = 0; i < ans; i++) {
		cout << arr[1][i] << " " << arr[2][i] << " " << arr[3][i] << endl;
	}
}
