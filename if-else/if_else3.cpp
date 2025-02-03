//WAP TO CHECK NUMBER IS NEGATIVE, POSITIVE, OR NEUTRAL.

#include<iostream>
using namespace std;

main(){
	int number;
	
	cout << "Enter the Number : ";
	cin >> number;
	
	if(number>0 )
	{
	    cout << "Number is Positive!";
	}
	else if(number < 0 )
	{
       	cout << "Number is Nagative!";

	}
	else if(number == 0)
	{
	   cout << "Number is Neutral";
	}
	
   return 0;
}