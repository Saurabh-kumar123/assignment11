#include<stdio.h>
int pri(int);
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    if(2==pri(n))
    printf("number is prime");
    else
    printf("number is not prime");
    return 0;
}
 int pri(int n)
 {
    int i,count=0,m;
    for(i=1;i<=n;i++)
    if(n%i==0)
    count++;
    return count;
 }
