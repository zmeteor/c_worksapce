/*************************************************************************
	> File Name: strchr.c
	> Author: 
	> Mail: 
	> Created Time: 2018年02月03日 星期六 14时25分21秒
 ************************************************************************/
//返回字符最后一次出现的位置

#include<stdio.h>
#include<assert.h>

char* my_strrchr(char* str,const char c);

int main()
{
    char* str = "hello";
    char c = 'l';
    char *p = NULL;

    p = my_strrchr(str,c);

    if(!p)
    {
        printf("Not find!\n");
    }
    else
    {
        printf("in %s,%c located:%p \n",str,c,p);
    }

    return 0;
} 
char* my_strrchr( char* str,const char c)
{
    assert(str != NULL);
    char* temp = str;
    while(*temp)
    {
        temp++;
    }
    while((temp != str) && (*temp != c))
    {
        temp--;
    }

    return ((*temp == c) ? temp : NULL);
}
