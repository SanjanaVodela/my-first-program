#include<stdio.h>
int main ()
{
int num,tem,rev=0,rem;
printf("enter the number:");
scanf("%d",&num);
tem=num;
while(num!=0)
{
rem=num%10;
rev=(rev*10)+rem;
num=num/10;
}
if (tem==rev)
{
printf("the number is a palindrome..");
}
else
{
printf("the number is not a palindrome...");
}
return 0;
}
