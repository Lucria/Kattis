#include <iostream>
using namespace std;

int main(){
	int count=0, max, min, num, x;

	while(cin>>num){
		int isNewCase = 1;
        
		for(int i=0; i<num; i++) {
			cin>>x;
			if(x>max||isNewCase==1) max = x;
			if(x<min||isNewCase==1) min = x;
			isNewCase = 0;
		}

		cout<<"Case "<<++count<<": "<<min<<" "<<max<<" "<<max-min<<endl;
	}

	return 0;
}