#include<iostream>
using namespace std;

int main()
 {
    for (int i=5;i>=1;i--) 
	{ 
        for (int j=i;j<=5;j++) 
		{  
            if (j%2==0) 
			{
                cout << "0 ";
            } else 
			{
                cout << "1 ";
            }
        }
        cout << endl;
    }
    return 0;
}