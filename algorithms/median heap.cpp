#include<bits/stdc++.h>
using namespace std;
class medianHeap {
	priority_queue<int, vector<int>, less<int> > small;
	priority_queue<int,vector<int> ,greater<int> > greater2;
public:
	void add(int x) {
		if (small.empty()&&greater2.empty()) {
			small.push(x);
			return;
		}
		if (x <= small.top())
			small.push(x);
		else
			greater2.push(x);

//		cout << "here";
		if (small.size() >greater2.size() +1) {
			int t = small.top();
			greater2.push(t);
			small.pop();
		} else if (small.size()+1<greater2.size()) {
			int t = greater2.top();
			small.push(t);
			greater2.pop();
		}
	}
	int median() {
		if(greater2.empty())
			return small.top();

		if(small.size()>greater2.size())
			return small.top();
		else
			return greater2.top();
	}

};
int main() {
	medianHeap p;
	int x;
	while (cin >> x) {
		p.add(x);
		cout << p.median() << endl;
	}

	return 0;
}
