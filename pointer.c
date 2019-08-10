#include<stdio.h>
void fun(int *a, int *b)
{
  a=b;
  *a+=2;
  a=b;
}

int p=50,q=20;
int main()
{
  fun(&p,&q);
  fun(&p,&p);
  fun(&q,&q);
  printf("%d %d",p,q);
  return 0;
}
