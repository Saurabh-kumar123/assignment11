#include<stdio.h>
int hcf(int,int);
int main()
{
     int a,b;
     printf("enter a two number\n");
     scanf("%d%d",&a,&b);
     printf("HCF is %d",hcf(a,b));
     return 0;
}
int hcf(int a,int b)
{
     int i;
     for(i=a<b?a:b;i>=1;i--)
     {
          if(a%i==0&&b%i==0)
     {

          return i;
          break;
     }
     }

}
