/*************************************************************************
	> File Name: change.c
	> Author: 
	> Mail: 
	> Created Time: 2017年03月25日 星期六 22时00分32秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    char ch;

    while((ch = getchar()) != '\n')
    {
        if(ch >='A' && ch <= 'Z')
        {  ch += 32;
        }
        else if(ch >= 'a' && ch <='z')
        {    ch -= 32;
        }
        printf("%c",ch);
    }
    putchar(10);
}
