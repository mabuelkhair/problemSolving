#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a;
	int n;
	int x1,y1,x2,y2;
	cin>>a>>n;
	y1=a-'a';
	x1=8-n;
	cin>>a>>n;
	y2=a-'a';
	x2=8-n;
//	cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
//	L, R, U, D, LU, LD, RU or RD.
	if(x1==x2&&y1==y2)
	cout<<0<<endl;
	else
	if(x1==x2&&y1!=y2)
	{
		if(y1>y2)
			{
				cout<<y1-y2<<endl;
				for(int i=0;i<y1-y2;i++)
				cout<<"L"<<endl;
			}
		else
		{
			cout<<y2-y1<<endl;
			for(int i=0;i<y2-y1;i++)
						cout<<"R"<<endl;

		}

	}
	else
		if(y1==y2&&x1!=x2)
		{
			if(x1>x2)
				{
					cout<<x1-x2<<endl;
					for(int i=0;i<x1-x2;i++)
					cout<<"U"<<endl;
				}
			else
			{
				cout<<x2-x1<<endl;
				for(int i=0;i<x2-x1;i++)
							cout<<"D"<<endl;

			}

		}
		else
		{
			vector<string>res;
			int c=0;
			int diffx=x1-x2,diffy=y1-y2;
			while(diffx<0&&diffy<0)
			{
				c++;
				res.push_back("RD");
				diffx++;
				diffy++;
			}
			while(diffx>0&&diffy>0)
						{
							c++;
							res.push_back("LU");
							diffx--;
							diffy--;
						}
			while(diffx<0&&diffy>0)
						{
							c++;
							res.push_back("LD");
							diffx++;
							diffy--;
						}
			while(diffx>0&&diffy<0)
								{
									c++;
									res.push_back("RU");
									diffx--;
									diffy++;
								}

			if(diffx!=0)
			{
				bool b=0;
				if(diffx<0)
					b=1;
				diffx=abs(diffx);
				for(int i=0;i<diffx;i++)
				{
					c++;
					if(b)
						res.push_back("D");
					else
						res.push_back("U");

				}
			}
			else
				if(diffy!=0)
							{
								bool b=0;
								if(diffy<0)
									b=1;
								diffy=abs(diffy);
								for(int i=0;i<diffy;i++)
								{
									c++;
									if(b)
										res.push_back("R");
									else
										res.push_back("L");

								}
							}

		cout<<res.size()<<endl;
		for(int i=0;i<res.size();i++)
			cout<<res[i]<<endl;
		}


	return 0;
}
