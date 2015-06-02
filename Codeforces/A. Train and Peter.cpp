#include<bits/stdc++.h>
using namespace std;
int main() {
	string s, r;
	cin >> s;
	r = s;
	int sz = s.size();
	reverse(r.begin(), r.end());
	bool f = 0, b = 0;
	string x1, x2;
	cin >> x1 >> x2;
	bool check=0;
	for(int i=0;i<sz;i++)
	{
//		cout<<i<<endl;

		if(!check)
		{
			string ss=s.substr(i,x1.size());
			if(ss==x1)
			{
				check=1;
				i+=x1.size()-1;
			}
		}else
		{
			string ss=s.substr(i,x2.size());
//			cout<<ss<<endl;
					if(ss==x2)
					{
						f=1;
						break;
					}
		}
	}
check=0;
	for(int i=0;i<sz;i++)
		{

			if(!check)
			{
				string ss=r.substr(i,x1.size());
				if(ss==x1)
				{
					check=1;
					i+=x1.size()-1;
				}
			}else
			if(check)
			{
				string ss=r.substr(i,x2.size());
						if(ss==x2)
						{
							b=1;
							break;
						}
			}
		}
	if (f && b)
		cout << "both\n";
	else if (f)
		cout << "forward\n";
	else if (b)
		cout << "backward\n";
	else
		cout << "fantasy\n";
	return 0;
}
