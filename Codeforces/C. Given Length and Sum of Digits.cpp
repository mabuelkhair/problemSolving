#include<bits/stdc++.h>
using namespace std;
int main() {
	int m, s;
	cin >> m >> s;
	int num = 9 * m;
	if(m==1&&s==0)
		return cout<<"0 0\n",0;
	if (num < s || s == 0)
		return cout << "-1 -1\n", 0;
	int mnDiff=s-1,mxDiff=num-s;
	string mx=string(m,'9');
	string mn='1'+string(m-1,'0');
	for(int i=m-1;i>=0;i--)
	{
		if(mxDiff)
		{
			mx[i]-=min(9,mxDiff);
			mxDiff-=min(9,mxDiff);
		}
		if(mnDiff)
		{
			mn[i]+=min(9,mnDiff);
			mnDiff-=min(9,mnDiff);
		}
		if(!mnDiff&&!mxDiff)
			break;
	}
	cout<<mn<<" "<<mx<<endl;
	return 0;
}
