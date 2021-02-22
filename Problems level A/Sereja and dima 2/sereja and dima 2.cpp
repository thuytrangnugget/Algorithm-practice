#include<iostream>

using namespace std;
int main() {
	int n; cin >> n;
	int arr[1000];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int r = n - 1;
	int l = 0;
	int sscore = 0, dscore = 0;
	for (int i = 0; i < n; i++) {
		if (i%2 == 0) {
			if (arr[l] < arr[r]) {
				sscore += arr[r];
				--r;
			} else if (arr[l] > arr[r]) {
				sscore += arr[l];
				++l;
			} else {
				sscore += arr[l];
			}
		} else {
			if (arr[l] < arr[r]) {
				dscore += arr[r];
				--r;
			} else if (arr[l] > arr[r]) {
				dscore += arr[l];
				++l;
			} else {
				dscore += arr[l];
			}
		}
	}
	
	cout << sscore << " " << dscore;
	return 0;
}
