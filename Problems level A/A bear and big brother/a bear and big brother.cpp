#include <iostream>
#include <cmath>

                                                                                                                                                                          

using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;
	int count = 0;
	while (a <= b) {
		a *= 3;
		b *= 2;
		count++;
	}
	cout << count << "\n";
	return 0;
}


 

 

