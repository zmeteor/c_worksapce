/*************************************************************************
	> File Name: strdup.c
	> Author: 
	> Mail: 
	> Created Time: 2018年02月03日 星期六 18时49分07秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

char* my_strdup(const char* str);

int main()
{
    char* str = "helloworld";

    char* temp = my_strdup(str);
    puts(temp);

    free(temp);

    return 0;
}

char* my_strdup(const char* str)
{
    char* temp = malloc(sizeof(char) * (strlen(str) + 1));
    assert(str != NULL && temp != NULL);
    strcpy(temp,str);

    return temp;
}
