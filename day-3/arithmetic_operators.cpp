#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int x = 10;
	int y = 3;
	
	cout << "Nilai awal x adalah : " << x << endl;
	cout << "Nilai awal y adalah : " << y << endl;
	cout << "Addition x and y : " << x + y << "\n";
	cout << "Substraction x and y : " << x - y << "\n";
	cout << "Multiplication x and y : " << x * y << "\n";
	cout << "Divison x and y : " << fixed << setprecision(2) << (double)x / y << "\n";
	cout << "Modulus x and y : " << x % y << "\n";
	
	cout << "Nilai awalnya : " << x << endl;
	++x;
	cout << "Hasil increment : " << x << endl;
	--x;
	cout << "Hasil decrement : " << x << endl;
}	
