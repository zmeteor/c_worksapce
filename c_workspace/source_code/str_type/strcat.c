/*************************************************************************
	> File Name: strcat.c
	> Author: 
	> Mail: 
	> Created Time: 2018年02月03日 星期六 14时00分51秒
 ************************************************************************/
//拼接字符串
#include<stdio.h>
#include<assert.h>

void my_strcat(char* dest,const char* source);

int main()
{
    char str1[] = "hello";
    char* str2 = "world!";
    char* s = " ";

    my_strcat(str1,s);
    my_strcat(str1,str2);
    puts(str1);

    return 0;
}

void my_strcat(char* dest,const char* source)
{
    assert(dest != NULL && source != NULL);

    while(*dest)
    {
        dest++;
    }
    while((*dest++ = *source++));
}
