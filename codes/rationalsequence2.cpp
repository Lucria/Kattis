#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int testCase, index;
	int p, q;
	string temp, temp2;

	cin >> testCase;
	while(testCase--){
		stack<char> position;
		int i=1;
		int count=0;

		cin >> index;
		cin >> temp;

		istringstream iss(temp);
		while(getline(iss, temp2, '/')){
			if(count==0) p = stoi(temp2);
			else q = stoi(temp2);

			count++;
		}


		while(!(p==1 && q==1)){
			if(p<q){
				position.push('L');
				q = q - p;
				//cout << "L is pushed" <<endl;

			}else if(p>q){
				position.push('R');
				p = p - q;
				//cout << "R is pushed" <<endl;
			}
		}

		while(!position.empty()){
			if(position.top()=='L') i = 2*i;
			else if(position.top()=='R') i = 2*i+1;

			position.pop();
		}

		cout << index << " " << i << endl;
	}

	return 0;
}
