/*************************************************************************
	> File Name: max.c
	> Author: 
	> Mail: 
	> Created Time: 2017年03月25日 星期六 21时33分05秒
 ************************************************************************/

#include<stdio.h>

int max(int a,int b,int c);

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int m = 0;

    printf("请输入三个数：\n");
    scanf("%d%d%d",&a,&b,&c);

    m = max(a,b,c);

    printf("最大数为:%d",m);

    return 0;
}    
int max(int a,int b,int c)
{
    int m ;
    if(a < b)
    {
        m = b;
    }
    else
     m = a;

    return (m>c)?m:c;
}
