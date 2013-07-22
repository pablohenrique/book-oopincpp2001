#include <iostream>
using namespace std;

int main(){
	int i = 1;
	first: for(int i = 0; i < 10; i++)
		cout << "Every age has a language of its own\n";
	if(i == 1){
		i--;
		goto first;
	}
	cout << "\a";
	return 0;
}
