/*************************************************************************
	> File Name: strcpy.c
	> Author: 
	> Mail: 
	> Created Time: 2018年02月03日 星期六 12时05分25秒
 ************************************************************************/
//将source字符串拷贝到dest

#include<stdio.h>
#include<assert.h>

void my_strcpy(char* dest,char* source);

int main()
{
    char str1[] = {0};
    char* str2 = "helloworld!";

    my_strcpy(str1,str2);
    puts(str1);

    return 0;
}

void my_strcpy(char* dest,char* source)
{
    assert(dest != NULL && source != NULL);  //断言

    while((*dest++ = *source++));
}
