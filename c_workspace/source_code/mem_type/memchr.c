/*************************************************************************
	> File Name: memchr.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月20日 星期六 15时27分23秒
 ************************************************************************/
//从buffer所指内存区域的前count个字节查找字符ch，当第一次遇到ch时停止查找

#include<stdio.h>
#include<assert.h>
#include<string.h>

void *my_memchr(char *buffer,char ch,int count);
int main()
{
    char s[] = "hello";
    char *p;
    char ch = 'e';

    p = (char *)my_memchr(s,ch,strlen(s));

    if(NULL == p)
    {
        printf("not find!\n");
    }
    else
    {
        printf("find the character:%c\n",*p);
    }

    return 0;
}
void *my_memchr(char *buffer,char ch,int count)
{
    while(count-- && (unsigned)ch != *(unsigned *)buffer)
    {
        buffer = (unsigned char*)buffer+1;
    }
    return (count ? (void *)buffer : NULL);
}
