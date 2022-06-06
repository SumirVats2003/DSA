// https://www.codechef.com/submit-v2/NEWPIECE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a,b,p,q;
		cin >> a >> b >> p >> q;
		int isum = a+b;
		int bsum = p+q;
		if(a==p && b==q) {
			cout << "0\n";
		}
		else {
			if(isum%2 == 0) {
				if(bsum%2 == 0) {
					cout << "2\n";
				}
				else {
					cout << "1\n";
				}
			}
			else {
				if(bsum%2 == 0) {
					cout << "1\n";
				}
				else {
					cout << "2\n";
				}
			}
		}
	}
	return 0;
}
