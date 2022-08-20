#include<stdio.h>
void pri(int);
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    
    pri(n);
    return 0;
}
 void pri(int n)
 {
    int j,count=0,i;
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=j;i++)
        if(j%i==0)
        count++;
        if(count==2)
        printf("%d ",j);
        count=0;
    }
 }
