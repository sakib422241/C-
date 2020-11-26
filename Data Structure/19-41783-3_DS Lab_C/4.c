#include <stdio.h>
#include <string.h>

int main()
{
char a[100], b[100];

printf("Enter the string : ");
gets(a);

strcpy(b, a); /* Copying input string */
strrev(b); /* Reversing the string */

if (strcmp(a, b) == 0) /* Comparing input string with the reverse string */
printf("ACCEPTED\n");
else
printf("REJECTED\n");

return 0;
}
