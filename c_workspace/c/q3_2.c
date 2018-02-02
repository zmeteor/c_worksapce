/*************************************************************************
	> File Name: q3_2.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月15日 星期六 11时32分22秒
 ************************************************************************/

#include<stdio.h>

void FindMax(int a[],int size,int temp[],int n);

int main()
{
   int i = 0; 
   int a[6] = {5,6,3,8,7,1};
   int temp[3] = {0};

   FindMax(a,6,temp,3);

   for(i = 0;i < 3;i++)
   {
       printf("%d",temp[i]);
   }

   return 0;

}
void FindMax(int a[],int size,int temp[],int n)
{
    int i = 0;
    int j = 0;
    int k = 0;
    if(size < n)
    {
        printf("error");
        return;
    }

    for(i = 0;i < size;i++)
    {
        for(j = 0;j < n;j++)
        {
            if(temp[j] < a[i])
            {
                for(k = n - 2;k >= j ;k--)
                {
                    temp[k+1] = temp[k];
                }
                temp[j] = a[i];
                break;
            }
        }
    }

}
