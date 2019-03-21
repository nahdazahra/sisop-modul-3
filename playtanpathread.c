#include<stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
	int i,length=5;
	system("clear");
	for(i=length;i>0;i--)
	{
		printf("%d",i);
		fflush(stdout);
		sleep(1);
		system("clear");
	}
	system("xlogo");
}
