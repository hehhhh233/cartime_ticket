
#include <iostream>
#include <bits/stdc++.h>
#include "overall.h"

using namespace std;


void User_init()
{

    pHead->next=NULL;

}


struct Usersdata *User_login()
{
    system("cls");
    printf("�����������û���:\n");
    string login_id;
    cin>>login_id;
    printf("��������������:\n");
    string login_password;
    cin>>login_password;

    struct Usersdata *p=pHead;

    while(p!=NULL)
    {
        if(login_id==p->username&&login_password==p->password)
        {

            return p;
        }
        p=p->next;
    }

    printf("�˻��������������\n");
    return NULL;

}


void User_findtickets(struct Usersdata *User_findtickets_p)
{
    printf("���ĳ�ƱΪ:\n");
    for(int i=0;i<User_findtickets_p->ticketnumber;i++)
    {
        printf("ID%d %s->%s ����ʱ��%d��%d��%d��%dʱ%d�� ����ʱ��%d��%d��%d��%dʱ%d��\n",User_findtickets_p->id[i],User_findtickets_p->startplace[i],User_findtickets_p->endplace[i],User_findtickets_p->startyear[i],User_findtickets_p->startmonth[i],User_findtickets_p->startday[i],User_findtickets_p->starth[i],User_findtickets_p->startm[i],User_findtickets_p->endyear[i],User_findtickets_p->endmonth[i],User_findtickets_p->endday[i],User_findtickets_p->endh[i],User_findtickets_p->endm[i]);
    }
    return;
}

int sorttime_earlytolate(const struct byCartimes &a,const struct byCartimes &b)
{
    return (a.bystartyear*365*31*24*60+a.bystartmonth*31*24*60+a.bystartday*24*60+a.bystarth*60+a.bystartm)<(b.bystartyear*365*31*24*60+b.bystartmonth*31*24*60+b.bystartday*24*60+b.bystarth*60+b.bystartm);


}

int sorttime_latetoearly(const struct byCartimes &a,const struct byCartimes &b)
{
    return (a.bystartyear*365*31*24*60+a.bystartmonth*31*24*60+a.bystartday*24*60+a.bystarth*60+a.bystartm)>(b.bystartyear*365*31*24*60+b.bystartmonth*31*24*60+b.bystartday*24*60+b.bystarth*60+b.bystartm);


}



int sorttime_endearlytolate(const struct byCartimes &a,const struct byCartimes &b)
{
    return (a.byendyear*365*31*24*60+a.byendmonth*31*24*60+a.byendday*24*60+a.byendh*60+a.byendm)<(b.byendyear*365*31*24*60+b.byendmonth*31*24*60+b.byendday*24*60+b.byendh*60+b.byendm);


}

int sorttime_endlatetoearly(const struct byCartimes &a,const struct byCartimes &b)
{
    return (a.byendyear*365*31*24*60+a.byendmonth*31*24*60+a.byendday*24*60+a.byendh*60+a.byendm)>(b.byendyear*365*31*24*60+b.byendmonth*31*24*60+b.byendday*24*60+b.byendh*60+b.byendm);


}



   byCartimes by_p[100];

void User_purchasetickets(struct Usersdata *User_purchase_p)
{
    bool ifpurchase[100000];
    memset(ifpurchase,1,sizeof(ifpurchase));
    int t=0;
    char startplace[100000];
    char endplace[100000];
   printf("���������ĳ����غ͵����");
    int year,month,day;


    while(1)
    {
        scanf("%s",startplace);
        int justice=1;
        for(int i=0;i<sizeof(startplace);i++)
        {
            if(startplace[i]<='9'&&startplace[i]>='0')
            {

                justice=0;
            }
        }
        if(justice==0)
        {
            printf("��Ҫ��������");
        }
        if(justice==1)
        {
            break;
        }

    }

   scanf("%s",endplace);
   printf("��������Ҫѡ�����������\n");
   printf("�� �� ��\n");
   while(1)
   {
       if(scanf("%d %d %d",&year,&month,&day)==0)
        {
            printf("���������֣���Ҫ������ĸ��");
            fflush(stdin);
        }
        else if(year>=0&&month<=12&&month>=1&&day>=1&&day<=31)
        {
            break;
        }
        else
        {
            printf("�����뷶Χ�ڵ�����");
        }
   }

      int k=0;

        struct Cartimes* p=cartimes_pHead;

       p=p->next;

       while(p!=NULL)
       {

           for(int i=0;i<p->stanumber;i++)
           {
               int price=0;
               int mindesknumber=10000;
               if(strcmp(p->passplace[i],startplace)==0&&year==p->timeyear[i]&&month==p->timemonth[i]&&day==p->timeday[i])
               {

                   for(int j=i+1;j<p->stanumber;j++)
                   {
                       mindesknumber=min(p->desknumber[j],mindesknumber);
                       price+=p->money[j];
                       if(strcmp(p->passplace[j],endplace)==0)
                       {
                           t=1;
                     //     printf("id:%d %s --> %s  ����ʱ��%d��%d��%d��%dʱ%d�ֵ���ʱ��%d��%d��%d��%dʱ%d�� �۸�%d��λ��:%d \n",p->id,p->passplace[i],p->passplace[j],p->timeyear[i],p->timemonth[i],p->timeday[i],p->timeh[i],p->timem[i],p->timeyear[j],p->timemonth[j],p->timeday[j],p->timeh[j],p->timem[j],price,mindesknumber);
                          by_p[k].id=p->id;
                          strcpy(by_p[k].bystartplace,p->passplace[i]);
                          strcpy(by_p[k].byendplace,p->passplace[j]);
                          by_p[k].bystartyear=p->timeyear[i];
                        by_p[k].bystartmonth=p->timemonth[i];
                        by_p[k].bystartday=p->timeday[i];
                        by_p[k].bystarth=p->timeh[i];
                        by_p[k].bystartm=p->timem[i];

                        by_p[k].byendyear=p->timeyear[j];
                        by_p[k].byendmonth=p->timemonth[j];
                        by_p[k].byendday=p->timeday[j];
                        by_p[k].byendh=p->timeh[j];
                        by_p[k].byendm=p->timem[j];
                        by_p[k].bydesknumber=mindesknumber;
                        by_p[k++].bymoney=price;




                          if(mindesknumber==0)
                          {
                              ifpurchase[p->id]=0;
                          }
                       }
                   }
               }

           }
           p=p->next;
       }
       if(t==0)
       {
           printf("û���ҵ��˳�Ʊ����\n");
           return;
       }




   while(1)
    {
        system("cls");
        for(int i=0;i<k;i++)
        {
            printf("id:%d %s --> %s  ����ʱ��%d��%d��%d��%dʱ%d�ֵ���ʱ��%d��%d��%d��%dʱ%d�� �۸�%d��λ��:%d \n",by_p[i].id,by_p[i].bystartplace,by_p[i].byendplace,by_p[i].bystartyear,by_p[i].bystartmonth,by_p[i].bystartday,by_p[i].bystarth,by_p[i].bystartm,by_p[i].byendyear,by_p[i].byendmonth,by_p[i].byendday,by_p[i].byendh,by_p[i].byendm,by_p[i].bymoney,by_p[i].bydesknumber);
        }

        printf("0���� 1���� 2������ʱ����絽������ 3������ʱ����������� 4������ʱ����絽������ 5������ʱ�����������");
       int purchase_choose;
       while(1)
       {
           if(scanf("%d",&purchase_choose)==0)
            {
                printf("���������֣���Ҫ������ĸ��");
                fflush(stdin);
            }
            else if(purchase_choose>=0&&purchase_choose<=5)
            {
                break;

            }
            else
            {
                printf("�����뷶Χ�ڵ�����");
            }
       }
       if(purchase_choose==0)
       {
           return;
       }
       if(purchase_choose==2)
       {
           sort(by_p,by_p+k,sorttime_earlytolate);
       }
       if(purchase_choose==3)
       {
            sort(by_p,by_p+k,sorttime_latetoearly);
       }
       if(purchase_choose==4)
       {
            sort(by_p,by_p+k,sorttime_endearlytolate);
       }
        if(purchase_choose==5)
       {
            sort(by_p,by_p+k,sorttime_endlatetoearly);
       }
       if(purchase_choose==1)
       {
           break;
       }

    }






   printf("��ѡ�����Ʊid");
   int purchase_id;
    while(1)
   {
       if(scanf("%d",&purchase_id)==0)
        {
            printf("���������֣���Ҫ������ĸ��");
            fflush(stdin);
        }
        else if(purchase_id>=0)
        {
            break;
        }
        else
        {
            printf("�����뷶Χ�ڵ�����");
        }
   }
   if(ifpurchase[purchase_id]==0)
   {
       printf("��Ʊ���ܹ���\n");
       return;
   }

    p=cartimes_pHead;
    p=p->next;
    while(p!=NULL)
   {
        if(purchase_id==p->id)
        {
            for(int i=0;i<p->stanumber;i++)
           {

               if(strcmp(p->passplace[i],startplace)==0&&year==p->timeyear[i]&&month==p->timemonth[i]&&day==p->timeday[i])
               {


                   for(int j=i+1;j<p->stanumber;j++)
                   {
                         p->desknumber[j]--;
                        if(strcmp(p->passplace[j],endplace)==0)
                           {
                               User_purchase_p->id[User_purchase_p->ticketnumber]=p->id;
                               strcpy(User_purchase_p->startplace[User_purchase_p->ticketnumber],startplace);
                               User_purchase_p->startyear[User_purchase_p->ticketnumber]=p->timeyear[i];
                               User_purchase_p->startmonth[User_purchase_p->ticketnumber]=p->timemonth[i];
                               User_purchase_p->startday[User_purchase_p->ticketnumber]=p->timeday[i];
                               User_purchase_p->starth[User_purchase_p->ticketnumber]=p->timeh[i];
                               User_purchase_p->startm[User_purchase_p->ticketnumber]=p->timem[i];

                               strcpy(User_purchase_p->endplace[User_purchase_p->ticketnumber],endplace);
                               User_purchase_p->endyear[User_purchase_p->ticketnumber]=p->timeyear[j];
                              User_purchase_p->endmonth[User_purchase_p->ticketnumber]=p->timemonth[j];
                              User_purchase_p->endday[User_purchase_p->ticketnumber]=p->timeday[j];
                              User_purchase_p->endh[User_purchase_p->ticketnumber]=p->timeh[j];
                              User_purchase_p->endm[User_purchase_p->ticketnumber]=p->timem[j];


                               User_purchase_p->ticketnumber++;

                               break;
                           }


                   }
               }

           }
        }

       p=p->next;
   }



}

int User_input(struct Usersdata *User_input_p)
{
    system("cls");
    printf("����������Ҫ�ķ���\n");
    printf("0����Ʊ 1�����Ʊ\n");
    int service_choose;

    while(1)
    {
        if(scanf("%d",&service_choose)==0)
        {
            printf("���������֣���Ҫ������ĸ��");
            fflush(stdin);
        }

        else if(service_choose==1||service_choose==0)
        {
            if(service_choose==0)
            {
                User_purchasetickets(User_input_p);
                break;

            }
            if(service_choose==1)
            {
                User_findtickets(User_input_p);
                break;
            }
        }
        else
        {
            printf("��Ҫ���뷶Χ������֣�\n");
        }
    }

}



void User_register()
{
    struct Usersdata *newp=(struct Usersdata*)malloc(sizeof(struct Usersdata));

    printf("����������Ҫ�������û���:\n");

    cin>>newp->username;
    printf("����������Ҫ����������:\n");

    cin>>newp->password;
    struct Usersdata *p=pHead;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=newp;
    printf("ע��ɹ�");
}


/*void User_time()
{
    int n,day;

    time_t seconds;

    seconds = time(NULL);
    n=(seconds+28800)/86400;
    printf("���ڵ�ʱ����%d��%d��%d��%dʱ%d��%d��",)
    day=n%8;
}

*/
void User()
{
    system("cls");

    while(1)
    {
        //User_time();

        printf("��������ǳ˿�\n");
        printf("0��������һҳ  1�����½ 2����ע�� \n");
        int User_character;
        if(scanf("%d",&User_character)==0)
        {
            printf("���������֣���Ҫ������ĸ��");
            fflush(stdin);
        }

        else if(User_character==0||User_character==1||User_character==2)
        {
            if(User_character==1)
            {
                struct Usersdata *User_character_p=User_login();
               if(User_character_p!=NULL)
               {
                   printf("��½�ɹ�\n");
                   User_input(User_character_p);
                   break;

               }
               else
               {
                   printf("û�������˻�\n");
               }
            }
            if(User_character==2)
            {
                User_register();
            }
             if(User_character==0)
            {
                break;
            }

        }
        else
        {
            printf("��Ҫ���뷶Χ������֣�\n");
        }


    }

}

