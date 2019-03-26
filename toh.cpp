#include<stdio.h>

void toh(int n,char s,char d,char i)
{
	if(n==1)
	{
		printf("\n move disk from %c to %c",s,d);
		return;
	}
	toh(n-1,s,i,d);
	printf("\n move disk from %c to %c",s,i);
	toh(n-1,i,d,s);
	}
int main()
{
	int disk;
	
	printf("enter number of disk");
	scanf("%d",&disk);
	toh(disk,'a','c','b');
	return 0;
}
