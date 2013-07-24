#include<iostream>
using namespace std;

int main(){
	cout << "Please, insert an odd number which will be used to set the size of the pyramid: ";
	int size;
	cin >> size;
	int pyramidBase = 1+(2*(size-1));
	for(int i = 1; i <= size; i++){
		cout << i << "\t";
		for(int j = size; j > i; j--)
			cout << " ";
		int xTimes = pyramidBase - (2* (size-i));
		for(int x = 0; x < xTimes; x++)
			cout << "x";
		cout << "\n";
	}
}
