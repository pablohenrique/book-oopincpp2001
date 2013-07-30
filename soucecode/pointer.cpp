#include<iostream>
using namespace std;

int main(){
	int a = 2, b = 1;
	int *p;
	int *t;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "p: " << p << endl;
	cout << "t: " << t << endl;
	cout << endl;
	cout << "&a: " << &a << endl;
	cout << "&b: " << &b << endl;
	cout << "&p: " << &p << endl;
	cout << "&t: " << &t << endl;
	cout << endl;
	cout << "p = a; t = p;" << "\n\n";
	p = &a;
	t = p;
	cout << " p: " << p << endl;
	cout << "*p: " << *p << endl;
	cout << "&p: " << &p << endl;
	cout << "\n\n";
	cout << " t: " << t << endl;
	cout << "*t: " << *t << endl;
	cout << "&t: " << &t << endl;
	cout << "*p + 1: " << *p + 1 << endl;
	cout << " a:" << a << endl;
	cout << "++*p" << ++*p << endl;
	cout << "*p: " << *p << endl;
	cout << "a: " << a << endl;
	return 0;
}
