#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string s; cin >> s;
	int countUp = 0, countLow = 0;
	for (int i = 0; i < s.length(); i++) {
		if (isupper(s[i])) {
			countUp++;
		} else {
			countLow++;
		}
	}
	if (countUp > countLow) {
		for(int j = 0; j < s.length(); j++) {
			s[j] = towupper(s[j]);
		}
	} else {
		for(int j = 0; j < s.length(); j++) {
			s[j] = towlower(s[j]);
		}
	}
	cout << s << "\n";
	return 0;
}
