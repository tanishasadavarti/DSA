#include<iostream>
using namespace std;

int main(){
	int n,first=53;
	cout << " enter the value of n : ";
	cin >> n;
	
	for(int i=1 ; i<=n ; i++)
	{
		cout << first <<  " " << first << " ";
		first -= 13;	
	}
	
	return 0;
}