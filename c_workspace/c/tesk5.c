/*************************************************************************
	> File Name: tesk5.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月15日 星期二 15时49分52秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    //动态申请一个m*n维的数组
    int m,n;
    int (*p)[m];

    p = (int (*)[m])malloc(n*m*sizeof(int));

    */

    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int i,j;
    int *p = a[0];

    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            printf("%-3d",*(p+(i*3)+j));

        }
        putchar(10);
    }
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            printf("%-3d",*(*(a+i)+j));

        }
        putchar(10);
    }
    printf("%p \t %p",a,a+1);  //加一 == 加一维

    return 0;
}
