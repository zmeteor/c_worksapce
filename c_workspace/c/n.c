/*************************************************************************
	> File Name: n.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月03日 星期一 23时01分40秒
 ************************************************************************/

#include<stdio.h>

void print(char c,int n);

int main()
{
    char c = ' ';
    int n = 0;

    printf("请输入字符及其打印的次数:\n");
    scanf("%c %d",&c,&n);

    print(c,n);

    return 0;
}
void print(char c,int n)
{
    int i;

    for(i = 0;i < n;i++)
    {
        printf("%c",c);
    }
}
