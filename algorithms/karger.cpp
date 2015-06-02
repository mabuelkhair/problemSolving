#include<bits/stdc++.h>
using namespace std;
vector<int> list;
vector<pair<int, int> > edges;
void karger() {
	for(int i=0;i<list.size();i++)
		list[i]=i;
	int counter=list.size();
	for(int i=0;i<edges.size();i++)
	{
		if(list[edges[i].first]==list[edges[i].second])
			edges.erase(edges.begin()+i),i--;
	}
	while(counter>2)
	{
		int random=rand()%edges.size();
		int src=edges[random].first;
		int dst=edges[random].second;
		for(int i=0;i<list.size();i++)
		{
			if(list[i]==list[src])
				list[i]=list[dst];
		}

		for(int i=0;i<edges.size();i++)
			{
				if(list[edges[i].first]==list[edges[i].second])
					edges.erase(edges.begin()+i),i--;
			}
		set<int>s;
		for(int i=0;list.size();i++)
			s.insert(list[i]);
		counter=s.size();
	}
}
int main() {
	return 0;
}
