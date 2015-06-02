#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&v)
{

		for(int j=0;j<v.size();j++)
		{
			if(j)
				cout<<" ";
			cout<<v[j]+1;
		}
		cout<<endl;

}
void addOne(vector<int>&v,int base)
{
	bool check=1;
while(check){

for(int i=v.size()-1;i>=0;i++)
{
	if(v[i]+1==base)
		{v[i]=0; continue;}
	else
	{
		v[i]++;
		check=0;
		break;
	}
}

}

}
int main() {
	int n, k, d;
	scanf("%d%d%d", &n, &k, &d);

	bool check=0;
	int po=1;
	for(int i=0;i<d;i++)
	{
		po*=k;
		if(po>n)
		{
			check=1;
			break;
		}
	}
	if(!check)
		return cout << -1 << endl, -1;
	vector<int>v(n);

	addOne(v,k);
	for(int i=0;i<d;i++)
	{

		addOne(v,k);
		print(v);
	}

	return 0;
}
