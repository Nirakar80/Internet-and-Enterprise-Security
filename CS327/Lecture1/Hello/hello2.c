#include <stdio.h> /* for printf() */

void Print(char *str);
int main(int argc, char **argv)
{
 char *myString="Hello, world!";
 Print(myString);
return 0;
}
void Print(char *str)
{
 printf("%s\n", str);
}
