/*************************************************************************
	> File Name: xn.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月04日 星期二 20时37分43秒
 ************************************************************************/

#include<stdio.h>

int fun(int x,int n);

int main()
{
    int x = 0;
    int n = 0;
    int result = 0;

    printf("please input x and n:\n");
    scanf("%d %d",&x,&n);

    result = fun(x,n);

    printf("result = %d",result);


    return 0;
}

int fun (int x,int n)
{
    int i = 0;
    int s = 1;

    for(i = 0;i < n;i++)
    {
        s = s * x;
    }

    return s;
}
