#include<iostream>
using namespace std;

int main(){
	const int SIZE = 5;
	int sum;
	int array[SIZE];

	cout << "Please, enter " << SIZE << " numbers each followed by an Enter key press: ";
	for(int j = 0; j < SIZE; j++){
		cin >> array[j];
		sum += array[j];
	}
	cout << "\n\n Info \n";
	cout << "Numbers:\t";
	for(int j = 0; j < SIZE; j++){
		if(j == SIZE-1){
			cout << array[j] << "\n";
			break;
		}
		cout << array[j] << ", ";
	}
	cout << "Average:\t" << sum/SIZE << "\n";
	cout << "Total:\t" << sum << "\n";
	return 0;
}
