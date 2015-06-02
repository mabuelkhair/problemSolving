#include<bits/stdc++.h>
using namespace std;
int main() {
		int arr[9];
		memset(arr,0,sizeof(arr));
		bool  check=0;
		for(int i=0;i<6;i++)
		{
			int a; cin>>a;
			a--;
			arr[a]++;
			if(arr[a]==4)
				check=1;
		}
		if(!check)
			return puts("Alien"),0;
		for(int i=0;i<9;i++)
			if(arr[i]==1)
				return puts("Bear"),0;
		puts("Elephant");
	return 0;
}
