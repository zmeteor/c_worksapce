/*************************************************************************
	> File Name: e.c
	> Author: 
	> Mail: 
	> Created Time: 2017年03月26日 星期日 22时08分25秒
 ************************************************************************/

#include<stdio.h>

double set(int n)
{
    if(n == 1)
      return 1;
    else
      return(n*set(n-1));
}

int main()
{
    int i;
    double e = 1.0;

    for(i = 10000;i>=1;i--)
    {
        e += 1/set(i);
    }

   printf("%lf",e);
}

