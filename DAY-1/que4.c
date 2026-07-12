//count digits in a number
#include<stdio.h>
int main(){
int n ,count=0;
printf("enter the no. to check digits");
scanf("%d",n);
while(n!=0)
{
count++;
n/=10;    
}
printf("digits=%d",count);

    return 0;
}