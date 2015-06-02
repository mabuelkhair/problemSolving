#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n, a, b;
	cin >> n >> a >> b;
	long long least = n * 6;
	if (a * b >= least)
		return cout << a * b << endl << a << " " << b << endl, 0;

	long long A = 0, B = 0;
	while (!A) {

		for (long long i = a; i * i <= least; i++) {
			if(least%i==0&&b<=least/i)
			{
				A=i; B=least/i;break;
			}
		}
		if(A)break;
		for (long long i = b; i * i <= least; i++) {
					if(least%i==0&&a<=least/i)
					{

						B=i; A=least/i;break;
					}
				}
		least++;

	}
cout<<A*B<<endl<<A<<" "<<B<<endl;
	return 0;
}
