#include <iostream>
#include <bits/stdc++.h>
#include "overall.h"
#include <fstream>
using namespace std;
/*
void findasid()
{
    printf("请输入您想要查找的id\n");
    int id;
    int t=0;
    while(1)
    {
        if(scanf("%d",&id)==0)
        {
            printf("请输入数字,不要输入字母：\n");
            fflush(stdin);
        }

        else if(t>=0)
        {
              break;
        }
        else
        {
            printf("要输入范围外的数字：\n");
        }
    }
    struct Cartimes *p=cartimes_pHead;
    p=p->next;
    while(p!=NULL)
    {
        if(id==p->id)
        {
            printf("ID%3d:出发地%10s 到达地%10s出发日期:%2d月%2d日%2d:%2d到达日期:%2d月%2d日%2d:%2d 价格%4d \n",p->id,p->startplace,p->endplace,p->starttimemonth,p->starttimeday,p->starttimeh,p->starttimem,p->endtimemonth,p->endtimeday,p->endtimeh,p->endtimem,p->money);
            t=1;
        }
        p=p->next;
    }
    if(t)
    {
        printf("查找成功\n");
    }
    else
    {

        printf("没有此车票\n");
    }

}
void findasstartplace()
{
    printf("请输入您想要查找的出发地点\n");
    char s[len];
    int t=0;

        scanf("%s",&s)==0;


    struct Cartimes *p=cartimes_pHead;
    p=p->next;
    while(p!=NULL)
    {
        if(strcmp(s,p->startplace)==0)
        {
            printf("ID%3d:出发地%10s 到达地%10s出发日期:%2d月%2d日%2d:%2d到达日期:%2d月%2d日%2d:%2d 价格%4d \n",p->id,p->startplace,p->endplace,p->starttimemonth,p->starttimeday,p->starttimeh,p->starttimem,p->endtimemonth,p->endtimeday,p->endtimeh,p->endtimem,p->money);
            t=1;
        }
        p=p->next;
    }
    if(t)
    {
        printf("查找成功\n");
    }
    else
    {

        printf("没有此车票\n");
    }
}

void findasendplace()
{
    printf("请输入您想要查找的到达地点\n");
    char s[len];
    int t=0;

        scanf("%s",&s)==0;


    struct Cartimes *p=cartimes_pHead;
    p=p->next;
    while(p!=NULL)
    {
        if(strcmp(s,p->endplace)==0)
        {
            printf("ID%3d:出发地%10s 到达地%10s出发日期:%2d月%2d日%2d:%2d到达日期:%2d月%2d日%2d:%2d 价格%4d \n",p->id,p->startplace,p->endplace,p->starttimemonth,p->starttimeday,p->starttimeh,p->starttimem,p->endtimemonth,p->endtimeday,p->endtimeh,p->endtimem,p->money);
            t=1;
        }
        p=p->next;
    }
    if(t)
    {
        printf("查找成功\n");
    }
    else
    {

        printf("没有此车票\n");
    }
}
void finddata()
{
    printf("0代表返回上一页\n1代表按照id查询\n2代表按照出发地点查询\n3代表按照到达地点查询\n");
    int t;
    while(1)
    {
        if(scanf("%d",&t)==0)
        {
            printf("请输入数字,不要输入字母：\n");
            fflush(stdin);
        }

        else if(t>=0&&t<=3)
        {
        ;      break;
        }
        else
        {
            printf("不要输入范围外的数字：\n");
        }
    }
    switch(t)
    {
        case 0:
        {
            break;
        }
        case 1:
        {
            findasid();
        }
        case 2:
        {
            findasstartplace();
        }
        case 3:
        {
            findasendplace();
        }

    }
}
*/
