/*************************************************************************
	> File Name: lrdd.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月04日 星期二 20时58分40秒
 ************************************************************************/

#include<stdio.h>

double fun(int x,int n);

int main()
{
    int x = 0;
    int n = 0;
    double r = 0.0;
    printf("please input x and n:\n");
    scanf("%d %d",&x,&n);

    r = fun(x,n);

    printf("嘞让多德多项式的值为:%.2f",r);

    return 0;
}

double fun(int x,int n)
{
    if(n == 0)
    {
        return 1;
    }
    else if(n == 1)
    {
        return x;
    }
    else
    {
       return ((2*n-1)*x - fun(x,n-1)-(n-1)*fun(x,n-2))/n;
    }
}
