#include<iostream>
using namespace std;

main(){
	
	int num1 = 10;
	int num2 = 20;
	
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	cout << "num1 = " << num1 << endl << "num2 = " << num2;
	
	return 0 ;
	
}