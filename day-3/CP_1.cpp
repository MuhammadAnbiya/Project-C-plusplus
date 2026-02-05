#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	long long panjang = 202300;
	long long lebar = 48930;
	
	double luas = (double)panjang * lebar;
	
	cout.imbue(locale("id_ID.UTF-8"));
	
	cout << "Luasnya adalah : " << fixed << setprecision(0) << luas << " cm2" << endl;
	return 0;
}

