#include<iostream>
using namespace std;

enum Type{
	INT,
	FLOAT,
	STRING
};

void Print(void *ptr, Type type){
	switch(type){
		case INT:
			cout << *static_cast<int*>(ptr) << endl;
			break;
		case FLOAT:
			cout << *static_cast<float*>(ptr) << endl;
			break;
		default:
			cout << *static_cast<char*>(ptr) << endl;
			break;
	}
}

int main(){
	int a = 10;
	float b = 1.0;
	char c = 'a';
	void *p;
	cout << endl;
	cout << "Values of a, b, c: " <<  a << ", " << b << ", " << c << endl;
	cout << "c + 1: " << c + 1 << endl;
	cout << "p = (int)&a" << endl;
	p = &a;
	cout << "p = (float)&b" << endl;
	p = &b;
	cout << "p = (char)&c" << endl;
	p = &c;
	cout << "(void)  p: " << p << endl;
	cout << "(void) &p: " << &p << endl;
	p = &a;
	cout << "Printing p = (int)a: ";
	Print(p,INT);
	p = &b;
	cout << "Printing p = (float)b: ";
	Print(p,FLOAT);
	p = &c;
	cout << "Printing p = (char)c: ";
	Print(p,STRING);
	return 0;
}
