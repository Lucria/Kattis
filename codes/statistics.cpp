#include <iostream>
using namespace std;

int main(){
	int count=0, max, min, num, x;

	while(cin>>num){                    //the while loop breaks if it reaches eof
		int isNewCase = 1;          //flag
                                            //num is the first integer in the new line, 
		                            //indicating how many numbers are there in the new case
		for(int i=0; i<num; i++) {
			cin>>x;             //x will be the integers scanned 
			if(x>max||isNewCase==1) max = x;  //isNewCase==1 to makesure that max and min are initialised
			if(x<min||isNewCase==1) min = x;
			isNewCase = 0;
		}

		cout<<"Case "<<++count<<": "<<min<<" "<<max<<" "<<max-min<<endl;
	}

	return 0;
}
