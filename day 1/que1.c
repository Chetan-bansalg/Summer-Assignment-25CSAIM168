//Write a program to Calculate sum of first N natural numbers.
#include<stdio.h>
int main()
{
int n ,add=0;
printf("enter the value of n natural no. to add ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
add=add+i;

}
printf("the sum upto %d is %d",n,add);
return 0;




}