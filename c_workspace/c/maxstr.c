/*************************************************************************
	> File Name: maxstr.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月23日 星期日 09时28分26秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

#define MAX 100

int rule(char ch);

int main()
{
    int i = 0;
    int j = 0;
    int k = 0;
    char maxstr[20] = {'\0'};
    char minstr[20] = {'\0'};
    char word[20] = {'\0'};
    char ch[] = ", !!!!!asasd   !!!!abhho!zcx";

    while(rule(ch[i]) == 1)
    {
        i++;
    }

    while(rule(ch[i]) != 1)
    {
        maxstr[k] = ch[i];
        minstr[k] = ch[i];
        i++;
        k++;
    }
    for(;i <= strlen(ch);i++)
    {
        if(rule(ch[i]) == 0 && i < strlen(ch))
        {
            word[j++] = ch[i];
        }
        else if(strlen(word) > 0)
        {
            if(strcmp(word,maxstr) > 0)
            {
                strcpy(maxstr,word);
            }
            else if(strcmp(word,minstr) < 0)
            {
                strcpy(minstr,word);
            }

            j = 0;
            memset(word,'\0',strlen(word)+1);

        }

    }

    /*while((ch = getchar()) != '\n')
    {
        if(rule(ch) == 0)
        {
            word[i++] = ch;
        }
        else if(i > 0)
        {
            if(strcmp(word,maxstr) > 0)
            {
                strcpy(maxstr,word);
            }
            else if(strcmp(word,minstr) < 0)
            {
                strcpy(minstr,word);
            }

            i = 0;
            memset(word,'\0',strlen(word)+1);

        }
    }*/

    printf("maxstr:\t%s",maxstr);
    putchar(10);
    printf("minstr:\t%s",minstr);


    return 0;
}

int rule(char ch)
{
    int i = 0;
    int len = 0;
    char r[] = {' ',',','.','!',';'};

    len = strlen(r);
    for(;i < len;i++)
    {
        if(ch == r[i])
        {
            return 1;
        }
    }

    return 0;
}
