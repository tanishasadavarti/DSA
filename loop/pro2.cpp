#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "enter the value of n : ";
	cin >> n;
	
	int i=1;
	while(n>=1)
	{
		if(n%2 == 0)
		{
			cout << n << " ";
		}
		n--;
		
	}
	return 0;
}