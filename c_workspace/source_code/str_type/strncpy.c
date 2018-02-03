/*************************************************************************
	> File Name: strncpy.c
	> Author: 
	> Mail: 
	> Created Time: 2018年02月03日 星期六 12时32分25秒
 ************************************************************************/
//将source中的n个字符复制到dest中

#include<stdio.h>
#include<assert.h>

void my_strncmp(char* dest,char* source,int count);

int main()
{
    char str1[] = {0};
    char *str2 = "hello world";
    int count = 13;

    my_strncmp(str1,str2,count);

    puts(str1);

    return 0;
}

void my_strncmp(char* dest,char* source,int count)
{
    assert((dest != NULL) && (source != NULL));

    while((count--) && (*dest++ = *source++));

}
