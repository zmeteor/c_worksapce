/*************************************************************************
	> File Name: scmp.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月21日 星期一 13时10分13秒
 ************************************************************************/

#include<stdio.h>
#include<assert.h>

int scmp(const char *str1,const char *str2);

int main()
{
    int n = 0;

    char str1[] = "asdaasa";
    char str2[] = "asdaas";

    n = scmp(str1,str2);

    if(n > 0)
    {
        printf("str1 > str2");
    }
    else if(n == 0)
    {
        printf("str1 = str2");
    }
    else
    {
        printf("str1 < str2");
    }
    return 0;
}
int scmp(const char *str1,const char *str2)
{
    assert(str1 != NULL && str2 != NULL);

    while(*str1 && *str2 && *str1 == *str2)
    {
        ++str1;
        ++str2;
    }

    return *str1 - *str2;
}
