/*************************************************************************
	> File Name: h.c
	> Author: 
	> Mail: 
    > Main:回文
	> Created Time: 2017年08月21日 星期一 13时28分25秒
 ************************************************************************/

#include<stdio.h>

int fun(char *p);

int main()
{
    int ret = 0;
    char str[] = "assgdsa";

    ret = fun(str);

    if(ret == 1)
    {
        printf("yes!\n");
    }
    else 
    {
        printf("no!\n");
    }

    return 0;
}

int fun(char *p)
{
    int i = 0;
    int j = 0;
    while(p[i] != '\0')
    {
        i++;
    }

    while(i > j)
    {
        if(p[i-1] != p[j])
        {
            return 0;
        }
        i--;
        j++;
    }

    return 1;
}
