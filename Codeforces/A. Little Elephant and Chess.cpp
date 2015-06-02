#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	bool b=1;
	for(int i=0;i<8;i++)
	{
		cin>>str;
		if(str!="WBWBWBWB"&&str!="BWBWBWBW")
			b=0;
	}
	if(b)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
