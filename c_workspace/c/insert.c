/*************************************************************************
	> File Name: insert.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月19日 星期三 19时33分41秒
 ************************************************************************/

#include<stdio.h>

#define MAX 100

int main()
{
    int i = 0;
    int j = 0;
    int k = 0;
    int n = 0;
    int size = 5;
    int s[] = {0};
    int a[MAX] = {1,5,9,12,25};

    printf("请输入插入数字的个数：");
    scanf("%d",&n);

    printf("请输入插入的数字：\n");
    for(i = 0;i < n;i++)
    {
        scanf("%d",&s[i]);
    }

    for(j = 0;j < n;j++ )
    {
        for(i = 0;i < size;i++)
        {
            if(a[i] > s[j])
            {
                for(k = size-1; k >= i;k--)
                {
                    a[k+1] = a[k];
                }
                a[i] = s[j];
                size++;
                break;
            }
            else if(s[j] < a[i+1])
            {
                for(k = size-1; k >= i+1;k--)
                {
                    a[k+1] = a[k];
                }
                a[i+1] = s[j];
                size++;
                break;
            }
            if(s[j] > a[i])
            {
                a[size] = s[j];
            }
        }
    }

    for(i = 0;i < n+5;i++)
    {
        printf("%-3d",a[i]);
    }

    return 0;

}
