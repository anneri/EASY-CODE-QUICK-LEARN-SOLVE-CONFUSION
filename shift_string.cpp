#include<stdio.h>
#include<conio.h>
int main()
{
	char str[30];
	int i=0,letter;
	printf("\nenter string:    ");
	scanf("%s",str);
	printf("enter letter to shift: ");
		scanf("%d",&letter);
		for(i=0;str[i]!='\0';i++)
	{
		str[i]=str[i]+letter;

	}
	printf("\nchanged string    %s  ",str);
	getch();
}
