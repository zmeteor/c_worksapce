/*************************************************************************
	> File Name: Fibonacci.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月03日 星期一 23时59分09秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i;
    int a = 1;
    int b = 1;
    int s = 0;
    
    printf("20以内的Fibonacci数有:\t");
    for(i = 1;i <= 20;i++)
    {
        if(i == 1 || i == 2)
        {
            printf("%d  ",a);
        }
        else
        {
            s = a + b;
            printf("%d  ",s);
            a = b;
            b = s;
        }
    }


    return 0;

}
