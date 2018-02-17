#include <iostream>
#include <stack>
using namespace std;

int main() {
	unsigned long long int nums, value;
	stack<unsigned long long int> cardStack;

	cin >> nums;

	for (int i=0; i<nums; i++){
		cin >> value;
		if(!cardStack.empty()) {
			if((cardStack.top() + value)%2 == 0) {
				cardStack.pop();
				continue;
			}
		}

		cardStack.push(value); //push in the base value +
							   //rest of the cards who can't form
							   //even number with the adjacent one
	}

	cout << cardStack.size() <<endl; //size() -> num of cards in the stack

	return 0;
}