#include <iostream>
#include <bits/stdc++.h>
#include "overall.h"
#include <fstream>
using namespace std;



struct Cartimes *cartimes_pHead=(Cartimes*)malloc(sizeof(Cartimes));
struct Usersdata *pHead=(struct Usersdata*)malloc(sizeof(struct Usersdata));

int Main_adjustcharacter()
{


    printf("您要选择什么?\n");
    printf("************************************************************************************\n");
    printf("*0代表退出  1进入乘客服务    2进入管理员服务    3存储数据    4读取数据  5排列数据  *\n");
    printf("************************************************************************************\n");
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
            return adjustment;
        }
        else
        {
            printf("不要输入范围外的数字：\n");
        }
    }
}






void Hello()
{
    printf("**********************************************************************\n");
    printf("*                       东北林业大大学动车票务系统                   *\n");
    printf("*                    本程序由李振楠花费了数个晚上制作                *\n");
    printf("*                             超级无敌0bug                           *\n");
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
