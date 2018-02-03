/*************************************************************************
	> File Name: strrev.c
	> Author: 
	> Mail: 
	> Created Time: 2018年02月03日 星期六 15时06分32秒
 ************************************************************************/
//翻转字符串
#include<stdio.h>
#include<assert.h>

void my_strrev(char* str);
int main()
{
    char str[] = "hello";

    my_strrev(str);

    puts(str);

    return 0;
}

void my_strrev(char* str)
{
    char* end = str;

    while(*end++);
    end--;   //与end++抵消
    end--;   //跳过'\0'

    while(str < end)
    {
        char temp;
        temp = *str;
        *str++ = *end;
        *end-- = temp;
    }
}
