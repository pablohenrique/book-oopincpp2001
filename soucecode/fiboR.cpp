#include<iostream>
using namespace std;

unsigned long fibonacci(unsigned long number){
	if(number <= 1)
		return number;
	return fibonacci(number - 2) + fibonacci(number -1);
}

int main(){
	cout << "Let's play with a fibonacci recursive function.\n";
	cout << "Please, insert a number greater than 0: ";
	unsigned long number;
	cin >> number;
	cout << "The result is: " << fibonacci(number) << ". \n";
	return 0;
}
