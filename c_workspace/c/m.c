/*************************************************************************
	> File Name: m.c
	> Author: 
	> Mail: 
	> Created Time: 2017年03月28日 星期二 17时29分17秒
 ************************************************************************/
//输入n个数，输出其中的最大数与最小数及其序列
//
#include<stdio.h>
#include<stdlib.h>

void max(int *a,int n);
void min(int *a,int n);

int main()
{
    int i;
    int n;
    int *a = NULL;

    a = (int *)malloc(n*sizeof(int));

    printf("please input n:\n");
    scanf("%d",&n);

    printf("please input number:\n");
    for(i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }

     max(a,n);
     min(a,n);

    return 0;

}


void max(int *a,int n)
{
    int i;
    int q = 0;
    int t = a[0];

    for(i = 1;i < n;i++)
    {
        if(t < a[i])
        {
            q = i;
            t = a[q];
        }
    }
    printf("max=%d \t location=%d\n",t,q+1);
}
void min(int *a,int n)
{
    int i;
    int q = 0;
    int t = 0;
    t = a[0];

    for(i = 1;i < n;i++)
    {
        if(t > a[i])
        {
            q = i;
            t = a[q];
        }
    }

    printf("min=%d \t location=%d",t,q+1);
}
