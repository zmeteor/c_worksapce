/*************************************************************************
	> File Name: tj.c
	> Author: 
	> Mail: 
	> Created Time: 2017年03月27日 星期一 22时19分52秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    char ch;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    while((ch = getchar()) != '\n')
    {
        if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <='z')
        {
            a++;
        }
        else if(ch == ' ')
        {
            b++;
        }
        else if(ch >= '0' &&ch <= '9')
        {
            c++;
        }
        else
        d++;

    }

    printf("letters=%d numbers=%d blank=%d other=%d",a,c,b,d);
}
