/*************************************************************************
	> File Name: temp4.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月03日 星期一 14时46分11秒
 ************************************************************************/

#include<stdio.h>

int msearch(int a[],int l,int r,int k);



int main()
{
    int i;
    int j;
    int c;
    int temp;
    int a[5] = {1,5,6,2,3};
    int s;

    printf("please input key:\n");
    scanf("%d",&c);
    
    for(i = 0;i < 4;i++)
    {
        
        for(j = 0;j < 4 - i;j++){
        if(a[j] > a[j+1])
        {

             temp = a[j];
             a[j] = a[j+1];
             a[j+1] = temp;
        }

        }
    }

    s = msearch(a,0,4,c);

    if(s == -1)
    {
        printf("not!");
    }
    else
    {
        printf("%d",s);
    }

    return 0;
}    
int msearch(int a[],int l,int r,int k)
{
    while(l <= r){
    int mid = (l + r) / 2;

    if(k == a[mid])
    {
        return mid;
    }
    else if(k > a[mid])
    {
        l = mid +1;
    }
    else if(k < a[mid])
    {
        r = mid -1;
    }

  }
    return -1;
}




