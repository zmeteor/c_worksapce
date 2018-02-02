/*************************************************************************
	> File Name: temp.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月15日 星期二 14时23分37秒
 ************************************************************************/

#include<stdio.h>

int main()
{/*
    printf("%lu \t %lu\n",sizeof(unsigned long),sizeof(int));
    int a[3] = {1,2,3};

    printf("%lu \t %lu \t%lu\n",sizeof(a),sizeof(&a),sizeof(&a[0]));   //指针 unsigned long
    printf("%lu\n",sizeof(a[4])); //sizeof(a[4]) == sizeof(int)

    printf("%p \t %p \t %p \t%p\n",a,a+1,&a+1,&a[0]+1);  //数组名作为右值，按元素加；左值代表整个数组；&a+1指向非法内存
    printf("%d \t %d \t%d\n",*(a+1),*(&a+1),*(&a[0]+1));
    printf("a[-111] = %d\n",a[-111]);  //a[-111] = *(a -111)随机未定义的值；
*/

 int a[5] = {1,2,3,4,5};
 int *p = (int *)(&a+1);

 printf("%d",*(p-1));
    return 0;
}
