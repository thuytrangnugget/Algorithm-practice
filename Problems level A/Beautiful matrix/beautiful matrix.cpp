#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int x;
	int res;
	for (int i = 1; i <= 5; i++)
		for (int j = 1; j <= 5; j++) {
			cin >> x;
			if (x == 1) {
				res = abs(i - 3) + abs(j - 3);
				break;
			}
		}
	cout << res << endl;
	return 0;
}
