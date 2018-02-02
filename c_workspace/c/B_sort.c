/*************************************************************************
	> File Name: B_sort.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月15日 星期六 14时10分07秒
 ************************************************************************/

#include<stdio.h>

void BSort(int a[],int size);

int main()
{
    int a[6] = {5,8,4,3,7,9};

    BSort(a,6);
    for(int i = 0;i < 6;i++)
    {
        printf("%-3d",a[i]);
    }

    return 0;

}

void BSort(int a[],int size)
{
    for(int i = 0;i < size - 1;i++)
    {
        for(int j = 0;j < size - 1 - i;j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j +1] = temp;

            }
        }
    }
}
