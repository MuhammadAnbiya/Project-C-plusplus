#include <iostream>
#include <string>
using namespace std;

int main (){
	string text = "Hello World";
	cout << text << endl;
	
	string firstName = "Muhammad";
	string lastName = "Anbiya";
	
	// concatenation
	string fullName = firstName + " " + lastName;
	cout << fullName << endl;
	

	// append
	string fullNameBackward = lastName.append(" " + firstName);
	cout << fullNameBackward << endl;

	return 0;
}
