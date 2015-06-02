#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int titleToNumber(string s) {
    	int result=0;
    	for(int i=0;i<(int)s.length();i++)
    	{
    		result=result*26+(s[i]-'A'+1);
    	}
    	return result;
    }
};
int main()
{

	Solution s;
	cout<<s.titleToNumber("A");
return 0;}
