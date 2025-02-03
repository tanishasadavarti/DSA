//WAP TO PRINT GRADES OF STUDENT BASED ON THEIR PERCENTAGE.

#include<iostream>
using namespace std;

main(){
	int student_persentage;
	cout << "Enter the persentage : ";
	cin >> student_persentage;
	
	if(student_persentage<50 || student_persentage>=40)
	{
		cout << "grade is 'E'!";
	}
	else if(student_persentage<60 || student_persentage>=50)
	{
		cout << "grade is 'D'!";
	}
	else if(student_persentage<80 || student_persentage>=70)
	{
		cout << "grade is 'C'!";
	}
	else if(student_persentage<90 || student_persentage>=80)
	{  
		cout << "grade is 'B'!";
	}
	else if(student_persentage<=100 || student_persentage>=90)
	{
		cout << "grade is 'A'!";
	}
	else
	{
		cout << "Fail!";
	}
	
	return 0;
}