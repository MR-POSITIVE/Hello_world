#include<stdio.h>
main()
{
int num;
int i;
int sum =0;
printf("enter the num");
scanf("%d",&num);
while(num !=0 )
{
sum += num%10;
num=num/10;
}
printf("%d\n",sum);
}


