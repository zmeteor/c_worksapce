/*************************************************************************
	> File Name: task.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月23日 星期日 10时00分35秒
 ************************************************************************/

#include<stdio.h>

int len(char str[]);

int main()
{
    char str[20] = {"hello"};

    int s = len(str);

    printf("%d",s);

    return 0;
}

int len(char str[])
{
    int i = 0;
    int len = 0;
    
    if(NULL == str)
    {
        return -1;
    }
   /* while('\0' != str[i])
    {
        i++;
    }
    return i;
    */

    for(;str[i] != '\0';i++)
    {
        len ++;
    }

    return len;
}
