#include <iostream>
#include <bits/stdc++.h>
#include "overall.h"
using namespace std;



 void Administer_init()
{
    cartimes_pHead->next=NULL;
}


void uploadtickets()
{

    printf("添加您需要上传的车票\n");
    printf("接下来您要输入的内容为车票id 站点个数 站点 到站时间 价格 数量\n");
    struct Cartimes *cartimes_newp=(struct Cartimes*)malloc(sizeof(struct Cartimes));
    printf("请输入列车ID\n");
    while(1)
    {

        if(scanf("%d",&cartimes_newp->id)==0)
        {
            printf("输入错误，请不要输入字母或者符号\n");
            fflush(stdin);
        }

        else if(cartimes_newp->id>=0)
        {
            int t=1;
            struct Cartimes *idp=cartimes_pHead->next;
            while(idp!=NULL)
            {
                if(cartimes_newp->id==idp->id)
                {
                    printf("不能输入相同的ID\n");
                    t=0;
                }
                idp=idp->next;

            }
            if(t)
            {
                 break;

            }





        }

        else
        {
            printf("输入错误\n");
        }
    }


    printf("请输入您要输入的车票经过站点的个数");

    while(1)
    {
        if(scanf("%d",&cartimes_newp->stanumber)==0)
        {
            printf("输入错误，请不要输入字母或者符号\n");
            fflush(stdin);
        }

        else if(cartimes_newp->stanumber>=2)
        {
            break;
        }

        else
        {
            printf("输入错误\n");
        }

    }

    for(int i=0;i<cartimes_newp->stanumber;i++)
    {
        printf("站点%d名称:\n",i+1);
        scanf("%s",cartimes_newp->passplace[i]);
        printf("请输入到站点%d时间\n",i+1);
        printf("中间请用空格分隔出发时间格式 \n年   月 日 小时 分钟 \n");
        while(1)
        {
            if(scanf("%d %d %d %d %d",&cartimes_newp->timeyear[i],&cartimes_newp->timemonth[i],&cartimes_newp->timeday[i],&cartimes_newp->timeh[i],&cartimes_newp->timem[i])==0)
            {
                printf("输入错误，请不要输入字母或者符号");
                fflush(stdin);
            }


            else if((cartimes_newp->timemonth[i]>=1&      &cartimes_newp->timemonth[i]<=12)&&cartimes_newp->timeday[i]>=1&&cartimes_newp->timeday[i]<=31&&(cartimes_newp->timeh[i]<24&&cartimes_newp->timeh[i]>=0)&&cartimes_newp->timem[i]<60&&cartimes_newp->timem[i]>=0)
            {
                if(i>=1&&cartimes_newp->timeyear[i]*31*24*60+cartimes_newp->timemonth[i]*24*60+cartimes_newp->timeh[i]*60+cartimes_newp->timem[i]<=cartimes_newp->timeyear[i-1]*31*24*60+cartimes_newp->timemonth[i-1]*24*60+cartimes_newp->timeh[i-1]*60+cartimes_newp->timem[i-1])
                {
                    printf("输入时间错误");
                }
                else
                {
                    break;

                }

            }

            else
            {
                printf("输入错误");
            }
        }
        if(i>0)
        {
             printf("请输入%s到%s的价格\n",cartimes_newp->passplace[i-1],cartimes_newp->passplace[i]);
            while(scanf("%d",&cartimes_newp->money[i])==0)
            {
                printf("输入错误，输入数字:  \n");
                fflush(stdin);
            }

        }

    }





    printf("请输入座位数量\n");
    int number;
    while(scanf("%d",&number)==0)
    {
        printf("输入数量\n");
        fflush(stdin);
    }
    for(int i=1;i<cartimes_newp->stanumber;i++)
    {
        cartimes_newp->desknumber[i]=number;
    }

    struct Cartimes *cartimes_p= cartimes_pHead;
    while(cartimes_p->next!=NULL)
    {
        cartimes_p=cartimes_p->next;
    }
    cartimes_p->next=cartimes_newp;
    cartimes_newp->next=NULL;
    printf("上传成功|\n");
}

extern int showtickets()
{
    struct Cartimes *cartimes_p= cartimes_pHead->next;
    int t=0;
    while(cartimes_p!=NULL)
    {
        printf("ID:%d\n",cartimes_p->id);
        for(int i=0;i<cartimes_p->stanumber;i++)
        {
            if(i==0)
            {
                printf("起点站%s时间%d年%d月%d日%d时%d分\n",cartimes_p->passplace[i],cartimes_p->timeyear[i],cartimes_p->timemonth[i],cartimes_p->timeday[i],cartimes_p->timeh[i],cartimes_p->timem[i]);
            }
            else if(i==cartimes_p->stanumber-1)
            {
                printf(" %s到%s有%d张票 ",cartimes_p->passplace[i-1],cartimes_p->passplace[i],cartimes_p->desknumber[i]);
                printf("终点站%s时间%d年%d月%d日%d时%d分\n\n",cartimes_p->passplace[i],cartimes_p->timeyear[i],cartimes_p->timemonth[i],cartimes_p->timeday[i],cartimes_p->timeh[i],cartimes_p->timem[i]);
            }
            else
            {
                printf(" %s到%s有%d张票 ",cartimes_p->passplace[i-1],cartimes_p->passplace[i],cartimes_p->desknumber[i]);
                printf("途径站%s时间%d年%d月%d日%d时%d分\n",cartimes_p->passplace[i],cartimes_p->timeyear[i],cartimes_p->timemonth[i],cartimes_p->timeday[i],cartimes_p->timeh[i],cartimes_p->timem[i]);
            }

        }


        cartimes_p=cartimes_p->next;
        t=1;
    }
    if(t==0)
    {
        printf("您好无票\n");

    }
    return t;

}



int Administer_choosevice()
{
        printf("您好管理员\n");
        printf("0返回上一页  1代表上票   2查看所有的票 3代表查看用户信息 4代表修改票\n");
        int administerchoose;
        while(1)
        {
            if(scanf("%d",&administerchoose)==0)
            {
                printf("不要输入字母：\n");
                fflush(stdin);
            }

            else if(administerchoose>=0&&administerchoose<=5)
            {
                        return administerchoose;
            }
            else
            {
                printf("不要输入范围外的数字：\n");
            }
        }

}

void showusers()
{
    struct Usersdata *pU=pHead->next;
    int t=0;
    while(pU!=NULL)
    {
        t=1;
        printf("账户名:%5s密码:%5s的用户车票为:\n\n",pU->username,pU->password);
        for(int i=0;i<pU->ticketnumber;i++)
        {
            printf("ID:%d出发地%s到达地%s出发时间%d年%d月%d日到达时间%d年%d月%d日",pU->id[i],pU->startplace[i],pU->endplace[i],pU->startyear[i],pU->startmonth[i],pU->startday[i],pU->endyear[i],pU->endmonth[i],pU->endday[i]);
        }
        cout<<endl<<endl;
        pU=pU->next;
    }
    if(t==0)
    {
        printf("您好没有任何用户\n");
    }
    return;

}



void Administer()
{
    system("cls");

    while(1)
    {


        int administerchoose;
       administerchoose=Administer_choosevice();
       switch(administerchoose)
       {
           case 1:
           {

                uploadtickets();
                break;
           }

           case 2:
           {
               showtickets();
                break;
           }
           case 0:
           {
               return;
           }
           case 3:
           {
                showusers();
               break;
           }
           case 4:
           {
               changetickets();

               break;
           }

       }

    }

}
