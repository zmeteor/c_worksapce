/*************************************************************************
	> File Name: merge.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月19日 星期三 20时35分31秒
 ************************************************************************/
//将两个按升序排列的数仍然按升序合并，存放入另一个数组中

#include<stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int k = 0;
    int a[3] = {1,5,9};
    int b[5] = {2,6,8,10,15};
    int c[] = {0};

    int size = sizeof(a)/sizeof(int) + sizeof(b)/sizeof(int);

    while(i < 3 || j < 5)
    {

        if(i >= 3)
        {
            c[k] = b[j];
            k++;
            j++;
            continue;
        }
        if(j >= 5)
        {
            c[k] = a[i];
            k++;
            i++;
            continue;
        }
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }

    for(i = 0;i < size;i++)
    {
        printf("%-3d",c[i]);
    }


    return 0;

}

