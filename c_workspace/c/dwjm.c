/*************************************************************************
	> File Name: dwjm.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月21日 星期五 14时03分46秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i = 0;
    char str[] = "hello";

    while(str[i] != '\0')
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            str[i] = 65 + (str[i] + 3 - 65) % 26;
            i++;
        }
        else
        {
            str[i] = 97 + (str[i] + 3 - 97) % 26;
            i++;
        } 
    }
    puts(str);
}
