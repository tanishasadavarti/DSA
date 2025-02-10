#include<iostream>
using namespace std;

int main(){
	int a,b,c,d;
	cout << "enter the value of a : ";
	cin >> a;
	cout << "enter the value of b : ";
	cin >> b;
	cout << "enter the value of c : ";
	cin >> c;
	cout << "enter the value of d : ";
	cin >> d;
	
if(a>b)
   {
   	//a,c,d
   	    if(a>c)
   	    {
		 //a,d
		    if(a>d)
		    {
		    	printf("a is maximum");
			}
			else
			{
				printf("d is maximum");
			}
 	}
		else
		{
			if(c>d)
			{
				printf("c is maximum");
			}
			else
			{
				printf("d is maximum");
			}
	   } 
   }
   else
   {
   	if(b>c)
   	{
   		if(b>d)
   		{
   		  	printf("b is maximum");
	    } 
		else
		{
		
   			printf("d is maximum");
   		}
   		
	   }
	else
	{
		if(c>d)
		{
		   	printf("c is maximum");
		}
		else
		{
			printf("d is maximum");
		}
	}
   }
}
	
	 