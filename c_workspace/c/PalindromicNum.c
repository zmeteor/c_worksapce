/*************************************************************************
	> File Name: PalindromicNum.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月04日 星期二 20时19分41秒
 ************************************************************************/

#include<stdio.h>

int fun(int n);

int main()
{
    int n;
    int s;

    printf("please input number:\n");
    scanf("%d",&n);

    s = fun(n);

    if(n == s)
    {
        printf("yes!");
    }
    else
    {
        printf("no!");
    }
}

int fun(int k)
{
    int t = 0;
    int s = 0;

    while(k / 10 != 0)
    {
        t = k % 10;
        s = s*10 + t;
        k /= 10;
    }

    return s*10 + k;
}
