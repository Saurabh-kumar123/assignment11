#include<stdio.h>
int fact(int n)
{
     int i,fact=1;
     for(i=1;i<=n;i++)
          fact = fact *i;
     return fact;
}
 int sum(int n)
 {
      int sum=0,i;
      for(i=1;i<=n;i++)
      sum = sum + (fact(i)/i);
      return sum;
 }
int main()
{
     int n;
     printf("sum of series  %d",sum(5));
     return 0;
}
