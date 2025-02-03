//WAP TO CHECK GIVEN NUMBER IS DIVISIBLE BY 7 OR NOT.

#include<iostream>
using namespace std;

main(){
	
	int num;
	cout << "Enter the number : ";
	cin >> num;
	
	if(num%7==0)
	{
		cout <<"This Number is divide by 7! ";
	}
	else
	{
		cout <<"This Number is not  divide by 7! ";
	}
	
	
	return 0;
}