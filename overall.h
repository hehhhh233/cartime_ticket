
#include <bits/stdc++.h>

#ifndef OVERALL_H_INCLUDED

#define OVERALL_H_INCLUDED

using namespace std;


const int len=100000;




struct Usersdata
{
    char username[len];
    char password[len];
    int id[100];
    int ticketnumber;
    char startplace[100][len];
    int startyear[len];
    int startmonth[len];
    int startday[len];
    int starth[len];
    int startm[len];

    char endplace[100][len];
    int endyear[len];
    int endmonth[len];
    int endday[len];
    int endh[len];
    int endm[len];


    struct Usersdata *next;
};

struct Cartimes
{
    int id;



    int stanumber;
    char passplace[100][len];


    int timeyear[len];
    int timemonth[len];
    int timeday[len];

    int timeh[len];
    int timem[len];

    int money[len];
    int desknumber[len];



    struct Cartimes *next;
};
struct byCartimes
{
    int id;
    char bystartplace[len];
    char byendplace[len];

    int bystartyear;
    int bystartmonth;
    int bystartday;
    int bystarth;
    int bystartm;

    int byendyear;
    int byendmonth;
    int byendday;
    int byendh;
    int byendm;

    int bymoney;
    int bydesknumber;

};

//User
int Userinput();
void User();
void User_init();

//Adminster
void Administer();
int showtickets();
 void Administer_init();

 //write
 void writedata();
 void Awritedata();

 //read
 void readdata();
 void Areaddata();

 //sort
 void sortdata();

extern struct Cartimes *cartimes_pHead;
extern struct Usersdata *pHead;

//change
void changetickets();

//find
void finddata();

#endif // OVERALL_H_INCLUDED
