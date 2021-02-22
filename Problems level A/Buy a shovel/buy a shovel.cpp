#include <iostream>
#include <string>

using namespace std;

int main() {
	int price, burle;
	cin >> price >> burle;
	int count = 1;
	while (1) {
		if ((price * count) % 10 == burle || (price * count) % 10 == 0) {
			break;
		}
		++count;
	}
	cout << count;
}
