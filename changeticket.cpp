#include <iostream>
#include <bits/stdc++.h>
#include "overall.h"
/*void changeticketcost()
{
    printf("������Ҫ�޸ĳ�Ʊ��ID\n");
    int chooseid;
     while(1)
        {
            if(scanf("%d",&chooseid)==0)
            {
                printf("���������֣���Ҫ������ĸ��");
                fflush(stdin);
            }

            else if(chooseid>=0)
            {
                        break;
            }
            else
            {
                printf("����ѡ��Χ�ڵ�����,��Ҫ���뷶Χ������֣�");
            }
        }
    struct Cartimes *p=cartimes_pHead->next;
    int t=0;
    while(p!=NULL)
    {
        if(chooseid==p->id)
        {
            printf("ID%3d:������%10s �����%10s��������:%2d��%2d��%2d:%2d��������:%2d��%2d��%2d:%2d �۸�%4d \n",p->id,p->passplace[0],p->passplace[p->stanumber-1],p->starttimemonth,p->starttimeday,p->starttimeh,p->starttimem,p->endtimemonth,p->endtimeday,p->endtimeh,p->endtimem,p->money);
            t=1;
            break;
        }
        p=p->next;
    }
    if(t==0)
    {
        printf("δ���ҵ�\n");
        return;
    }

    printf("��������Ҫ�޸ĵļ۸�\n");
    scanf("%d",&p->money);

    printf("�޸ĳɹ�\n");
}


void  changeticketstarttime()
{
    printf("������Ҫ�޸ĳ�Ʊ��ID\n");
    int chooseid;
     while(1)
        {
            if(scanf("%d",&chooseid)==0)
            {
                printf("���������֣���Ҫ������ĸ��");
                fflush(stdin);
            }

            else if(chooseid>=0)
            {
                        break;
            }
            else
            {
                printf("����ѡ��Χ�ڵ�����,��Ҫ���뷶Χ������֣�");
            }
        }
    struct Cartimes *p=cartimes_pHead->next;
    int t=0;
    while(p!=NULL)
    {
        if(chooseid==p->id)
        {
            printf("ID%3d:������%10s �����%10s��������:%2d��%2d��%2d:%2d��������:%2d��%2d��%2d:%2d �۸�%4d \n",p->id,p->passplace[0],p->passplace[p->stanumber-1],p->starttimemonth,p->starttimeday,p->starttimeh,p->starttimem,p->endtimemonth,p->endtimeday,p->endtimeh,p->endtimem,p->money);
            t=1;
            break;
        }
        p=p->next;
    }
    if(t==0)
    {
        printf("δ���ҵ�\n");
        return;
    }

    printf("��������Ҫ�޸ĵĳ���ʱ��\n");
    printf("�� �� ʱ ��\n");
    while(1)
    {
        if(scanf("%d %d %d %d",&p->starttimemonth,&p->starttimeday,&p->starttimeh,&p->starttimem)==0)
        {
            printf("����������: ");
            fflush(stdin);
        }

        else if((p->endtimemonth>=1&&p->endtimemonth<=12)&&p->endtimeday>=1&&p->endtimeday<=31&&(p->endtimeh<=24&&p->endtimeh>=0)&&p->endtimem<=60&&p->endtimem>=0)
        {
            if((p->endtimemonth*31*24*60+p->endtimeday*24*60+p->endtimeh*60+p->endtimem)<=(p->starttimemonth*31*24*60+p->starttimeday*24*60+p->starttimeh*60+p->starttimem))
            {
                printf("������ȵ�������С������:\n");
            }
            else
            {
                break;
            }

        }

        else
        {
            printf("��Ҫ���뷶Χ������֣� ");
        }
    }

    printf("�޸ĳɹ�\n");

}

void changeticketendtime()
{
     printf("������Ҫ�޸ĳ�Ʊ��ID\n");
    int chooseid;
     while(1)
        {
            if(scanf("%d",&chooseid)==0)
            {
                printf("���������֣���Ҫ������ĸ��");
                fflush(stdin);
            }

            else if(chooseid>=0)
            {
                        break;
            }
            else
            {
                printf("����ѡ��Χ�ڵ�����,��Ҫ���뷶Χ������֣�");
            }
        }
    struct Cartimes *p=cartimes_pHead->next;
    int t=0;
    while(p!=NULL)
    {
        if(chooseid==p->id)
        {
            printf("ID%3d:������%10s �����%10s��������:%2d��%2d��%2d:%2d��������:%2d��%2d��%2d:%2d �۸�%4d \n",p->id,p->passplace[0],p->passplace[p->stanumber-1],p->starttimemonth,p->starttimeday,p->starttimeh,p->starttimem,p->endtimemonth,p->endtimeday,p->endtimeh,p->endtimem,p->money);
            t=1;
            break;
        }
        p=p->next;
    }
    if(t==0)
    {
        printf("δ���ҵ�\n");
        return;
    }

    printf("��������Ҫ�޸ĵĵ���ʱ��\n");
    printf("�� �� ʱ ��\n");
    while(1)
    {
        if(scanf("%d %d %d %d",&p->endtimemonth,&p->endtimeday,&p->endtimeh,&p->endtimem)==0)
        {
            printf("����������: ");
            fflush(stdin);
        }

        else if((p->endtimemonth>=1&&p->endtimemonth<=12)&&p->endtimeday>=1&&p->endtimeday<=31&&(p->endtimeh<=24&&p->endtimeh>=0)&&p->endtimem<=60&&p->endtimem>=0)
        {
            if((p->endtimemonth*31*24*60+p->endtimeday*24*60+p->endtimeh*60+p->endtimem)<=(p->starttimemonth*31*24*60+p->starttimeday*24*60+p->starttimeh*60+p->starttimem))
            {
                printf("������ȳ������ڴ������:\n");
            }
            else
            {
                break;
            }

        }

        else
        {
            printf("��Ҫ���뷶Χ������֣� ");
        }
    }


    printf("�޸ĳɹ�\n");


}

void changeticketstartplace()
{
     printf("������Ҫ�޸ĳ�Ʊ��ID\n");
    int chooseid;
     while(1)
        {
            if(scanf("%d",&chooseid)==0)
            {
                printf("���������֣���Ҫ������ĸ��");
                fflush(stdin);
            }

            else if(chooseid>=0)
            {
                        break;
            }
            else
            {
                printf("����ѡ��Χ�ڵ�����,��Ҫ���뷶Χ������֣�");
            }
        }
    struct Cartimes *p=cartimes_pHead->next;
    int t=0;
    while(p!=NULL)
    {
        if(chooseid==p->id)
        {
            printf("ID%3d:������%10s �����%10s��������:%2d��%2d��%2d:%2d��������:%2d��%2d��%2d:%2d �۸�%4d \n",p->id,p->passplace[0],p->passplace[p->stanumber-1],p->starttimemonth,p->starttimeday,p->starttimeh,p->starttimem,p->endtimemonth,p->endtimeday,p->endtimeh,p->endtimem,p->money);
            t=1;
            break;
        }
        p=p->next;
    }
    if(t==0)
    {
        printf("δ���ҵ�\n");
        return;
    }

    printf("��������Ҫ�޸ĵĳ�����\n");
    scanf("%s",p->passplace[0]);

    printf("�޸ĳɹ�\n");
}



void changeticketendplace()
{
     printf("������Ҫ�޸ĳ�Ʊ��ID\n");
    int chooseid;
     while(1)
        {
            if(scanf("%d",&chooseid)==0)
            {
                printf("���������֣���Ҫ������ĸ��");
                fflush(stdin);
            }

            else if(chooseid>=0)
            {
                        break;
            }
            else
            {
                printf("����ѡ��Χ�ڵ�����,��Ҫ���뷶Χ������֣�");
            }
        }
    struct Cartimes *p=cartimes_pHead->next;
    int t=0;
    while(p!=NULL)
    {
        if(chooseid==p->id)
        {
            printf("ID%3d:������%10s �����%10s��������:%2d��%2d��%2d:%2d��������:%2d��%2d��%2d:%2d �۸�%4d \n",p->id,p->startplace,p->endplace,p->starttimemonth,p->starttimeday,p->starttimeh,p->starttimem,p->endtimemonth,p->endtimeday,p->endtimeh,p->endtimem,p->money);
            t=1;
            break;
        }
        p=p->next;
    }
    if(t==0)
    {
        printf("δ���ҵ�\n");
        return;
    }

    printf("��������Ҫ�޸ĵĵ����\n");
    scanf("%s",p->endplace);

    printf("�޸ĳɹ�\n");
}
*/
void changeticketnumber()
{
    printf("������Ҫ�޸ĳ�Ʊ��ID\n");
    int chooseid;
     while(1)
        {
            if(scanf("%d",&chooseid)==0)
            {
                printf("���������֣���Ҫ������ĸ��");
                fflush(stdin);
            }

            else if(chooseid>=0)
            {
                        break;
            }
            else
            {
                printf("����ѡ��Χ�ڵ�����,��Ҫ���뷶Χ������֣�");
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
        }
        t=1;
        cartimes_p=cartimes_p->next;
    }
    if(t==0)
    {
        printf("δ���ҵ�\n");
        return;
    }

    printf("��������Ҫ���ӵĳ�Ʊ����\n");
    int number;
     while(1)
    {
        if(scanf("%d",&number)==0)
        {
            printf("���������֣���Ҫ������ĸ��");
            fflush(stdin);
        }

        else if(number>=0)
        {
            break;
        }
        else
        {
            printf("��Ҫ���뷶Χ������֣�");
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



    printf("�޸ĳɹ�\n");
}

void changetickets()
{
    system("cls");
    printf("���������޸ĵ�����\n0��������һҳ\n1�������ӳ�Ʊ����\n");
    int t;
        while(1)
        {
            if(scanf("%d",&t)==0)
            {
                printf("���������֣���Ҫ������ĸ��");
                fflush(stdin);
            }

            else if(t>=0&&t<=1)
            {
                        break;
            }
            else
            {
                printf("����ѡ��Χ�ڵ�����,��Ҫ���뷶Χ������֣�");
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
                printf("��Ʊ");
                break;
            }*/

            changeticketnumber();
            break;
        }
    }
}
