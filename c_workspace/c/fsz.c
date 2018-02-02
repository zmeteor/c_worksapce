/*************************************************************************
	> File Name: fsz.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月15日 星期六 10时49分53秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i = 0;
    double cha = 0;
    double a[5] = {15.3,49.2,1.25,99.8,22.46};

    double min = a[0];
    double max = a[0];
    
    
    for(i = 1;i < 5;i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
        if(min > a[i])
        {
            min = a[i];
        }
    }

    cha = max - min;

    printf("max = %.4lf  min = %.4lf  cha = %.4lf",max,min,cha);


    return 0;

}
