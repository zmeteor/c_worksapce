/*************************************************************************
	> File Name: gcd.c
	> Author: 
	> Mail: 
	> Created Time: 2017年03月26日 星期日 22时56分15秒
 ************************************************************************/

#include<stdio.h>

void fun(int i,int j);

int main()
{
    int a = 0;
    int b = 0;
    
    printf("please input two number: \n");
    scanf("%d %d",&a,&b);

    fun(a,b);
}

void fun(int a,int b)
{
    
    int t = 0;
    t = a * b;
    while(!(a % b == 0))
    {
        int c = a % b;
        a = b;
        b = c;
    }

    printf("最大公约数为：%d   最小公倍数为：%d",b,t/b);
      
}
