//20120384  CS_4 Mostafa mohamed ibrahim
#include<bits/stdc++.h>
using namespace std;
#define hashSize 7919
class hashTable {
	// key and value
public:
	vector<pair<int, int> > hashTable[hashSize];
	int random = (rand() % 7919);
	int hashing(int key) {
		return (key * random) % hashSize;
	}
	void insert(int key, int value) {
		int index = hashing(key);
		bool exist = false;
		for (int i = 0; i < hashTable[index].size(); i++) {
			// if you want to stay the old value just remove hashTable[index][i].second=value
			if (hashTable[index][i].first == key) {
				hashTable[index][i].second = value;
				exist = true;
			}
		}
		if (!exist)
			hashTable[index].push_back(pair<int, int>(key, value));
	}
	void erase(int key) {
		int index = hashing(key);
		for (int i = 0; i < hashTable[index].size(); i++) {
			if (hashTable[index][i].first == key) {
				hashTable[index].erase(hashTable[index].begin() + i);
				i--;
			}
		}
	}
	int find(int key) {
		int index = hashing(key);
		for (int i = 0; i < hashTable[index].size(); i++) {
			if (hashTable[index][i].first == key) {
				return hashTable[index][i].second;
			}
		}
		return -1;
	}
};

int main() {
	hashTable h;
	while (true) {
		cout
				<< "enter 1 to insert <key,value>\n2- to delete <key>\n3- to find if exist or no (-1 for not exist)\n";
		int choice;
		cin >> choice;
		if (choice == 1) {
			int key, value;
			cout << "enter key and the value\n";
			cin >> key >> value;
			h.insert(key, value);
		}
		if (choice == 2) {
			int key;
			cout << "enter the key\n";
			cin >> key;
			h.erase(key);
		}
		if (choice == 3) {
			int key;
			cout << "enter the key\n";
			cin >> key;
			cout << "value=" << h.find(key) << endl;
		}
	}
	return 0;
}
