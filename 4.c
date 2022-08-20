#include<stdio.h>
int pri(int);
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    
    printf("next prime is %d",pri(n));
    return 0;
}
 int pri(int n)
 {
    int i,j,count=0;
    for(i=n+1;i<=n*n;i++)
    {
        for(j=1;j<=i;j++)
        if(i%j==0)
        count++;
        if(count==2)
       {
         return i;
         break;
       }
       count=0;
    }
 }
