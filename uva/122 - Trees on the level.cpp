#include<bits/stdc++.h>
using namespace std;
bool complete = 1;

map<string, int> m;
int counter = 0;
vector<vector<int> > v(1000);
void rec(string s, int lvl) {
	counter++;
	v[lvl].push_back(m[s]);
	if (m.count(s + "L") > 0) {
		rec(s + "L", lvl + 1);
	}
	if (m.count(s + "R") > 0) {
		rec(s + "R", lvl + 1);
	}
}
int main() {

	v.clear();
			v.resize(1000);
			m.clear();
			counter = 0;
			complete = 1;
	string s;
	while (cin >> s) {


		if (s == "()") {
			if (m.count("") <= 0 || !complete)
				cout << "not complete" << endl;
			else {
				rec("", 0);
				if (counter != m.size())
					cout << "not complete" << endl;
				else {
					for (int i = 0; i < 1000; i++) {
						if (v[i].size() == 0)
							break;
						for (int j = 0; j < v[i].size(); j++) {
							if (i || j)
								cout << " ";
							cout << v[i][j];
						}

					}
					cout << endl;
				}
			}
			v.clear();
			v.resize(1000);
			m.clear();
			counter = 0;
			complete = 1;
		}
		else
		{
			int num;
			string emp;
			bool isRoot = false;
			if (s[s.size() - 2] == ',')
				isRoot = true;
			for (int i = 1; i < s.length() - 1; i++) {
				if (s[i] >= '0' && s[i] <= '9') {
					emp += s[i];
				} else if (s[i] == ',') {
					num = atoi(emp.c_str());
					emp = "";
					if (isRoot)
						break;
				} else {

					emp += s[i];
				}
			}

			if (m.count(emp) > 0)
				complete = 0;
			else
				m[emp] = num;
		}

	}

	return 0;
}
