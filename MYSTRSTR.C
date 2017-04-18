#include <stdio.h>
#include<conio.h>
char *mystrstr(char *haystack,char *needle)
{clrscr();
if ( !*needle )
{
return haystack;
}
for ( ; *haystack; ++haystack )
{ if ( *haystack == *needle )
{	      /*  * Matched starting char -- loop through remaining chars. */

 char *h, *n;

for ( h=haystack, n=needle;*h && *n ; ++h, ++n )
{ printf("\nh=%c\n\n",*h);
  printf("\n\nn=%c\n",*n);
if ( *h != *n )
{
break;
}

}
printf("\nbreak\n");
if (*n=='\0') /* matched all of 'needle' to null termination */
{printf("\n!*n true=%c\n",*n);
return haystack; /* return the start of the match */
}

}

}

return 0;

}



int main()

{

char text[] = "The quick brown fox jumps over the lazy dog.";

char word[] = "brow";

char *found = mystrstr(text,word);

if (found!=NULL)

{

printf("%s",found);

}
else
printf("\nNotfound!!!\n\n");

return 0;

}