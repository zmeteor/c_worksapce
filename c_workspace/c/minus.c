/*************************************************************************
	> File Name: minus.c
	> Author: 
	> Mail: 
	> Created Time: 2017年03月27日 星期一 23时34分44秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i;
    int j = 0;
    int d = 0;
    int s = 0;
    int n = 0;
    int a[10] = {0};
    
    printf("please input ten numbers:\n");
    for(i = 0;i < 10;i++)
    {
        scanf("%d",&d);
        if(d < 0)
        {
            a[j] = d;   
            s += d;
            n++;
            j++;
        }
    }
    printf("ALL MINUS:");
    for(j = 0;j < n;j++)
    {
        printf("%d\t",a[j]);
    }
    printf("SUM = %d",s);

}
