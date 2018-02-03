/*************************************************************************
	> File Name: strcmp.c
	> Author: 
	> Mail: 
	> Created Time: 2018年02月03日 星期六 12时59分22秒
 ************************************************************************/
//比较两个字符串的大小
#include<stdio.h>
#include<assert.h>

int my_strcmp(const char* str1,const char* str2);

int main()
{
    int ret = 0;
    char* str1 = "hellx";
    char* str2 = "hellw";

    ret = my_strcmp(str1,str2);

    if(ret > 0)
    {
        printf("%s > %s\n",str1,str2);
    }
    else if(ret < 0)
    {  
        printf("%s < %s\n",str1,str2);    
    }
    else
    {
        printf("equal!\n");
    }

    return 0;
}
int my_strcmp(const char* str1,const char* str2)
{
    assert(str1 != NULL && str2 != NULL);

    while(*str1 == *str2)
    {
        str1++;
        str2++;
    }

    return(*str1 - *str2);
}

