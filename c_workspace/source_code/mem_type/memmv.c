/*************************************************************************
	> File Name: memmv.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月20日 星期六 15时04分18秒
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
#include<string.h>

void *memmv(void *d,const void *s,int count );

int main()
{
    //正常mv
    char a[100];
    char b[] = "hello";
    memmv(a,b,5);
    puts(a);

    putchar(10);

    //内存重叠
    char c[] = "memmove can be very useful.....";
    memmv(c+20,c+15,11);
    puts(c);
    return 0;
}



void *memmv(void *d,const void *s,int count )
{
    //若没有重叠
    if((unsigned char *)d >= (unsigned char *)s + count)
    {
        memcpy(d,s,count);
    }
    //若重叠,从尾巴开始拷贝
    else
    {
        unsigned char *p = (unsigned char *)d +count;
        unsigned char *q = (unsigned char *)s + count;

        while(count--)
        {
            *--p = *--q;
        }
    }

    return d;
}
