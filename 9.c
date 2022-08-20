#include<stdio.h>
int square(int n)
{
     return n*n;
}
int main()
{
     int n;
     printf("enter a number\n");
     scanf("%d",&n);
     printf("squre is  %d",square(n));
     return 0;
}

