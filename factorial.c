#include<stdio.h>
void main()
{
int num,i,factorial=1;
printf("enter the number");
scanf("%d",&num);
for(i = 1;i <= num;i++)
{
factorial =factorial * i;

}
printf("%d\n",factorial);
}
