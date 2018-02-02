/*************************************************************************
	> File Name: struct_stu.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月02日 星期六 11时27分31秒
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
/*
struct Person
{
    char name[20];
    bool isfemale;
    int age;
}p1;
*/

typedef struct Student
{
    struct Person
    {
        char name[20];
        bool isfemale;
        int age;
    }p1;
    enum Edu
    {
        primary,middle,high,university
    }edu;

    void (*getEdu)(struct Student *);
    void (*setEdu)(int,struct Student *);
    void (*printStudent)(struct Student *);

}Stu;

void getEdu(struct Student *stu)
{
    switch(stu->edu)
    {
        case 0:
            printf("primary\n");
            break;
        case 1:
            printf("middle\n");
            break;
        case 2:
            printf("high\n");
            break;
        case 3:
            printf("university\n");
            break;
    }
}
void setEdu(int n,struct Student *stu)
{
    switch(n)
    {
        case 0:
            stu->edu = primary;
            break;
        case 1:
            stu->edu = middle;
            break;
        case 2:
            stu->edu = high;
        case 3:
            stu->edu = university;
    }
    
}
void printStudent(struct Student *stu)
{
    char edu[10];
    char s[5];
    if(stu->p1.isfemale == 0)
    {
        strcpy(s,"man");
    }
    else
    {
        strcpy(s,"women");
    }

    switch(stu->edu)
    {
        case 0:
            strcpy(edu,"primary");
            break;
        case 1:
            strcpy(edu,"middle");
            break;
        case 2:
            strcpy(edu,"high");
            break;
        case 3:
            strcpy(edu,"university");
            break;
    }

    printf("student information: name:%s\tsex:%s\tage:%d\tEdu:%s\n",
           stu->p1.name,s,stu->p1.age,edu);
}

int main()
{
    int n;
    Stu *stu1;
    stu1 = (Stu *)malloc(sizeof(Stu));

    strcpy(stu1->p1.name,"tom");
    stu1->p1.isfemale = 0;
    stu1->p1.age = 12;
    stu1->edu = high;

    stu1->printStudent = printStudent;
    stu1->getEdu = getEdu;
    stu1->setEdu = setEdu;

    stu1->printStudent(stu1);

    printf("please input:(0--primary;1--middle;2--high;3--university)\n");
    scanf("%d",&n);
    stu1->setEdu(n,stu1);
    stu1->getEdu(stu1);

    free(stu1);
    return 0;
}
