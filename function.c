#include<stdio.h>
int add(int,int);
int main()
{
  int a,b,sum;
    printf("\nEnter the two numbers : ");
    scanf("%d%d", &a, &b);
    sum=add(a,b);
    printf("the sum is %d \n",sum);
    return 0;
}
  int  add(int x,int y)
{
    return (x+y);
}


