/*************************************************************************
	> File Name: tesk4.c
	> Author: 
	> Mail: 
    > Main:指针（指针数组，数组指针，函数指针）
	> Created Time: 2017年08月15日 星期二 11时20分03秒
 ************************************************************************/

#include<stdio.h>

#if 0
int echo(int a)
{
    return a;
}
#endif

int function1(int a)
{
    printf("function1\n");
    return 0;
}
int function2(int a)
{
    printf("function2\n");
    return 0;
}
int function3(int a)
{
    printf("function3\n");
    return 0;
}
int function4(int a)
{
    printf("function4\n");
    return 0;
}

int main()
{
    //指针数组
    #if 0
    int a = 1;
    int b = 2;
    int c = 3;

    int *p[3] = {&a,&b,&c};

    printf("%p \t %p \t%p\n",p[1],p[2],p[3]);
    #endif

    //数组指针
    #if 0
    int i = 0;
    int j = 0;
    int a[2][3] = {1,2,3,4,5,6};
    int (*p)[3] = a;

    for(i = 0;i < 2;i++)
    {
        for(j = 0;j < 3;j++)
        {
            printf("%-3d",*(*(p +i) + j));
        }
        putchar(10);
    }
    #endif

    //函数指针

    #if 0
    int (*p)(int a);
    p = echo;

    printf("echo(5) = %d \n",echo(5));
    printf("p(5) = %d \n",p(5));
    #endif

    #if 1
    //指针数组里每个元素指向函数指针
    int (*p[4])(int a);
    p[0] = function1;
    p[1] = function2;
    p[2] = function3;
    p[3] = function4;

    p[0](1);
    p[1](2);
    p[2](3);
    p[3](4);

    #endif
    return 0;
}
