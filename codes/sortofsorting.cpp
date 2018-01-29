#include <bits/stdc++.h>
using namespace std;

void printVector(const vector<string>& names){
	for(unsigned int i=0; i<names.size(); i++){
		cout << names[i] << endl;
	}
	
}

int main(){
	vector<string> names;
	int num;


	cin>>num;
	while(num!=0){
		for(int i=0; i<num; i++){
			char newname[21];
			cin>>newname;
			names.push_back(newname);
		}

		stable_sort(names.begin(), names.end(), [](string a, string b){
			if(a[0]!=b[0]) return a[0]<b[0];
			else return a[1]<b[1];
		}); //taught by StevenHarlim // what kind of sorcery is this

		printVector(names);
		names.erase(names.begin(), names.end());

		cin>>num;
	}

	return 0;
}