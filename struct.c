//A function may return a structure to the calling procedure.
#include<stdio.h>

struct s_type {
int i;
double d;
} var1;

struct s-type f(void);

void main(void)
{
var1=f();
printf("%d %1f", var1.i, var1.d);
}

struct s_type f(void)
{
struct s_type temp;

temp.i=100;
temp.d = 123.23;

return temp;
}

This program passes a structure to a function.
#include

struct s_type {
int i;
double d;
} var1;

void f(struct s_type temp);
void main(void)
{
var1.i=99;
var1.d = 98.6;
f(var1);
}

void f(struct s_type temp)
{
printf("%d %1f", temp.i, temp.d);
}

The following program illustrates how to use a pointer to a structure.
#include
#include

strct s_type 
{
int i;
char str[80];
} s, *p;

void main(void)
{
p= &s;

s.i = 10; /* this is functionally the same */
p ->i=10; /* as this */
strcpy(p->str, "I like structures");

printf("%d %d %s", s.i, p->1, p->str);
} 
