#include<iostream>
using namespace std;

#define SOCIALSECURITY 9083697222

int main(){
	const long SERIALN = 9628531L; // the 'L' is used for constant variables
	const float PI = 3.14159F; // same thing for the 'F' after the number;
	cout << "The sum of these two numbers is: " << SERIALN + PI + SOCIALSECURITY << "\n";
	return 0;
}
