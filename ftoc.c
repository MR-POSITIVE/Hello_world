#include<stdio.h>
void main()
{
float f, c;int lower=0;int upper=300;int step=20;
c=lower;
printf("ceil      farh \n");
while(c<=upper)
{
f=(c*(9/5))+32;

printf("%3.0f \t %6.1f \n",c,f);
c=c+step;
}
}
