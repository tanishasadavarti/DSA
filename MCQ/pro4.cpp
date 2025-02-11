#include<iostream>
using namespace std;

int main(){
	int n,first=22;
	cout << " enter the value of n : ";
	cin >> n;
	
	for(int i=1 ; i<=n ; i++)
	{
		cout << first << " ";
		if(i%2 == 0)
		{
			first += 2;
		}
		else
		{
			first--;
		}
	}
	
	return 0;
}