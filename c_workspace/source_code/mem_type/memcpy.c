/*************************************************************************
	> File Name: memcpy.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月20日 星期六 13时04分22秒
 ************************************************************************/
//由src所指向的内存区域拷贝count个字符到dest所指定的内存区域

#include<stdio.h>
#include<assert.h>

void *my_memcpy(void *dest,const void *src,int count);
int main()
{
    char a[100] = "hello";
    char b[] = "you";

    my_memcpy(a,b,sizeof(b));

    //printf("%lu\n",sizeof(b));
    puts(a);

    return 0;
}


void *my_memcpy(void *dest,const void *src,int count)
{
    assert(NULL != dest && NULL != src);
    unsigned char*p = (unsigned char *)dest;
    unsigned char*q = (unsigned char *)src;

    while(count--)
    {
        *p++ = *q++;
    }
   // *p = '\0';//拷贝完成后不会自动加上'\0'

    return dest;
}
