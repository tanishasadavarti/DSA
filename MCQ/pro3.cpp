#include<iostream>
using namespace std;

int main(){
	int n;
	cout << " enter the value of n : ";
	cin >> n;
	
	int first=36;
	for(int i=1 ; i<=n ; i++){
		
		cout << first << " ";
		if(i %2 == 0){
			 first -= 4;
		}
		else
		{
			first -= 2 ;
		}
	}
	
	return 0;
}