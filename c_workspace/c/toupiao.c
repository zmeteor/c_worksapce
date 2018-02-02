/*************************************************************************
	> File Name: toupiao.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月21日 星期五 15时01分31秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int fp = 0;
    int n = 0;
    int count[5] = {0};
    int p[] = {0};

    printf("请输入投票数：");
    scanf("%d",&n);
    putchar(10);
    printf("请输入投票情况：\n");
    for(i = 0;i < n;i++)
    {
        scanf("%d",&p[i]);
    }

    for(i = 0;i < n;i++)
    {
        if(p[i] < 1 || p[i] > 5)
        {
            fp++;
        }
        else
        {
            count[p[i]]++;
        }
    }

    for(i = 1;i <= 5;i++)
    {
        printf("第 %d 位候选人的得票数为：%d",i,count[i]);
        putchar(10);
    }
    printf("废票数为：%d",fp);

    return 0;
}
