#include<iostream>
using namespace std;

main(){
	
	int num1 = 10;
	int num2 = 20;
	int temp = num1;
	
	num1 = num2;
	num2 = temp;
	
	
	cout << "a = " << num1 << endl << "b = " << num2 ;
	
	
	return 0;
}


