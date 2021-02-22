#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	for (int i = 0; i <a.size(); i++) {
		a[i] = towupper(a[i]);
		b[i] = towupper(b[i]);
	}
	
	cout << a << "\n";
	cout << b << "\n";
}
