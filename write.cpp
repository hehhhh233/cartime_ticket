#include <iostream>
#include <bits/stdc++.h>
#include "overall.h"

using namespace std;




void writedata()
{

   FILE *fp;
   struct Usersdata *p=pHead;
    p=p->next;
    if((fp=fopen("D:\\sb.dat","wb"))==NULL)
    {
        printf("文件打开不成功:\n");
        return;
    }
    while(p)
    {


        fwrite(&p->username,100000*sizeof(char),1,fp);
        fwrite(&p->password,100000*sizeof(char),1,fp);
        fwrite(&p->id,100*sizeof(int),1,fp);


        fwrite(&p->ticketnumber,sizeof(int),1,fp);
        fwrite(&p->startplace,100*sizeof(char[len]),1,fp);
        fwrite(&p->startyear,len*sizeof(int),1,fp);
        fwrite(&p->startmonth,len*sizeof(int),1,fp);
        fwrite(&p->startday,len*sizeof(int),1,fp);
        fwrite(&p->starth,len*sizeof(int),1,fp);
        fwrite(&p->startm,len*sizeof(int),1,fp);


        fwrite(&p->endplace,100*sizeof(char[len]),1,fp);
        fwrite(&p->endyear,len*sizeof(int),1,fp);
        fwrite(&p->endmonth,len*sizeof(int),1,fp);
        fwrite(&p->endday,len*sizeof(int),1,fp);
        fwrite(&p->endh,len*sizeof(int),1,fp);
        fwrite(&p->endm,len*sizeof(int),1,fp);




        p=p->next;
    }
    fclose(fp);

}

void Awritedata()
{

   FILE *fp;
   struct Cartimes *p=cartimes_pHead;
    p=p->next;
    if((fp=fopen("D:\\mb.dat","wb"))==NULL)
    {
        printf("文件打开不成功:\n");
        return;
    }
    while(p)
    {
        fwrite(&p->id,sizeof(int),1,fp);
        fwrite(&p->stanumber,sizeof(int),1,fp);

        fwrite(&p->passplace,100*sizeof(char[len]),1,fp);
        fwrite(&p->timeyear,len*sizeof(int),1,fp);
        fwrite(&p->timemonth,len*sizeof(int),1,fp);
        fwrite(&p->timeday,len*sizeof(int),1,fp);

        fwrite(&p->timeh,len*sizeof(int),1,fp);
        fwrite(&p->timem,len*sizeof(int),1,fp);
        fwrite(&p->money,len*sizeof(int),1,fp);
        fwrite(&p->desknumber,len*sizeof(int),1,fp);


        p=p->next;
    }
    fclose(fp);
    printf("成功\n");
}
