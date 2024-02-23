#include<stdio.h>
int function(int n)
{
  if(n ==0 || n==1)
  {
    return 1;
  }
  else
  {
  return n*function(n-1);
  }
}

int main()
{
  int n;

  printf("Enter a number : ");
  scanf("%d",&n);

  function(n);

  printf("Factorial od %d is %d ",n,function(n));

  return 0;
}