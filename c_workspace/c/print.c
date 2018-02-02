/*************************************************************************
	> File Name: print.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月21日 星期五 13时53分29秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i;
    int j;
    int a[4] = {5,1,8,6};
    int b[7][7] = {0};

    for(i = 0;i < 4;i++)
    {
        for(j = i;j <= 6-i;j++)
        {
            b[i][j] = a[i];
            b[j][i] = a[i];
            b[6-i][j] = a[i];
            b[j][6-i] = a[i];
        }
    }

    for(i = 0;i < 7;i++)
    {
        for(j = 0;j < 7;j++)
        {
            printf("%-3d",b[i][j]);
        }
        putchar(10);
    }


    return 0;
}
