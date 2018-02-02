/*************************************************************************
	> File Name: runnian.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月03日 星期一 10时20分50秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int y;

    printf("please input year:\n");
    scanf("%d",&y);
    
    if(y % 4 == 0 && y % 100 != 0)
    {
        printf("runnian!");
    }
    else if(y % 400 == 0)
    {
        printf("runnian!");
    }
    else
    {
        printf("not!");
    }

    return 0;
}
