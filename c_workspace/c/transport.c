/*************************************************************************
	> File Name: transport.c
	> Author: 
	> Mail: 
	> Created Time: 2017年03月25日 星期六 22时43分42秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

#define f 1000

double cost(int s);
int main()
{
    double w = 0.0;
    double s = 0.0;
    double c = 0.0;
    double t = 0.0;

    printf("please input w,s:\n");
    scanf("%lf%lf",&w,&s);
   
    t = f*w*s;
    c = t*(1 - cost(s));

    printf("the cost = %.2lf",c);

}

double cost(int s)
{
    double c = 0.0;
    if(s < 250)
      c = 0;
    else if(s >= 250 && s < 500)
    {
         c = 0.02;
    }
    else if(s >= 500 && s < 750)
    {
         c = 0.03;
    }
    else if(s >= 750 && s < 1000)
    {
        c = 0.05;
    }
    else if(s >= 1000 && s < 1500)
    {
        c = 0.08;
    }
    else
       c = 0.1;

    return c;

      
}
