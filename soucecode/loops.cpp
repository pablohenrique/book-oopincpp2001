#include<iostream>
using namespace std;

int main(){
	int input;
	cout << "Let's play with lopps, shall we? \n Please, insert a number: ";
	cin >> input;
	cout << "\nThe input number is: " << input << "\n";
	cout << "First, let's play with while loop: \n";

	while(input != 0)
		cout << "\t While: " << input-- << "\n";
	cout << "input value: " << input << "\n";

	cout << "Another while loop: \n";
	while(true){
		if(input == 5)
			break;
		cout << "\t While: " << ++input << "\n";
	}

	cout << "Second, let's play with for loop: \n";
	for(int i = 0; i < 10; i++)
		cout << "\t For: " << (input--) + i << "\n";

	cout << "Another for loop: \n";
	for(;;){
		if(input == 5)
			break;
		cout << "\t For: " << ++input << "\n";
	}
	
	cout << "I think you've got it, right? For and While loops can use multiple statements, ok? Remember that.\n\n";
	return 0;
}
