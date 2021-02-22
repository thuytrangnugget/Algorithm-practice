#include <iostream>
#include <string>

using namespace std;

int main() {
	int event; cin >> event;
	int avail = 0, untreat = 0;
	for (int i = 0; i < event; i++) {
		int x; cin >> x;
		if (x > 0) {
			avail += x;
		} else {
			if (avail > 0) {
				avail--;
			} else {
				untreat++;
			}
		}
	}
	cout << untreat;
}
