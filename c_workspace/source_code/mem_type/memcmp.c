/*************************************************************************
	> File Name: memcmp.c
	> Author: 
	> Mail: 
	> Created Time: 2018年02月02日 星期五 18时17分53秒
 ************************************************************************/
//比较内存区前n个字节的大小

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int my_memcmp(const void *str1,const void *str2,int n);

int main()
{
    int n;
    char *str1 = "hellw";
    char *str2 = "hello";

    n = my_memcmp(str1,str2,5);

    if(n > 0)
    {
        printf("%s > %s\n ",str1,str2);
    }
    else if(n < 0)
    {
        printf("%s < %s\n",str1,str2);
    }
    else
    {
        printf("equal!\n");
    }

    return 0;
}

int my_memcmp(const void *str1,const void *str2,int n)
{
    assert(!(str1 == NULL) && !(str2 == NULL));

    if(!n)
    {
        return 0;
    }
    
    while((--n) && ((*(char *)str1++) == (*(char *)str2++)));

    return(*((unsigned char *)str1) - (*(unsigned char *)str2));

}
