#include<iostream>
using namespace std;

void centimize(double&);
void centimize2(double*);
void dumbcentimize(double);

int main(){
	double var = 10.0;
	cout << "var = " << var << " inches" << endl;
	centimize(var);
	cout << "var = " << var << " centimeters" << endl;

	var = 5;
	cout << "var = " << var << " inches" << endl;
	centimize2(&var);
	cout << "var = " << var << " centimeters" << endl;

	var = 10;
	cout << "var = " << var << " inches" << endl;
	dumbcentimize(var);
	cout << "var = " << var << " centimeters?" << endl;
}

void centimize(double &v){
	v *= 2.54;
}

void centimize2(double *v){
	*v *= 2.54;
}

void dumbcentimize(double v){
	v *= 2.54;
}
