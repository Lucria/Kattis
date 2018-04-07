#include <bits/stdc++.h>
using namespace std;

typedef pair<string, int> thepair;

int main(){
	int numPpl;
	unordered_set<string> pplName;
	unordered_map<string, unordered_set<string>> wordtoppl;
	unordered_map<string, int> wordFreq;
	
	vector<thepair> sortword;
	string name, word, line;
	
	cin >> numPpl; cin.get();
	while(numPpl--){
		getline(cin, line);
		
		istringstream iss(line);
		iss >> name;
		pplName.insert(name);
		
		while(iss >> word){
			wordtoppl[word].insert(name); 
			wordFreq[word]++;
		}
	
	}
	
	int length = pplName.size();
	thepair temp;
	//bool exist = false;
	
	for(auto &ppl : wordtoppl){
		if((ppl.second).size() == length){
			//exist = true;
			temp.first = ppl.first;
			temp.second = wordFreq[ppl.first];
			
			sortword.push_back(temp);
		}
	}
	
	
	
	if(!sortword.empty()){
		//to be implemented
		sort(sortword.begin(), sortword.end(), [] (thepair& lhs, thepair& rhs){
			if(lhs.second != rhs.second)
				return (lhs.second)>(rhs.second);
			else
				return (lhs.first)<(rhs.first);
		});
		
		for(int i=0; i<sortword.size(); i++){
			cout << sortword[i].first <<endl;
		}
		
	}else cout << "ALL CLEAR"<<endl;
	
	return 0;
}