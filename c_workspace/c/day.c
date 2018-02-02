/*************************************************************************
	> File Name: day.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月03日 星期一 23时14分21秒
 ************************************************************************/

#include<stdio.h>

int leap_year(int y);
int month(int m);
int cm(int m,int y);

int main()
{
    int y;
    int m;
    int d;
    int s;

    printf("please input year and month and day:\n");
    scanf("%d%d%d",&y,&m,&d);

    s = cm(m,y) + d;

    printf("%d",s);

    return 0;
}

int leap_year(int y)
{
    if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}


int month(int m)
{
    switch(m)
    {
        case 1:
             return 31;
        case 2:
             return 28;
        case 3:
             return 31;
        case 4:
             return 30;
        case 5:
             return 31;
        case 6:
             return 30;
        case 7:
             return 31;
        case 8:
             return 31;
        case 9:
             return 30;
        case 10:
             return 31;
        case 11:
             return 30;
        case 12:
             return 31;
    }
}

int cm(int m,int y)
{
    int i;
    int k = 0;

    y = leap_year(y);

    if(y == 1 && m >= 2)
    {
        k++;
    }
    for(i = 1;i < m;i++)
    {
        k+=month(i);
    }

    return k;
    
}
