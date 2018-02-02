/*************************************************************************
	> File Name: y.c
	> Author: 
	> Mail: 
	> Created Time: 2017年03月25日 星期六 22时19分16秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

double cal(int x);

int main()
{
    int x = 0;
    double y = 0.0;

    printf("please input num: \n");
    scanf("%d",&x);

    y = cal(x);

    printf("y=%.2lf \n",y);

    return 0;
}

double cal(int x)
{
    double y = 0;
    if(x >= 0 && x < 10)
    {
         y = sin(x);
    }
    else if(x >= 10 && x < 20)
    {
        y = cos(x);
    }
    else if(x >= 20 && x < 30)
    {
        y = exp(x) - 1;
    }
    else if(x >= 30 && x < 40)
    {
        y = log(x + 1);
    }
    else
    printf("error!");

    return y;
}

