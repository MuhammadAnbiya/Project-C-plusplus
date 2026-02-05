#include <iostream>
using namespace std;

int number = 2004;
double phi = 3.14;
char initial  = 'A';
string myName = "Muhammad Anbiya Fatah";
bool decision = true;

int main(){
	int myNum;
	myNum = 284;
	myNum = 482;
	cout << myNum << "\n";
	cout << number << "\n" << phi << "\n"  << initial << "\n" << myName << "\n" << decision  << "\n";
	cout << "Hello my name is " << myName << " I was born in " << number << " my initial is " << initial 
	<< " my favorite decimal is phi or to be spesific " << phi << " and i always try to be the " << decision << "\n";

	int ans = number + myNum;
	cout << ans;
	return 0;
}
