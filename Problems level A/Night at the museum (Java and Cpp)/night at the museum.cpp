#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string s; 
int sum = 0;
int x;
int main() {
	cin >> s;
	x = abs(s[0] - 'a');
	if (x > 13) {
		sum += (26-x);
	} else {
		sum += x;
	}
	for (int i = 1; i < s.length(); i++) {
		x = abs(s[i] - s[i-1]);
		if (x > 13) {
			sum += (26-x);
		} else {
			sum += x;
		}
	}
	cout << sum;
	return 0;
}
