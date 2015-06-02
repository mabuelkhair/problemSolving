#include<bits/stdc++.h>
using namespace std;
int main()
{
	string v[8]={"WWWWWWWW","WWWWWWWW","WWWWWWWW","WWWWWWWW","WWWWWWWW","WWWWWWWW","WWWWWWWW","WWWWWWWW"};
	string v2[8];
	int c=0;
	for(int i=0;i<8;i++)
	{
		cin>>v2[i];
		if(v2[i]=="BBBBBBBB")
		{
			c++;
			v[i]="BBBBBBBB";
		}
	}
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(v[j][i]!=v2[j][i])
			{
				c++;
				break;
			}
		}
	}
	cout<<c<<endl;
	return 0;
}
