#include<stdio.h>
#include<string.h>

int main ()
{
    char string[100];
    int len, i;

    printf("Enter string: ");
    gets(string);

    len = strlen(string);

    printf("Reverse ordered words: ");

    for(i = len-1; i >= 0; i--)
	{
		if(string[i] == ' ')
		{
			string[i] = '\0';
			printf("%s ", &(string[i]) + 1);
		}
	}
	printf("%s", string);

    return 0;
}
