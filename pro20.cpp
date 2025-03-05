#include <iostream>
using namespace std;

int main() 
{
    for (int i=1;i<=5;i++) 
	{  
        char Alfa = 'A';  
        for (int j=1;j<=i;j++) 
		{  
            cout << Alfa << " ";
            Alfa++;  
        }
        cout << endl;
    }
    return 0;
}