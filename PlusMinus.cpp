#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
	int n; 
	int ctrp=0;
	int ctrn=0;
	int ctrz=0;
	double fracp,fracn,fracz;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>0){
			ctrp++;
		}
		else if(a[i]<0)
		{
			ctrn++;
		}
		else if(a[i]==0) {
			ctrz++;
		}
	}
	fracp=(double)ctrp/(double)n;
	fracn=(double)ctrn/(double)n;
	fracz=(double)ctrz/(double)n;
	cout<<setprecision(6)<<fracp<<endl;
	cout<<setprecision(6)<<fracn<<endl;
	cout<<setprecision(6)<<fracz<<endl;
	
	
	
	
	return 0; 
}
