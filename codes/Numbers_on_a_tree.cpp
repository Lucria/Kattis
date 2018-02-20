#include <bits/stdc++.h>
using namespace std;

//tot it's a hard qn that requires priority queue functions

int main(){
	int height, i=1, isEmpty=0, size; //check if there's operation
	unsigned long long num;
	string operation;

	cin >> height;

	num = 1 + 2 * (pow(2, height) - 1); //get the total num of nodes
	

	getline(cin, operation);
	size=operation.length();

	for(int j=0; j<size; j++){
		isEmpty=1;
		if (operation.at(j)=='L') i = i*2;
		else if (operation.at(j)=='R') i = 2*i+1;
	}

	cout<< num+1-i <<endl;

	return 0;

}
