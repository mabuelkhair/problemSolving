#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int> > points;
double dist(pair<int, int> p1, pair<int, int> p2) {
	int n = (p1.first - p2.first) * (p1.first - p2.first)
			+ (p1.second - p2.second) * (p1.second - p2.second);
	return sqrt(double(n));
}
bool ySorter(pair<int, int> p1, pair<int, int> p2) {
	return p1.second < p2.second;
}
double colosestSplit(int st, int ed, int mid, double mn) {
	vector<pair<int, int> > result;
	double lower = points[mid].first * 1.0 - mn;
	double upper = points[mid].first * 1.0 + mn;
	for (int i = st; i <= ed; i++) {
		if(points[i].first>=(int)ceil(lower)&&points[i].first<=(int)ceil(upper))
			result.push_back(points[i]);
	}
	for(int i=0;i<result.size();i++)
	{
		for(int j=i+1;j<min((int)result.size(),i+8);j++)
			mn=min(dist(result[i],result[j]),mn);
	}
	return mn;
}
double colosestPoint(int st, int ed) {
	if (st >= ed)
		return 99999999.0;
	int mid = (st + ed) / 2;
	double p1 = colosestPoint(st, mid);
	double p2 = colosestPoint(mid + 1, ed);
	int mn = min(p1, p2);
	return colosestSplit(st, ed, mid, mn);
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		points.push_back(pair<int, int>(a, b));
	}
	sort(points.begin(), points.end());
	cout<<colosestPoint(0,n-1);

	return 0;
}
