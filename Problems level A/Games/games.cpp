#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	int sum = 0;
	int n; cin >> n;
	int host[30], guest[30];
	
	for (int i = 0; i < n; i++) {
		cin >> host[i] >> guest[i];
	}
	for (int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(host[i] == guest[j]) {
				sum++;	
			}
		}
	}
	cout << sum;
}
