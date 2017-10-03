#include<iostream>
#include<math.h>
using namespace std;
int main()
{	int n;
	int sum=0;
	int sum2=0;
	cin>>n;
	int a[n][n];
	for (int i=0; i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			if(i+j==(n-1)) {
			
				sum=sum+a[i][j];		
			}
			if(i==j)	{
				sum2+=a[i][j];

			}
		}
	}

	cout<<abs(sum-sum2);

	
	return 0;
}
