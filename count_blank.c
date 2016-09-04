#include<stdio.h>
main()
{
int c;
int n1;
int b1;
int t1;
n1=0;
b1=0;
t1=0;
while((c = getchar()) != EOF)
{

if (c == '\n')
++n1;

if ( c == '\t')
++t1;

if ( c == ' ')
++b1;
}
printf("%d%d%d\n",n1,t1,b1);
}
