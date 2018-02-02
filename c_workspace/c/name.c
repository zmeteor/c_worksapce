/*************************************************************************
	> File Name: name.c
	> Author: 
	> Mail: 
	> Created Time: 2017年04月15日 星期六 15时47分34秒
 ************************************************************************/

#include<stdio.h>

void BSort(char a[][10],int size);
int strcmp(char str1[],char str2[]);
void exchange (char str1[],char str2[]);
void mstrcpy(char str1[],char str2[]);
int main()
{
    char name[5][10] = {'\0'};
    
    for(int i = 0;i < 5;i++)
    {
        scanf("%s",&name[i]);
    }

    BSort(name,5);

    printf("after sort:\n");
    for(int i = 0;i < 5;i++)
    {
        printf("%s\n",name[i]);
    }

    return 0;
}


void BSort(char a[][10],int size)
{
    for(int i = 0;i < size - 1;i++)
    {
        for(int j = 0;j < size - 1 - i;j++)
        {
            if(strcmp(a[j],a[j+1]) > 0)
            {
                exchange(a[j],a[j+1]);

            }
        }
    }
}

int strcmp(char str1[],char str2[])
{
    int i = 0;
   /* while('\0' != str1[i] && '\0' != str2[i])
    {
        if(str1[i] == str2[i])
        {
            i++;
            continue;
        }
        return str1[i] - str2[i];
    }*/
    while(str1[i] && str2[i] && str1[i] == str2[i])
    {
        i++;
        return str1[i] - str2[i];
    }

        return str1[i] - str2[i];
}

void exchange (char str1[],char str2[])
{
    char temp[20] = {'\0'};
    mstrcpy(temp,str1);
    mstrcpy(str1,str2);
    mstrcpy(str2,temp);

}
void mstrcpy(char str1[],char str2[])
{
    int i = 0;
    while((str1[i] = str2[i]) != '\0')
    {
        i++;
    }
}
