#include <iostream>
using namespace std;

int main(){
	cout << "This is an example of how to use goto in C++\n";
	cout << "I've created a counter using the goto statement. Do you wanna see it (y/n): ";
	char answer;
	cin >> answer;
	if(answer == 'n')
		return 0;
	cout << "\n";
	int counter = 10;
	loop: cout << counter << "\n";
	counter--;
	if(counter == 0){
		cout << "Done, like I've said.\n";
		return 0;
	}
	goto loop;
}
