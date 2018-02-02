/*************************************************************************
	> File Name: switch.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月19日 星期三 23时05分42秒
 ************************************************************************/

#include<stdio.h>

#define MAX 100

int main()
{
    int m = 2;
    int i = 0;
    int n = 0;
    int a[MAX] = {0};

    while(m / 2 != 0)
    {
        a[i] = m % 2;
        i++;
        n++;
        m = m/2;
    }
    a[i] = m % 2;


    for(i = n;i >= 0;i--)
    {
        printf("%d",a[i]);
    }

    return 0;
}
