/*************************************************************************
	> File Name: strncmp.c
	> Author: 
	> Mail: 
	> Created Time: 2018年02月03日 星期六 13时38分07秒
 ************************************************************************/
//比较两个字符串中前count个字节的大小
#include<stdio.h>
#include<assert.h>

int my_strncmp(const char* str1,const char* str2, int count);

int main()
{
    int ret = 0;
    int count = 5;
    char* str1 = "hellx";
    char* str2 = "hellw";

    ret = my_strncmp(str1,str2,count);

    if(ret > 0)
    {
        printf("前%d字符中：%s > %s\n",count,str1,str2);
    }
    else if(ret < 0)
    {  
        printf("前%d字符中：%s < %s\n",count,str1,str2);    
    }
    else
    {
        printf("equal!\n");
    }

    return 0;
}
int my_strncmp(const char* str1,const char* str2, int count)
{
    assert(str1 != NULL && str2 != NULL);

    if(!count)
    {
        return 0;
    }
    
    while((--count) && ((*str1++) == (*str2++)));

    return(*str1 - *str2);
}

