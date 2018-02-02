/*************************************************************************
	> File Name: a2.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月15日 星期六 14时48分24秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int a[3][4] = {{1,2,5,6},{5,2,7,8},{4,6,5,3}};
    
    for(int i = 0;i < 3;i++)
    {
        double sum = 0;
        int max = a[i][0];
        for(int j = 0;j < 4;j++)
        {
            if(max < a[i][j])
            {
                max = a[i][j];
            }
            sum += a[i][j];
        }
        double avg = sum / 4;
        printf("第%d行的最大值为：%d,平均值为:%.2lf\n",i+1,max,avg);
        
    }

}
