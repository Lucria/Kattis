#include <bits/stdc++.h>
using namespace std;

int main() {
	int size, j=0;
	string attack;

	cin>>attack;
	size = attack.length();

	while(j<size){
		if(attack[j]=='R'){
			if(attack[j+1]=='B'&&attack[j+2]=='L'||attack[j+1]=='L'&&attack[j+2]=='B'){
				cout<<"C";
				j+=3;
			}else{
				cout<<"S";
				j++;
			}
		}
				

		if(attack[j]=='B'){
			if(attack[j+1]=='R'&&attack[j+2]=='L'||attack[j+1]=='L'&&attack[j+2]=='R'){
			    cout<<"C";
			    j+=3;
			}else{
				cout<<"K";
				j++;
			}
		}
			
		if(attack[j]=='L'){
			if(attack[j+1]=='R'&&attack[j+2]=='B'||attack[j+1]=='B'&&attack[j+2]=='R'){
				cout<<"C";
				j+=3;
			}else{
				cout<<"H";
				j++;
			}
		}			
		
	}

	cout<<endl;

	return 0;
}