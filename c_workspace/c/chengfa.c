/*************************************************************************
	> File Name: chengfa.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月03日 星期一 10时55分29秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i;
    int j;

    for(i = 1; i <= 9;i++)
    {
        for(j = 1;j <= i;j++)
        {
            printf("%d\t",i*j);
        }
        putchar(10);
    }
}
