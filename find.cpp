#include <iostream>
#include <bits/stdc++.h>
#include "overall.h"
#include <fstream>
using namespace std;
/*
void findasid()
{
    printf("����������Ҫ���ҵ�id\n");
    int id;
    int t=0;
    while(1)
    {
        if(scanf("%d",&id)==0)
        {
            printf("����������,��Ҫ������ĸ��\n");
            fflush(stdin);
        }

        else if(t>=0)
        {
              break;
        }
        else
        {
            printf("Ҫ���뷶Χ������֣�\n");
        }
    }
    struct Cartimes *p=cartimes_pHead;
    p=p->next;
    while(p!=NULL)
    {
        if(id==p->id)
        {
            printf("ID%3d:������%10s �����%10s��������:%2d��%2d��%2d:%2d��������:%2d��%2d��%2d:%2d �۸�%4d \n",p->id,p->startplace,p->endplace,p->starttimemonth,p->starttimeday,p->starttimeh,p->starttimem,p->endtimemonth,p->endtimeday,p->endtimeh,p->endtimem,p->money);
            t=1;
        }
        p=p->next;
    }
    if(t)
    {
        printf("���ҳɹ�\n");
    }
    else
    {

        printf("û�д˳�Ʊ\n");
    }

}
void findasstartplace()
{
    printf("����������Ҫ���ҵĳ����ص�\n");
    char s[len];
    int t=0;

        scanf("%s",&s)==0;


    struct Cartimes *p=cartimes_pHead;
    p=p->next;
    while(p!=NULL)
    {
        if(strcmp(s,p->startplace)==0)
        {
            printf("ID%3d:������%10s �����%10s��������:%2d��%2d��%2d:%2d��������:%2d��%2d��%2d:%2d �۸�%4d \n",p->id,p->startplace,p->endplace,p->starttimemonth,p->starttimeday,p->starttimeh,p->starttimem,p->endtimemonth,p->endtimeday,p->endtimeh,p->endtimem,p->money);
            t=1;
        }
        p=p->next;
    }
    if(t)
    {
        printf("���ҳɹ�\n");
    }
    else
    {

        printf("û�д˳�Ʊ\n");
    }
}

void findasendplace()
{
    printf("����������Ҫ���ҵĵ���ص�\n");
    char s[len];
    int t=0;

        scanf("%s",&s)==0;


    struct Cartimes *p=cartimes_pHead;
    p=p->next;
    while(p!=NULL)
    {
        if(strcmp(s,p->endplace)==0)
        {
            printf("ID%3d:������%10s �����%10s��������:%2d��%2d��%2d:%2d��������:%2d��%2d��%2d:%2d �۸�%4d \n",p->id,p->startplace,p->endplace,p->starttimemonth,p->starttimeday,p->starttimeh,p->starttimem,p->endtimemonth,p->endtimeday,p->endtimeh,p->endtimem,p->money);
            t=1;
        }
        p=p->next;
    }
    if(t)
    {
        printf("���ҳɹ�\n");
    }
    else
    {

        printf("û�д˳�Ʊ\n");
    }
}
void finddata()
{
    printf("0��������һҳ\n1������id��ѯ\n2�����ճ����ص��ѯ\n3�����յ���ص��ѯ\n");
    int t;
    while(1)
    {
        if(scanf("%d",&t)==0)
        {
            printf("����������,��Ҫ������ĸ��\n");
            fflush(stdin);
        }

        else if(t>=0&&t<=3)
        {
        ;      break;
        }
        else
        {
            printf("��Ҫ���뷶Χ������֣�\n");
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
