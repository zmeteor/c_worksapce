/*************************************************************************
	> File Name: Max.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月19日 星期三 23时24分22秒
 ************************************************************************/
//找出5*5矩阵每行绝对值最大的元素，并与同行对角线元素交换

#include<stdio.h>

void swap(int *a,int *b);
int abs(int a);

int main()
{
    int i = 0;
    int j = 0;
    int m = 0;
    int n = 0;
    int a[5][5] = {{1,5,2,-9,7},
                   {8,2,5,4,1},
                   {6,5,3,7,4},
                   {6,1,4,2,0},
                   {1,2,-5,3,4}};

    for(i = 0;i < 5;i++)
    {
        int max = a[i][0];
        m = i;
        n = 0;
        for(j = 0;j < 5;j++)
        {
            if(abs(max) < abs(a[i][j]))
            {
        
                max = a[i][j];
                m = i;
                n = j;
            }
        }
        swap(&a[i][i],&a[m][n]);
    }
    

    for(i = 0;i < 5;i++)
    {
        for(j = 0;j < 5;j++)
        {
            printf("%d\t",a[i][j]);
        }
        putchar(10);
    }

    return 0;
}

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int abs(int a)
{
    if(a > 0)
    {
        return a;
    }
    else
    {
        return -a;
    }
}
