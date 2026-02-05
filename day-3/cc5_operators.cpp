/*
Declare two int variables named itemPrice and shippingCost, and assign them values
Create an int variable named sum
Calculate the total cost by adding itemPrice and shippingCost (store the result in sum)
Print the total cost using cout
*/


#include <iostream>
using namespace std;

int main(){
	int itemPrice = 12'000;
	int shippingCost = 5'000;
	
	int sum =  itemPrice + shippingCost;
	cout << "total cost : " << sum << endl;
	return 0;
} 	
