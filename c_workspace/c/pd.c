/*************************************************************************
	> File Name: pd.c
	> Author: 
	> Mail: 
	> Created Time: 2017年03月25日 星期六 19时37分22秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

double distance( struct Point p1, struct Point p2 );

typedef struct Point
{
    double x;
    double y;

}P;

int main()
{
    double s = 0;
   struct Point p1 = {1.0,2.0};
   struct Point p2 = {3.0,4.0};

    s = distance(p1,p2);

    printf("两点之间的距离为：%lf",s);
}


double distance(struct Point p1 ,struct Point p2)
{
    return (sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y)));
}
