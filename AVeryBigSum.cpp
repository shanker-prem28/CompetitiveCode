#include<iostream>
#include <stdint.h>
using namespace std;

int main()
{
	int i;
	long long int sum=0;
	cin>>i;
	long long int a[i];
	for(int j=0;j<i;j++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	cout<<sum;
	
	
	
	return 0; 
}