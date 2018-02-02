/*************************************************************************
	> File Name: fb.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月03日 星期一 14时07分23秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i;
    int s;
    int a = 1;
    int b = 1;

    for(i = 1;i <= 20;i++)
    {
        if(i == 1 || i == 2)
        {
            printf("%d\t",a);
        }
        else{
            s = a + b;
            printf("%d\t",s);
            a = b;
            b = s;
        }
        
    }

}
