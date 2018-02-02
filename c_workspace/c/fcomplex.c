/*************************************************************************
	> File Name: complex.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月03日 星期一 09时14分08秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

float jia(float a,float b);
float jian(float a,float b);
float cheng(float a,float b);
float chu(float a,float b);


int main()
{
    char c;
    float x = 0;
    float y = 0;
    float s = 0;

    printf("请输入两个数字及其运算符:\n");
    scanf("%f %f %c",&x,&y,&c);

    if(c == '+')
    {
        s = jia(x,y);
    }
    else if(c == '-')
    {
        s = jian(x,y);
    }
    else if(c == '*')
    {
        s = cheng(x,y);
    }
    else
    s = chu(x,y);

    printf("result = %g",s); 

}

float jia(float a,float b)
{
    return a+b;
}
float jian(float a,float b)
{
    return a-b;
}
float cheng(float a,float b)
{
    return a*b;
}
float chu(float a,float b)
{
    return a/b;
}
