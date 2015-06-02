#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[100009];
	while (scanf ("%s", s) != EOF) {
		int len=strlen(s);
		list<char>res;
		list<char>::iterator it;
		it=res.begin();
		for (int i = 0; i < len; i++) {
				if(s[i]=='[')
					it=res.begin();
				else if(s[i]==']')
					it=res.end();
				else
					res.insert(it,s[i]);

			}

		for(it=res.begin();it!=res.end();it++)
			printf("%c",*it);
			puts("");

	}
	return 0;
}
