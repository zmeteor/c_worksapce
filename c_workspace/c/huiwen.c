/*************************************************************************
	> File Name: huiwen.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月21日 星期五 15时40分22秒
 ************************************************************************/

#include<stdio.h>

#define MAX 100

int fun(char str[],int n);

int main()
{
    int i = 0;
    int n = 0;
    int r = 0;
    char str[MAX] = "\0";
    char ch;

    while((ch = getchar()) != '\n')
    {
        str[i] = ch;
        i++;
        n++;
    }

    r = fun(str,n);

    if(r == -1)
    {
        printf("no!");
    }
    else
    {
        printf("yes!");
    }
    
}

int fun(char str[],int n)
{
    int i = 0;
    for(i = 0;i < n/2;i++)
    {
        if(str[i] != str[n-1-i])
        {
            return -1;
        }
    }
}
