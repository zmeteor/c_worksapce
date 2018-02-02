/*************************************************************************
	> File Name: complex.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月03日 星期一 09时14分08秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int add(int a,int b);
int sub(int a,int b);
int mult(int a,int b);
int div(int a,int b);


int main()
{
    char c;
    int x = 0;
    int y = 0;
    int s = 0;

    printf("------整数运算------\n");
    printf("请输入两个数字及其运算符:\n");
    scanf("%d %d %c",&x,&y,&c);

    if(c == '+')
    {
        s = add(x,y);
    }
    else if(c == '-')
    {
        s = sub(x,y);
    }
    else if(c == '*')
    {
        s = mult(x,y);
    }
    else
    s = div(x,y);

    printf("result = %d\n",s); 

}

int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mult(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
