#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 100

int main()
{
	double balance = 0.0;
	char line1[MAXLINE], line2[MAXLINE];

	while(gets(line1) > 0)
	{
		gets(line2);
		
		if(strcmp(line1, "deposit") == 0)
		    balance += atof(line2);
		else if(strcmp(line1, "check") == 0)
		    balance -= atof(line2);
		else
		{
		    printf("bad data line: not \"check\" or \"deposit\"\n");
		    continue;
		}
		
		printf("balance: %.2f\n", balance);
	}
	return 0;
}
