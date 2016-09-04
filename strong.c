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
// sum +=  factor(temp);
sum = sum + factori;

num = num/10; 
}

printf("%d\n",sum);

if (sum == num)
printf("Strong\n");
else
printf("not strong");

// if(sum != num)
//printf("Not Strong\n");*/
}

//int factor(int num)
//{
//int j;
//int fact=1;
//int k;
//k=num;
//for(j=1;j <= k;j++)
//{
//fact *= j;
//}
//return fact;
//}

