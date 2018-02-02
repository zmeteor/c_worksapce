/*************************************************************************
	> File Name: area.c
	> Author: 
	> Mail: 
	> Created Time: 2017年03月25日 星期六 21时18分40秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

#define pi 3.1415926

int main()
{
    double r = 0.0;
    double h = 0.0;
    double l = 0.0;
    double s = 0.0;
    double v = 0.0;
     
    printf("请输入圆的半径及高：\n");
    scanf("%lf%lf",&r,&h);

    s = pi*r*r;
    l = 2*pi*r;
    v = pi*r*r*h;

    printf("圆的面积为:%.2lf,周长为%.2lf \n圆柱的体积为:%.2lf",s,l,v);


    return 0;
}
