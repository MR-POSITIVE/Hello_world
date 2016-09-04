#include<stdio.h>
main()
{
int temp;int num;int rnum;int i;
printf("enter num");
scanf("%d",&num);
while (num != 0)
{
temp=num%10;
rnum =(rnum + temp) * 10;
num= num/10;
}
printf("%d\n",rnum);
}
