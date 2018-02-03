/*************************************************************************
	> File Name: strtok.c
	> Author: 
	> Mail: 
	> Created Time: 2018年02月03日 星期六 15时54分41秒
 ************************************************************************/
//字符串分割函数

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

char* strtok(char* str,const char* delim);

int main()
{
    char str[] = "hello#world#c";
    char* delim = "#";

    char* ret = strtok(str,delim);

    while(ret)
    {
        puts(ret);
        ret = strtok(NULL,delim);
    }
    return 0;
}
char* strtok(char* str,const char* delim)
{
    static char* last = NULL;
    register int ch;

    if(str == 0)
    {
        str = last;
    }

    do
    {
        if((ch = *str++) == '\0')
        {
            return 0;
        }
    }while(strchr(delim,ch));

    --str;
    last = str + strcspn(str,delim);
    if(*last)
    {
        *last++ = 0;
    }

    return str;
}
