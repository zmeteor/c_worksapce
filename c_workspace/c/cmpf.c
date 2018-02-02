/*************************************************************************
	> File Name: cmpf.c
	> Author: 
	> Mail: 
	> Created Time: 2017年05月10日 星期三 21时24分06秒
 ************************************************************************/
//比较两个文件编写的内容是否相同

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fd1 = NULL;
    FILE *fd2 = NULL;
    char ch1 = '\0';
    char ch2 = '\0';
    fd1 = fopen("file1.txt","r");
    fd2 = fopen("file2.txt","r");

    if(NULL == fd1)
    {
        printf("open file1 error!");
        getchar();
        exit(1);
    }

    if(NULL == fd2)
    {
        printf("open file2 error!");
        getchar();
        exit(1);
    }

    ch1 = fgetc(fd1);
    ch2 = fgetc(fd2);
    while((ch1 != EOF) || (ch2 != EOF))
    {
        if(ch1 != ch2)
        {
            printf("not equal!\n");
            return 0;
        }
        ch1 = fgetc(fd1);
        ch2 = fgetc(fd2);

    }

    printf("compare ok!\n");

    fclose(fd1);
    fclose(fd2);

    return 0;

}
