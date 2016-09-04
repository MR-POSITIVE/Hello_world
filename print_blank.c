#include<stdio.h>
main()
{
int c;
int n1;
int b1;
int t1;
n1=b1=t1=0;
while((c = getchar()) != EOF)
{
if( c == '\t')
{ c = "\t";
printf("%s\n",c);
}

if( c == '\n')
{
c = "\n";
printf("%s\n",c);
}

if ( c == ' ')
{
c= "\\";
printf("%s\n",c);
}

else
printf("%s\n",c);
}
}

