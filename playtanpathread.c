#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
	pid_t child;
	int i, stat;
	char *argv1[] = {"clear", NULL};
	char *argv2[] = {"xlogo", NULL};
	child = fork();
	if (child==0) {
		execv("/usr/bin/clear", argv1);
	}
	else
	{
		for(i=0;i<6;i++)
		{
			child=fork();
			if(child==0) {
				printf("%d",i);
				fflush(stdout);
				sleep(1);
				execv("/usr/bin/clear", argv1);
			}

			else
			{
				while ((wait(&stat)) > 0);
			}

		}
		execv("/usr/bin/xlogo", argv2);
	}
	
}
