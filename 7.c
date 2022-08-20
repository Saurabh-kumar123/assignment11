#include<stdio.h>
void fab(int);
int main()
{
     int n;
     printf("enter a number\n");
     scanf("%d",&n);
     fab(n);
     return 0;
}
 void fab(int n)
 {
      int a=-1,b=1,c=0,count=0;
      while(c<n)
      {
           c=a+b;
           count++;
           a=b;
           b=c;
      }
      printf("%d  tern",count);
 }
