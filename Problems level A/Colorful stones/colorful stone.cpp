#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s, t;
	cin >> s >> t;
	int pos = 0;
	for (int i = 0; i < t.length(); i++) {
		if (t[i] == s[pos]) {
			pos += 1;
		}
	}
	cout << pos + 1;
	return 0;
}
