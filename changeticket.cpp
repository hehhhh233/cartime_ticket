#include <iostream>
#include <bits/stdc++.h>
#include "overall.h"
/*void changeticketcost()
{
    printf("输入您要修改车票的ID\n");
    int chooseid;
     while(1)
        {
            if(scanf("%d",&chooseid)==0)
            {
                printf("请输入数字，不要输入字母：");
                fflush(stdin);
            }

            else if(chooseid>=0)
            {
                        break;
            }
            else
            {
                printf("请在选择范围内的数字,不要输入范围外的数字：");
            }
        }
    struct Cartimes *p=cartimes_pHead->next;
    int t=0;
    while(p!=NULL)
    {
        if(chooseid==p->id)
        {
            printf("ID%3d:出发地%10s 到达地%10s出发日期:%2d月%2d日%2d:%2d到达日期:%2d月%2d日%2d:%2d 价格%4d \n",p->id,p->passplace[0],p->passplace[p->stanumber-1],p->starttimemonth,p->starttimeday,p->starttimeh,p->starttimem,p->endtimemonth,p->endtimeday,p->endtimeh,p->endtimem,p->money);
            t=1;
            break;
        }
        p=p->next;
    }
    if(t==0)
    {
        printf("未能找到\n");
        return;
    }

    printf("请输入您要修改的价格\n");
    scanf("%d",&p->money);

    printf("修改成功\n");
}


void  changeticketstarttime()
{
    printf("输入您要修改车票的ID\n");
    int chooseid;
     while(1)
        {
            if(scanf("%d",&chooseid)==0)
            {
                printf("请输入数字，不要输入字母：");
                fflush(stdin);
            }

            else if(chooseid>=0)
            {
                        break;
            }
            else
            {
                printf("请在选择范围内的数字,不要输入范围外的数字：");
            }
        }
    struct Cartimes *p=cartimes_pHead->next;
    int t=0;
    while(p!=NULL)
    {
        if(chooseid==p->id)
        {
            printf("ID%3d:出发地%10s 到达地%10s出发日期:%2d月%2d日%2d:%2d到达日期:%2d月%2d日%2d:%2d 价格%4d \n",p->id,p->passplace[0],p->passplace[p->stanumber-1],p->starttimemonth,p->starttimeday,p->starttimeh,p->starttimem,p->endtimemonth,p->endtimeday,p->endtimeh,p->endtimem,p->money);
            t=1;
            break;
        }
        p=p->next;
    }
    if(t==0)
    {
        printf("未能找到\n");
        return;
    }

    printf("请输入您要修改的出发时间\n");
    printf("月 日 时 分\n");
    while(1)
    {
        if(scanf("%d %d %d %d",&p->starttimemonth,&p->starttimeday,&p->starttimeh,&p->starttimem)==0)
        {
            printf("请输入数字: ");
            fflush(stdin);
        }

        else if((p->endtimemonth>=1&&p->endtimemonth<=12)&&p->endtimeday>=1&&p->endtimeday<=31&&(p->endtimeh<=24&&p->endtimeh>=0)&&p->endtimem<=60&&p->endtimem>=0)
        {
            if((p->endtimemonth*31*24*60+p->endtimeday*24*60+p->endtimeh*60+p->endtimem)<=(p->starttimemonth*31*24*60+p->starttimeday*24*60+p->starttimeh*60+p->starttimem))
            {
                printf("请输入比到达日期小的日期:\n");
            }
            else
            {
                break;
            }

        }

        else
        {
            printf("不要输入范围外的数字： ");
        }
    }

    printf("修改成功\n");

}

void changeticketendtime()
{
     printf("输入您要修改车票的ID\n");
    int chooseid;
     while(1)
        {
            if(scanf("%d",&chooseid)==0)
            {
                printf("请输入数字，不要输入字母：");
                fflush(stdin);
            }

            else if(chooseid>=0)
            {
                        break;
            }
            else
            {
                printf("请在选择范围内的数字,不要输入范围外的数字：");
            }
        }
    struct Cartimes *p=cartimes_pHead->next;
    int t=0;
    while(p!=NULL)
    {
        if(chooseid==p->id)
        {
            printf("ID%3d:出发地%10s 到达地%10s出发日期:%2d月%2d日%2d:%2d到达日期:%2d月%2d日%2d:%2d 价格%4d \n",p->id,p->passplace[0],p->passplace[p->stanumber-1],p->starttimemonth,p->starttimeday,p->starttimeh,p->starttimem,p->endtimemonth,p->endtimeday,p->endtimeh,p->endtimem,p->money);
            t=1;
            break;
        }
        p=p->next;
    }
    if(t==0)
    {
        printf("未能找到\n");
        return;
    }

    printf("请输入您要修改的到达时间\n");
    printf("月 日 时 分\n");
    while(1)
    {
        if(scanf("%d %d %d %d",&p->endtimemonth,&p->endtimeday,&p->endtimeh,&p->endtimem)==0)
        {
            printf("请输入数字: ");
            fflush(stdin);
        }

        else if((p->endtimemonth>=1&&p->endtimemonth<=12)&&p->endtimeday>=1&&p->endtimeday<=31&&(p->endtimeh<=24&&p->endtimeh>=0)&&p->endtimem<=60&&p->endtimem>=0)
        {
            if((p->endtimemonth*31*24*60+p->endtimeday*24*60+p->endtimeh*60+p->endtimem)<=(p->starttimemonth*31*24*60+p->starttimeday*24*60+p->starttimeh*60+p->starttimem))
            {
                printf("请输入比出发日期大的日期:\n");
            }
            else
            {
                break;
            }

        }

        else
        {
            printf("不要输入范围外的数字： ");
        }
    }


    printf("修改成功\n");


}

void changeticketstartplace()
{
     printf("输入您要修改车票的ID\n");
    int chooseid;
     while(1)
        {
            if(scanf("%d",&chooseid)==0)
            {
                printf("请输入数字，不要输入字母：");
                fflush(stdin);
            }

            else if(chooseid>=0)
            {
                        break;
            }
            else
            {
                printf("请在选择范围内的数字,不要输入范围外的数字：");
            }
        }
    struct Cartimes *p=cartimes_pHead->next;
    int t=0;
    while(p!=NULL)
    {
        if(chooseid==p->id)
        {
            printf("ID%3d:出发地%10s 到达地%10s出发日期:%2d月%2d日%2d:%2d到达日期:%2d月%2d日%2d:%2d 价格%4d \n",p->id,p->passplace[0],p->passplace[p->stanumber-1],p->starttimemonth,p->starttimeday,p->starttimeh,p->starttimem,p->endtimemonth,p->endtimeday,p->endtimeh,p->endtimem,p->money);
            t=1;
            break;
        }
        p=p->next;
    }
    if(t==0)
    {
        printf("未能找到\n");
        return;
    }

    printf("请输入您要修改的出发地\n");
    scanf("%s",p->passplace[0]);

    printf("修改成功\n");
}



void changeticketendplace()
{
     printf("输入您要修改车票的ID\n");
    int chooseid;
     while(1)
        {
            if(scanf("%d",&chooseid)==0)
            {
                printf("请输入数字，不要输入字母：");
                fflush(stdin);
            }

            else if(chooseid>=0)
            {
                        break;
            }
            else
            {
                printf("请在选择范围内的数字,不要输入范围外的数字：");
            }
        }
    struct Cartimes *p=cartimes_pHead->next;
    int t=0;
    while(p!=NULL)
    {
        if(chooseid==p->id)
        {
            printf("ID%3d:出发地%10s 到达地%10s出发日期:%2d月%2d日%2d:%2d到达日期:%2d月%2d日%2d:%2d 价格%4d \n",p->id,p->startplace,p->endplace,p->starttimemonth,p->starttimeday,p->starttimeh,p->starttimem,p->endtimemonth,p->endtimeday,p->endtimeh,p->endtimem,p->money);
            t=1;
            break;
        }
        p=p->next;
    }
    if(t==0)
    {
        printf("未能找到\n");
        return;
    }

    printf("请输入您要修改的到达地\n");
    scanf("%s",p->endplace);

    printf("修改成功\n");
}
*/
void changeticketnumber()
{
    printf("输入您要修改车票的ID\n");
    int chooseid;
     while(1)
        {
            if(scanf("%d",&chooseid)==0)
            {
                printf("请输入数字，不要输入字母：");
                fflush(stdin);
            }

            else if(chooseid>=0)
            {
                        break;
            }
            else
            {
                printf("请在选择范围内的数字,不要输入范围外的数字：");
            }
        }
    struct Cartimes *cartimes_p=cartimes_pHead->next;
    int t=0;
    while(cartimes_p!=NULL)
    {
        if(chooseid==cartimes_p->id)
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
        }
        t=1;
        cartimes_p=cartimes_p->next;
    }
    if(t==0)
    {
        printf("未能找到\n");
        return;
    }

    printf("请输入您要增加的车票数量\n");
    int number;
     while(1)
    {
        if(scanf("%d",&number)==0)
        {
            printf("请输入数字，不要输入字母：");
            fflush(stdin);
        }

        else if(number>=0)
        {
            break;
        }
        else
        {
            printf("不要输入范围外的数字：");
        }
    }
    cartimes_p=cartimes_pHead->next;
    while(cartimes_p!=NULL)
    {
        if(chooseid==cartimes_p->id)
        {

            for(int i=1;i<cartimes_p->stanumber;i++)
            {
                cartimes_p->desknumber[i]+=number;

            }
        }
        cartimes_p=cartimes_p->next;
    }



    printf("修改成功\n");
}

void changetickets()
{
    system("cls");
    printf("输入您想修改的内容\n0代表返回上一页\n1代表增加车票数量\n");
    int t;
        while(1)
        {
            if(scanf("%d",&t)==0)
            {
                printf("请输入数字，不要输入字母：");
                fflush(stdin);
            }

            else if(t>=0&&t<=1)
            {
                        break;
            }
            else
            {
                printf("请在选择范围内的数字,不要输入范围外的数字：");
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
            /*if(showtickets()==0)
            {
                printf("无票");
                break;
            }*/

            changeticketnumber();
            break;
        }
    }
}
