#include <iostream>
#include <limits>

using namespace std;

int main() {
    string firstName, fullName;

    	cout << "Apa nama depan kamu? " << endl;
    	cin >> firstName;
    	cout << "Nama depan tersimpan: " << firstName << endl;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Siapa nama lengkap kamu? " << endl;
	getline(cin, fullName); 
	cout << "Nama lengkap tersimpan: " << fullName << endl;

	return 0;
}
