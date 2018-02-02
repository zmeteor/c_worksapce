/*************************************************************************
	> File Name: taA.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月10日 星期三 21时55分24秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch = '\0';
    FILE *fd = NULL;

    fd = fopen("taA.txt","w");
    if(NULL == fd)
    {
        printf("open file<taA.txt> error!");
        getchar();
        exit(1);
    }

    while((ch = getchar()) != '\n')
    {
        if(ch >= 'a' && ch <= 'z')
        {
            ch -= 32;
        }
        fputc(ch,fd);
    }

    fclose(fd);

    return 0;
}
