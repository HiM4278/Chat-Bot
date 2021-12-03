#include<iostream>
using namespace std;

char before(char x){
	char text;
	if (x <= 'Z' && x >= 'B')
	{
		text = x - 1;
	}else if (x == 'A')
	{
		text = 'Z';
	}else{
		text = '0';
	}

   return text;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
