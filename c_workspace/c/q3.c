/*************************************************************************
	> File Name: q3.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月15日 星期六 11时11分19秒
 ************************************************************************/

#include<stdio.h>

int main()
{
      
    int t = 0;
    int i = 0;
    int j = 0;
    double a[5] = {15.3,49.2,1.25,99.8,22.46};

    while(j < 3)
    {
         double max = a[0];
         for(i = 1;i < 5;i++)
         {
             if(max < a[i])
             {
                 max = a[i];
                 t = i;
             }
         }

         printf("%.3lf\t",max);

         for(i = t;i < 4;i++)
         {
             a[i] = a[i+1];
         }

         j++;
    }

    return 0;
}
