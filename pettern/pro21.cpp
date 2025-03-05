#include <iostream>
using namespace std;

int main() 
{
	 char Alfa = 'A'; 
    for (int i=1;i<=5;i++) 
	{  
        for(int j=1;j<=i;j++) 
		{  
            cout << Alfa << " ";
            Alfa++;  
        }
        cout << endl;
    }
    return 0;
}