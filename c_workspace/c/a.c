/*************************************************************************
	> File Name: a.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月03日 星期一 14时28分54秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i;
    int j;
    int temp;
    int a[5] = {0};

    for(i = 0;i < 5;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i = 0;i < 4;i++)
    {
        
        for(j = 0;j < 4-i;j++){
        if(a[j] >a[j+1])
        {

             temp = a[j];
             a[j] = a[j+1];
            a[j+1] = temp;
        }

        }
    }

    for(i = 0;i < 5;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;

}
