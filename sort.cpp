
#include <iostream>
#include <bits/stdc++.h>
#include "overall.h"

using namespace std;
/*
void sortstartplace()
{
     struct Cartimes *p0=cartimes_pHead;
    struct Cartimes *p1;
    struct Cartimes *p2,*p3;
    int t=0;



    while(p0!=NULL)
    {
        p1=cartimes_pHead;
        p2=p1->next;


        if(p2!=NULL)
        {


            p3=p2->next;
            while(p3!=NULL)
            {
                if(p2->startplace[0]>p3->startplace[0])
                {

                    p2->next=p3->next;
                    p3->next=p2;
                    p1->next=p3;


                }
                p1=p1->next;
                p2=p1->next;
                p3=p1->next->next;
                t=1;

            }


        }
        p0=p0->next;


    }


    if(t==1)
    {
        printf("成功\n");
    }
    else
    {
        printf("无法调换\n");
    }

}*/

void sortplace()
{
     struct Cartimes *p0=cartimes_pHead;
    struct Cartimes *p1;
    struct Cartimes *p2,*p3;
    int t=0;



    while(p0!=NULL)
    {
        p1=cartimes_pHead;
        p2=p1->next;


        if(p2!=NULL)
        {


            p3=p2->next;
            while(p3!=NULL)
            {
                if(p2->passplace[0][0]>p3->passplace[0][0])
                {

                    p2->next=p3->next;
                    p3->next=p2;
                    p1->next=p3;


                }
                p1=p1->next;
                p2=p1->next;
                p3=p1->next->next;
                t=1;

            }


        }
        p0=p0->next;


    }


    if(t==1)
    {
        printf("成功\n");
    }
    else
    {
        printf("无法调换\n");
    }

}


void sortid()
{
     struct Cartimes *p0=cartimes_pHead;
    struct Cartimes *p1;
    struct Cartimes *p2,*p3;
    int t=0;



    while(p0!=NULL)
    {
        p1=cartimes_pHead;
        p2=p1->next;


        if(p2!=NULL)
        {


            p3=p2->next;
            while(p3!=NULL)
            {
                if(p2->id>p3->id)
                {

                    p2->next=p3->next;
                    p3->next=p2;
                    p1->next=p3;


                }
                p1=p1->next;
                p2=p1->next;
                p3=p1->next->next;
                t=1;

            }


        }
        p0=p0->next;


    }


    if(t==1)
    {
        printf("成功\n");
    }
    else
    {
        printf("无法调换\n");
    }

}

void sorttime_earlytolate()
{
     struct Cartimes *p0=cartimes_pHead;
    struct Cartimes *p1;
    struct Cartimes *p2,*p3;
    int t=0;



    while(p0!=NULL)
    {
        p1=cartimes_pHead;
        p2=p1->next;


        if(p2!=NULL)
        {


            p3=p2->next;
            while(p3!=NULL)
            {
                if(p2->timeyear[0]*31*24*60+p2->timemonth[0]*24*60+p2->timeh[0]*60+p2->timem[0]>p3->timeyear[0]*31*24*60+p3->timemonth[0]*24*60+p3->timeh[0]*60+p3->timem[0])
                {

                    p2->next=p3->next;
                    p3->next=p2;
                    p1->next=p3;


                }
                p1=p1->next;
                p2=p1->next;
                p3=p1->next->next;
                t=1;

            }


        }
        p0=p0->next;


    }


    if(t==1)
    {
        printf("成功\n");
    }
    else
    {
        printf("无法调换\n");
    }



}

void sorttime_latetoearly()
{
     struct Cartimes *p0=cartimes_pHead;
    struct Cartimes *p1;
    struct Cartimes *p2,*p3;
    int t=0;



    while(p0!=NULL)
    {
        p1=cartimes_pHead;
        p2=p1->next;


        if(p2!=NULL)
        {


            p3=p2->next;
            while(p3!=NULL)
            {
                if(p2->timeyear[0]*31*24*60+p2->timemonth[0]*24*60+p2->timeh[0]*60+p2->timem[0]<p3->timeyear[0]*31*24*60+p3->timemonth[0]*24*60+p3->timeh[0]*60+p3->timem[0])
                {

                    p2->next=p3->next;
                    p3->next=p2;
                    p1->next=p3;


                }
                p1=p1->next;
                p2=p1->next;
                p3=p1->next->next;
                t=1;

            }


        }
        p0=p0->next;


    }


    if(t==1)
    {
        printf("成功\n");
    }
    else
    {
        printf("无法调换\n");
    }



}

void sortdata()
{
    printf("0代表退出\n1按时间从早到晚\n2按时间从晚到早\n3按id\n4按地点\n");
    int adjustment;
    while(1)
    {
        if(scanf("%d",&adjustment)==0)
        {
            printf("请输入数字,不要输入字母：\n");
            fflush(stdin);
        }

        else if(adjustment>=0&&adjustment<=6)
        {
            break;
        }
        else
        {
            printf("不要输入范围外的数字：\n");
        }
    }

    switch(adjustment)
    {
        case 0:
        {

            break;
        }
        case 1:
        {
              sorttime_earlytolate();
              break;
        }
        case 2:
        {
                sorttime_latetoearly();
                break;

        }
        case 3:
        {
            sortid();
            break;
        }
        case 4:
        {
            sortplace();
            break;
        }
    }

}


