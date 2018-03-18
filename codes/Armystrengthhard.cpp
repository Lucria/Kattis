#include <bits/stdc++.h>
using namespace std;

int main(){
	int testCase;
	int NG, NM, temp;

	cin>>testCase;
	while(testCase--){
		cin >> NG >> NM;
		priority_queue<int, vector<int>, greater<int>> godzilla;
		priority_queue<int, vector<int>, greater<int>> mechag;

		for(int i=0; i<NG; i++){
			cin >> temp;
			godzilla.push(temp);
		}

		for(int j=0; j<NM; j++){
			cin >> temp;
			mechag.push(temp);
		}

		while(!godzilla.empty() && !mechag.empty()){
			if (mechag.top() > godzilla.top()) godzilla.pop();
			else mechag.pop();
		}

		if(!godzilla.empty()) cout<<"Godzilla"<<endl;
		else if(!mechag.empty()) cout<<"MechaGodzilla"<<endl;
		else cout<<"uncertain"<<endl;
	}

	return 0;

}