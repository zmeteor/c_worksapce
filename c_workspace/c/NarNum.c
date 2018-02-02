/*************************************************************************
	> File Name: NarNum.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月03日 星期一 22时06分06秒
 ************************************************************************/

#include<stdio.h>

int fun(int n);

int main()
{
    int i;
    int s;

    for(i = 100;i < 1000;i++)
    {
        s = fun(i);

        if(s == 1)
        {
            printf("%d\t",i);
        }

    }

    return 0;
}

int fun(int n)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int t1 = 0;

    t1 = n / 10;

    i = n % 10;
    j = t1 % 10;
    k = n / 100;

    if(n == i*i*i+j*j*j+k*k*k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
