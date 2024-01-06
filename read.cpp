

#include <iostream>
#include <bits/stdc++.h>
#include "overall.h"

using namespace std;




void readdata()
{

        FILE *fp;
        struct Usersdata *pNew,*pTail=pHead;
        if((fp=fopen("D:\\sb.dat","rb"))==NULL)
        {
            printf("错误\n");
            return;
        }


        pNew=(Usersdata*)malloc(sizeof(Usersdata));
        fread(&pNew->username,100000*sizeof(char),1,fp);
        fread(&pNew->password,100000*sizeof(char),1,fp);
        fread(&pNew->id,100*sizeof(int),1,fp);



        fread(&pNew->ticketnumber,sizeof(int),1,fp);
        fread(&pNew->startplace,100*sizeof(char[len]),1,fp);
        fread(&pNew->startyear,len*sizeof(int),1,fp);
        fread(&pNew->startmonth,len*sizeof(int),1,fp);
        fread(&pNew->startday,len*sizeof(int),1,fp);
        fread(&pNew->starth,len*sizeof(int),1,fp);
        fread(&pNew->startm,len*sizeof(int),1,fp);


        fread(&pNew->endplace,100*sizeof(char[len]),1,fp);
        fread(&pNew->endyear,len*sizeof(int),1,fp);
        fread(&pNew->endmonth,len*sizeof(int),1,fp);
        fread(&pNew->endday,len*sizeof(int),1,fp);
        fread(&pNew->endh,len*sizeof(int),1,fp);
        fread(&pNew->endm,len*sizeof(int),1,fp);







        while(feof(fp)==0)
        {
            pNew->next=NULL;
            pTail->next=pNew;
            pTail=pNew;
            pNew=(Usersdata*)malloc(sizeof(Usersdata));
            fread(&pNew->username,100000*sizeof(char),1,fp);
            fread(&pNew->password,100000*sizeof(char),1,fp);
            fread(&pNew->id,100*sizeof(int),1,fp);



            fread(&pNew->ticketnumber,sizeof(int),1,fp);
            fread(&pNew->startplace,100*sizeof(char[len]),1,fp);
            fread(&pNew->startyear,len*sizeof(int),1,fp);
            fread(&pNew->startmonth,len*sizeof(int),1,fp);
            fread(&pNew->startday,len*sizeof(int),1,fp);
            fread(&pNew->starth,len*sizeof(int),1,fp);
            fread(&pNew->startm,len*sizeof(int),1,fp);


            fread(&pNew->endplace,100*sizeof(char[len]),1,fp);
            fread(&pNew->endyear,len*sizeof(int),1,fp);
            fread(&pNew->endmonth,len*sizeof(int),1,fp);
            fread(&pNew->endday,len*sizeof(int),1,fp);
            fread(&pNew->endh,len*sizeof(int),1,fp);
            fread(&pNew->endm,len*sizeof(int),1,fp);

        }
        free(pNew);
        fclose(fp);
        printf("读取成功");
}




void Areaddata()
{

        FILE *fp;
        struct Cartimes *pNew,*pTail=cartimes_pHead;
        if((fp=fopen("D:\\mb.dat","rb"))==NULL)
        {
            printf("错误\n");
            return;
        }


        pNew=(Cartimes*)malloc(sizeof(Cartimes));

         fread(&pNew->id,sizeof(int),1,fp);
        fread(&pNew->stanumber,sizeof(int),1,fp);

        fread(&pNew->passplace,100*sizeof(char[len]),1,fp);
        fread(&pNew->timeyear,len*sizeof(int),1,fp);
        fread(&pNew->timemonth,len*sizeof(int),1,fp);
        fread(&pNew->timeday,len*sizeof(int),1,fp);

        fread(&pNew->timeh,len*sizeof(int),1,fp);
        fread(&pNew->timem,len*sizeof(int),1,fp);
        fread(&pNew->money,len*sizeof(int),1,fp);
        fread(&pNew->desknumber,len*sizeof(int),1,fp);





        while(feof(fp)==0)
        {
            pNew->next=NULL;
            pTail->next=pNew;
            pTail=pNew;
            pNew=(Cartimes*)malloc(sizeof(Cartimes));

            fread(&pNew->id,sizeof(int),1,fp);
            fread(&pNew->stanumber,sizeof(int),1,fp);

            fread(&pNew->passplace,100*sizeof(char[len]),1,fp);
            fread(&pNew->timeyear,len*sizeof(int),1,fp);
            fread(&pNew->timemonth,len*sizeof(int),1,fp);
            fread(&pNew->timeday,len*sizeof(int),1,fp);

            fread(&pNew->timeh,len*sizeof(int),1,fp);
            fread(&pNew->timem,len*sizeof(int),1,fp);
            fread(&pNew->money,len*sizeof(int),1,fp);
            fread(&pNew->desknumber,len*sizeof(int),1,fp);




        }
        free(pNew);
        fclose(fp);
        printf("读取成功");
}

