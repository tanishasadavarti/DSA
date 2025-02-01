#include<iostream>
using namespace std;

main(){
	
	int age;
	cout << "age is : ";
	cin >> age;
	
	if( age<=0 || age>=100){
		cout << "Please enter a valid age!" << endl ;
	}
	else if(age>=18){
		cout << "you are eligibale for vote!" << endl ;

	}
	else if(age<18){
		cout << "you are not  eligibale for vote!" << endl ;

	}
	
	
	
	
	return 0;
}