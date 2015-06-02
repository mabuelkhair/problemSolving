#include<bits/stdc++.h>
using namespace std;
int board[8][8];
int const OO=1e7;
int mx;
bool vis_col[8];
bool vis_dia1[15];
bool vis_dia2[15];
void solve(int row,int sum)
{
	if(row==8)
	{
		mx=max(sum,mx);
		return ;
	}
	for(int i=0;i<8;i++)
	{
		if(!vis_col[i]&&!vis_dia1[row-i+7]&&!vis_dia2[row+i])
		{
			vis_col[i]=vis_dia1[row-i+7]=vis_dia2[row+i]=1;
			solve(row+1,sum+board[row][i]);
			vis_col[i]=vis_dia1[row-i+7]=vis_dia2[row+i]=0;
		}
	}
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		mx=-OO;
		memset(vis_col,0,sizeof(vis_col));
		memset(vis_dia1,0,sizeof(vis_dia1));
		memset(vis_dia2,0,sizeof(vis_dia2));
		for(int i=0;i<8;i++)
			for(int j=0;j<8;j++)
				cin>>board[i][j];
		solve(0,0);
		printf("%5d\n",mx);
	}
	return 0;
}
