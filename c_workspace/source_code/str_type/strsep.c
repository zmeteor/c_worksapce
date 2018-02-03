/*************************************************************************
> File Name: strsep.c
> Author: 
> Mail: 
> Created Time: 2018年02月03日 星期六 18时12分47秒
************************************************************************/
//分割字符串
//
#include<stdio.h>
#include<string.h>


char *my_strsep(char **str, const char *delim);

int main()
{
    char str[] = "he#llo#wor##ld*asd*jji*9";
    char* delim = "*#";

    char* s = strdup(str);
    char* ret = my_strsep(&s,delim);
    while(ret)
    {
        if(*ret != '\0')//排除连续出现分隔符时多打印空格
        {
            puts(ret);
        }
        ret = my_strsep(&s,delim);
    }
    return 0;
}

char *my_strsep(char **str, const char *delim)
{
    char *begin = NULL;
    char *end = NULL;

    begin = *str;
    if(begin == NULL) 
    {
        return NULL;
    }

    //delim分隔符是单个字符,调用strchr
    if(delim[0] == '\0' || delim[1] == '\0')
    {
        char ch = delim[0];
        if(ch == '\0')
        {
            end = NULL;
        }
        else
        {
            if(*begin == ch)
            {
                end = begin;
            }
            else if(*begin == '\0')
            {
                end = NULL;
            }
            else
            {
                end = strchr(begin + 1, ch);
            }
        }
    }
    else
    {
        end = strpbrk(begin, delim); //delim有两个字符以上,调用strpbrk
    }

    if(end)
    {
        *end++ = '\0';
        *str = end;
    }
    else
    {
        *str = NULL;
    }

    return begin;
}
