#include<stdio.h>
void pri(int,int);
int main()
{
    int n,m;
    printf("enter a two number\n");
    scanf("%d%d",&n,&m);
    
    pri(n,m);
    return 0;
}
 void pri(int n,int m)
 {
    int j,count=0,i;
    for(j=n;j<=m;j++)
    {
        for(i=1;i<=j;i++)
        if(j%i==0)
        count++;
        if(count==2)
        printf("%d ",j);
        count=0;
    }
 }