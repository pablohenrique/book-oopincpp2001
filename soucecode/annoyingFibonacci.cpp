#include<iostream>
using namespace std;

unsigned long fibonacci(unsigned long number){
	if(number <= 1)
		return number;
	return fibonacci(number - 2) + fibonacci(number -1);
}

int main(){
	cout << "Let's play with a fibonacci recursive function.\n";
	start: cout << "Please, insert a number greater than 0: ";
	unsigned long number;
	cin >> number;
	cout << "The result is: " << fibonacci(number) << ". \n\n";
	cout << "Do you wanna know someother fibonacci number(0 = no)? ";
	int input;
	cin >> input;
	if(input == 0) 
		cout << "OK. Thanks for using me! \n";
	else
		goto start;
	return 0;
}
