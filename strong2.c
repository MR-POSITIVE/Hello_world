//strong or not 
#include<stdio.h>
int main()
{

int num;
int temp;
int sum=0;
int j=1;
int factori = 1;


printf("enter the number");
scanf("%d",&num);

while(num != 0)
{
   temp = num % 10;

       while(j <= temp)
         {
           factori = factori * j; 
            j++;
         }
        printf("%d\n",factori);

       sum = sum + factori;

   num = num/10; 
}

printf("%d\n",sum);

if (sum == num)
printf("Strong\n");
if (sum != num)
printf("not strong");
}
