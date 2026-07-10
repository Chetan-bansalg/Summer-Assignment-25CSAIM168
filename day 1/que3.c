//Find factorial of a number
#include<stdio.h>
int main(){
int n,f=1;
printf("enter the no. for factorial");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
f=f*i;

}
printf("%d",f);

    return 0;
}