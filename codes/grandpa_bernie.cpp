#include <bits/stdc++.h>
using namespace std;

int main(){
	int numWent, numQuery, year, order;
	string country;
	unordered_map<string, vector<int>> entries;
	
	cin >> numWent;
	while(numWent--){
		cin >> country >> year;
		entries[country].push_back(year);
	}
	
	for(auto &place: entries){
		sort((place.second).begin(), (place.second).end());
	}

	cin >> numQuery;
	while(numQuery--){
		cin >> country >> order;
		cout << entries[country].at(order-1) << endl;
	
	}
	
	return 0;
}