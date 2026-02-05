#include <iostream>
using namespace std;

int main(){
	string myName = "Muhammad Anbiya";
	cout << myName.length();
	cout << "Huruf pertama dari namaku adalah : " << myName[0] << endl;
	cout << "Huruf terakhir dari namaku adalah : " << myName[myName.length()-1] << endl;
	myName[myName.length()-1] = 'A';
	
	cout << "Huruf terakhir dari namaku dan di ganti ke huruf besar : " << myName[myName.length()-1] << endl;
	
	cout << "Huruf pertama tapi menggunakan fungsi at() : " << myName.at(0) << endl;

	return 0;
}
