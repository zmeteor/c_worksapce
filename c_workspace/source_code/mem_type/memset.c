/*************************************************************************
	> File Name: memset.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月20日 星期六 12时29分40秒
 ************************************************************************/
#include<assert.h>
#include<stdio.h>

void *memset(void *s,int value,size_t num);
int main()
{
    int i = 0;
    int a[5] = {1,2,3,4,5};

    memset(a,0,sizeof(a));

    putchar(10);
    for(i = 0;i < 5;i++)
    {
        printf("%-3d",a[i]);
    }

    return 0;
}

void *memset(void *s,int value,size_t num)
{
    assert(s != NULL && num > 0); //断言
    
    char *ptr = (char *)s;

    while(num--)
    {
        *ptr++ = value;
    }

    return s;

}
