#include<iostream>
using namespace std;

struct node{
	int value;
	node *next;
};

int main(){
	node n;
	n.value = 10;
	cout << n.value << endl;
	return 0;
}
