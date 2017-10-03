#include<stdio.h>

int main()
{
	int a1,a2,a3;
	int b1,b2,b3;
	int alicepoint=0;
	int bobpoint=0;
	
	
	scanf("%d %d %d",&a1,&a2,&a3);
	scanf("%d %d %d",&b1,&b2,&b3);
	if(a1>b1)
	{
	alicepoint+=1;
}
else if (a1==b1)
{
	alicepoint+=0;
}
else {
	bobpoint+=1;
}


	if(a2>b2)
	{
	alicepoint+=1;
}
else if (a2==b2)
{
	alicepoint+=0;
}
else {
	bobpoint+=1;
}



	if(a3>b3)
	{
	alicepoint+=1;
}
else if (a3==b3)
{
	alicepoint+=0;
}
else {
	bobpoint+=1;
}

	
	printf("%i",alicepoint);
	printf(" ");
	printf("%i",bobpoint);
	
	return 0;
}
