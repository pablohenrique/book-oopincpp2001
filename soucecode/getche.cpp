#include<iostream>
using namespace std;
#include<stdio.h>

int main(){
	cout << "Let's count some characters, OK? Please, type some: ";
	int counter;
	while(char ch = getchar() != '\n')
		counter++;
	cout << "You typed " << counter << " characters \n";
	return 0;
}
