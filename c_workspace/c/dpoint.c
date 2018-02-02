/*************************************************************************
	> File Name: dpoint.c
	> Author: 
	> Mail: 
	> Created Time: 2017年03月25日 星期六 21时01分56秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main()
{
    double dis;
    double x1 = 0;
    double x2 = 0;
    double y1 = 0;
    double y2 = 0; 

    printf("请输入第一个点的坐标 ：\n");
    scanf("%lf%lf",&x1,&y1);
    printf("请输入第二个点的坐标 ：\n");
    scanf("%lf%lf",&x2,&y2);

    dis = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    printf("两点之间的距离为 :%lf\n",dis);
    return 0;
}
