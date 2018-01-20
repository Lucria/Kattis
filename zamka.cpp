#include<iostream>
using namespace std;

int finddigit(int num){
	int sum=0;

	while(num!=0){
		sum += num%10;
		num /= 10;
	}

	return sum;
}

int main() {
	int L, D, X;
	int isMin=1;
	int maxNum, minNum, sum;

	cin>>L>>D>>X;

	for(int i=L; i<=D; i++){
		sum = finddigit(i);

		if(sum==X && isMin==1){
			isMin=0;
			minNum = i;
		}

		if(sum==X) maxNum = i;
	}

	cout<<minNum<<endl;
	cout<<maxNum<<endl;

	return 0;
}
