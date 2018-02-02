/*************************************************************************
	> File Name: p.c
	> Author: 
	> Mail: 
    > Main:
	> Created Time: 2017年08月21日 星期一 13时46分24秒
 ************************************************************************/

#include<stdio.h>

void swap(int *a,int *b);
int fun(int *p,int n);

int main()
{
    int n = 0;
    int a[] = {-9,4,0,0,4,-1,0,2,1};

    n = fun(a,sizeof(a)/sizeof(a[0]));

    printf("开始时，0的下标为:%d\n",n);
    return 0;
}

int fun(int *p,int n)
{
    int i = 0;
    int m = n;
    int k = 0;
    int j = 0;
    int max = 0;

    while(p[k] != 0)
    {
        k++;
    }
    for(i = 0;i < n;i++)
    {
        if(p[i] == 0)
        {
            swap(&p[i],&p[n-1]);
            n--;
        }
    }

    for(i = n-1;i > 0;i--)
    {
        max = i;
        for(j = 0;j < i;j++)
        {
            if(p[j] < p[max])
            {
                max = j;
            }
        }
        swap(&p[i],&p[max]);
    }

    for(i = 0;i < m;i++)
    {
        printf("%-4d",p[i]);
    }
    putchar(10);

    return k;
}

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
