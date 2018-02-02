/*************************************************************************
	> File Name: PrimeNumber.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月03日 星期一 20时57分34秒
 ************************************************************************/

#include<stdio.h>

int p_num(int n)
{
    int j;
    for(j = 2;j < n;j++)
        {
            if(n % j == 0)
            {
                return 0;
            }
        }
    return 1;
}
int main()
{
    int i;
    int s = 0;

    for(i = 2;i <= 1000;i++)
    {
        s = p_num(i);
        if(s == 1)
        {
            printf("%d\t ",i);
        }
        
    }
    return 0;

}
