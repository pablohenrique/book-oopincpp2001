#include<iostream>
using namespace std;

int fibonacci(int number, int *record){
	if(record[number-2]) record[number-2] = fibonacci(number-2, record);
	if(record[number-1]) record[number-1] = fibonacci(number-1, record);
	record[number] = record[number-2] + record[number-1];
	return record[number];
}

int main(){
	cout << "Let's play with a fibonacci recursive function.\n";
	cout << "Please, insert a number greater than 0: ";
	int number;
	int record[number];
	cin >> number;
	cout << "The result is: " << fibonacci(number,record) << ". \n";
	return 0;
}
