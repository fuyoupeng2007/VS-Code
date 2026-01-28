#include<stdio.h>
int main(void)
{
    int l,u,num,sum;
    printf("Enter lower and upper integer limits:");
    while(l<u)
    {
      scanf("%d %d",&l,&u);
      for(num=l;num<=u;num++)
      sum+=num*num;
      printf("The sum of the squares from %d to %d is %d\n",l*l,u*u,sum);
      printf("Enter next set of limits:");
    }
    return 0;
}
