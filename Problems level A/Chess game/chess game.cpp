#include<iostream>
#include<string>
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	int a = 0, b = 0;
	
	for (int i = 0; i < n ; i++) 
		if (s[i] == 'A') a++; else b++;
	
	if (a == b) cout << "Friendship" << endl;
	if (a > b) cout << "Anton" << endl;
	if (a < b) cout << "Danik" << endl;
	return 0;
}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int n; cin >> n;
//	string s; cin >> s;
//	int k_a = 0, k_d = 0;
//	for (int i = 0; i < n; i++)
//		if (s[i] == 'A') k_a++; else k_d++;
//	if (k_a > k_d) cout << "Anton" << endl;
//	if (k_a < k_d) cout << "Danik" << endl;
//	if (k_a == k_d) cout << "Friendship" << endl;
//	return 0;
//}

