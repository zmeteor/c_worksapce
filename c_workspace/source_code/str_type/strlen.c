/*************************************************************************
	> File Name: strlen.c
	> Author: 
	> Mail: 
	> Created Time: 2018年02月03日 星期六 13时53分16秒
 ************************************************************************/

#include<stdio.h>
#include<assert.h>

unsigned int my_strlen(const char* str);

int main()
{
    unsigned int len = 0;
    char* str = "helloworld!";

    len = my_strlen(str);
    printf("字符串%s的长度为:%u \n",str,len);

    return 0;
}

unsigned int  my_strlen(const char* str)
{
    unsigned int len = 0;
    while(*str != '\0')
    {
        len++;
        str++;
    }

    return len;
}
