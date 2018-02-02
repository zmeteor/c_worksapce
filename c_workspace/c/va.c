/*************************************************************************
	> File Name: va.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月19日 星期六 15时18分26秒
 ************************************************************************/

#include<stdio.h>
#include<stdarg.h>

int sum(int num,...);
int main()
{
    printf("%d\n",sum(4,2,3,4,6));

    return 0;
}

int sum(int num,...)
{
    int i = 0;
    double s = 0.0;
    va_list ap;

    va_start(ap,num);

    for(i = 0;i < 4;i++)
    {
        s += va_arg(ap,int);
    }

    va_end(ap);

    return s;
}
