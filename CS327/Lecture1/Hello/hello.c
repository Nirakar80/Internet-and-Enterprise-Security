#include <stdio.h>

void Print(char *str);

int main (int argc, char **argv)

{
	char *myString = "Hello, World!";
	printf("%s\n", myString);
return 0;
}

void Print(char *str)
{
	printf("%s\n", str);
}
