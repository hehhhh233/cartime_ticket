#include <iostream>
#include <bits/stdc++.h>
#include "overall.h"
#include <fstream>
using namespace std;



struct Cartimes *cartimes_pHead=(Cartimes*)malloc(sizeof(Cartimes));
struct Usersdata *pHead=(struct Usersdata*)malloc(sizeof(struct Usersdata));

int Main_adjustcharacter()
{


    printf("��Ҫѡ��ʲô?\n");
    printf("************************************************************************************\n");
    printf("*0�����˳�  1����˿ͷ���    2�������Ա����    3�洢����    4��ȡ����  5��������  *\n");
    printf("************************************************************************************\n");
    int adjustment;


    while(1)
    {
        if(scanf("%d",&adjustment)==0)
        {
            printf("����������,��Ҫ������ĸ��\n");
            fflush(stdin);
        }

        else if(adjustment>=0&&adjustment<=6)
        {
            return adjustment;
        }
        else
        {
            printf("��Ҫ���뷶Χ������֣�\n");
        }
    }
}






void Hello()
{
    printf("**********************************************************************\n");
    printf("*                       ������ҵ���ѧ����Ʊ��ϵͳ                   *\n");
    printf("*                    ������������骻�����������������                *\n");
    printf("*                             �����޵�0bug                           *\n");
    printf("**********************************************************************\n");
}

int main()
{


    Hello();
    User_init();
     Administer_init();
    while(1)
    {

        int ifuser=Main_adjustcharacter();
        if(ifuser==1)
        {
            User();
        }


        if(ifuser==2)
        {
            Administer();
        }
        if(ifuser==0)
        {
            break;
        }
        if(ifuser==3)
        {
            writedata();
            Awritedata();
        }
        if(ifuser==4)
        {
           readdata();
            Areaddata();
        }
        if(ifuser==5)
        {
            sortdata();

        }



    }



    return 0;
}
