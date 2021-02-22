#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int a, b; cin >> a >> b;
	string die_roll[6] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
	int x = max(a,b);
	cout << die_roll[6-x];
	return 0;
}
