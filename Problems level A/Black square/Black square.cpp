#include <iostream>
#include <string>

using namespace std;

int main() {
	int a1, a2, a3, a4, cals = 0;
	cin >> a1 >> a2 >> a3 >> a4;
	string s; cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '1') {
			cals += a1;
		} else if (s[i] == '2') {
			cals += a2;
		} else if (s[i] == '3') {
			cals += a3;
		} else {
			cals += a4;
		}
	}
	cout << cals;
}
