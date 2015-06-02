#include<bits/stdc++.h>
using namespace std;
int main() {
	int a;
	cin >> a;
	set<int> s;
	int b;
	cin >> b;
	while (b--) {
		int x;
		cin >> x;
		s.insert(x);
	}
	cin >> b;
	while (b--) {
		int x;
		cin >> x;
		s.insert(x);
	}
if(s.size()==a)
	cout<<"I become the guy.\n";
else
	cout<<"Oh, my keyboard!\n";
	return 0;
}
