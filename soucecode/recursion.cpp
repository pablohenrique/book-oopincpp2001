#include <iostream>
using namespace std;

int factorial(unsigned int number){
	if(number < 1)
		return 1;
	return number * factorial(number-1);
}

int main(){
	unsigned int chosenNumber;
	cout << "This is a CPP test for recursion. Welcome.\n";
	cout << "We will test a basic factorial here, OK?\n";
	cout << "Tell me a number and I will get it's factorial: ";
	cin >> chosenNumber;
	cout << "\nYour factorial is: " << factorial(chosenNumber) << "\n";
	return 0;
}
