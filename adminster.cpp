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

    printf("�������Ҫ�ϴ��ĳ�Ʊ\n");
    printf("��������Ҫ���������Ϊ��Ʊid վ����� վ�� ��վʱ�� �۸� ����\n");
    struct Cartimes *cartimes_newp=(struct Cartimes*)malloc(sizeof(struct Cartimes));
    printf("�������г�ID\n");
    while(1)
    {

        if(scanf("%d",&cartimes_newp->id)==0)
        {
            printf("��������벻Ҫ������ĸ���߷���\n");
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
                    printf("����������ͬ��ID\n");
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
            printf("�������\n");
        }
    }


    printf("��������Ҫ����ĳ�Ʊ����վ��ĸ���");

    while(1)
    {
        if(scanf("%d",&cartimes_newp->stanumber)==0)
        {
            printf("��������벻Ҫ������ĸ���߷���\n");
            fflush(stdin);
        }

        else if(cartimes_newp->stanumber>=2)
        {
            break;
        }

        else
        {
            printf("�������\n");
        }

    }

    for(int i=0;i<cartimes_newp->stanumber;i++)
    {
        printf("վ��%d����:\n",i+1);
        scanf("%s",cartimes_newp->passplace[i]);
        printf("�����뵽վ��%dʱ��\n",i+1);
        printf("�м����ÿո�ָ�����ʱ���ʽ \n��   �� �� Сʱ ���� \n");
        while(1)
        {
            if(scanf("%d %d %d %d %d",&cartimes_newp->timeyear[i],&cartimes_newp->timemonth[i],&cartimes_newp->timeday[i],&cartimes_newp->timeh[i],&cartimes_newp->timem[i])==0)
            {
                printf("��������벻Ҫ������ĸ���߷���");
                fflush(stdin);
            }


            else if((cartimes_newp->timemonth[i]>=1&      &cartimes_newp->timemonth[i]<=12)&&cartimes_newp->timeday[i]>=1&&cartimes_newp->timeday[i]<=31&&(cartimes_newp->timeh[i]<24&&cartimes_newp->timeh[i]>=0)&&cartimes_newp->timem[i]<60&&cartimes_newp->timem[i]>=0)
            {
                if(i>=1&&cartimes_newp->timeyear[i]*31*24*60+cartimes_newp->timemonth[i]*24*60+cartimes_newp->timeh[i]*60+cartimes_newp->timem[i]<=cartimes_newp->timeyear[i-1]*31*24*60+cartimes_newp->timemonth[i-1]*24*60+cartimes_newp->timeh[i-1]*60+cartimes_newp->timem[i-1])
                {
                    printf("����ʱ�����");
                }
                else
                {
                    break;

                }

            }

            else
            {
                printf("�������");
            }
        }
        if(i>0)
        {
             printf("������%s��%s�ļ۸�\n",cartimes_newp->passplace[i-1],cartimes_newp->passplace[i]);
            while(scanf("%d",&cartimes_newp->money[i])==0)
            {
                printf("���������������:  \n");
                fflush(stdin);
            }

        }

    }





    printf("��������λ����\n");
    int number;
    while(scanf("%d",&number)==0)
    {
        printf("��������\n");
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
    printf("�ϴ��ɹ�|\n");
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
                printf("���վ%sʱ��%d��%d��%d��%dʱ%d��\n",cartimes_p->passplace[i],cartimes_p->timeyear[i],cartimes_p->timemonth[i],cartimes_p->timeday[i],cartimes_p->timeh[i],cartimes_p->timem[i]);
            }
            else if(i==cartimes_p->stanumber-1)
            {
                printf(" %s��%s��%d��Ʊ ",cartimes_p->passplace[i-1],cartimes_p->passplace[i],cartimes_p->desknumber[i]);
                printf("�յ�վ%sʱ��%d��%d��%d��%dʱ%d��\n\n",cartimes_p->passplace[i],cartimes_p->timeyear[i],cartimes_p->timemonth[i],cartimes_p->timeday[i],cartimes_p->timeh[i],cartimes_p->timem[i]);
            }
            else
            {
                printf(" %s��%s��%d��Ʊ ",cartimes_p->passplace[i-1],cartimes_p->passplace[i],cartimes_p->desknumber[i]);
                printf(";��վ%sʱ��%d��%d��%d��%dʱ%d��\n",cartimes_p->passplace[i],cartimes_p->timeyear[i],cartimes_p->timemonth[i],cartimes_p->timeday[i],cartimes_p->timeh[i],cartimes_p->timem[i]);
            }

        }


        cartimes_p=cartimes_p->next;
        t=1;
    }
    if(t==0)
    {
        printf("������Ʊ\n");

    }
    return t;

}



int Administer_choosevice()
{
        printf("���ù���Ա\n");
        printf("0������һҳ  1������Ʊ   2�鿴���е�Ʊ 3����鿴�û���Ϣ 4�����޸�Ʊ\n");
        int administerchoose;
        while(1)
        {
            if(scanf("%d",&administerchoose)==0)
            {
                printf("��Ҫ������ĸ��\n");
                fflush(stdin);
            }

            else if(administerchoose>=0&&administerchoose<=5)
            {
                        return administerchoose;
            }
            else
            {
                printf("��Ҫ���뷶Χ������֣�\n");
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
        printf("�˻���:%5s����:%5s���û���ƱΪ:\n\n",pU->username,pU->password);
        for(int i=0;i<pU->ticketnumber;i++)
        {
            printf("ID:%d������%s�����%s����ʱ��%d��%d��%d�յ���ʱ��%d��%d��%d��",pU->id[i],pU->startplace[i],pU->endplace[i],pU->startyear[i],pU->startmonth[i],pU->startday[i],pU->endyear[i],pU->endmonth[i],pU->endday[i]);
        }
        cout<<endl<<endl;
        pU=pU->next;
    }
    if(t==0)
    {
        printf("����û���κ��û�\n");
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
