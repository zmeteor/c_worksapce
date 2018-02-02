/*************************************************************************
	> File Name: cpf.c
	> Author: 
	> Mail: 
    > Main:实现cp功能
	> Created Time: 2017年08月25日 星期五 14时11分26秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char* argv[])
{
    if(argc < 3)
    {
        printf("usage :%s  src   dest\n",argv[0]);
        return 0;
    }

    FILE *fp = NULL;
    FILE *fp2 = NULL;

    if((fp = fopen(argv[1],"r")) == NULL)
    {
        return -1;
    }

    if((fp2 = fopen(argv[2],"w")) == NULL)
    {
        fclose(fp);
        return -1;
    }

    char ch;
    while((ch = fgetc(fp)) != EOF)
    {
        fputc(ch,fp2);
        ch = fgetc(fp);
    }

    fclose(fp);
    fclose(fp2);
    
    return 0;
}

