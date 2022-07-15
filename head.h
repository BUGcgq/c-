#ifndef _HEAD_H
#define _HEAD_H
#include<stdio.h>
#include <time.h>
#include<string.h>
#include<stdlib.h>
#include <stdbool.h>
#include<unistd.h>
typedef struct super
{
    char name[10];
    char gender[10];
    int  age;
    float  odds;
    int damage;
    char skills[10];
    int num;
    int pasward;
}supercard;
#define len 10
void  DataEntry(supercard  arr[],int num);
void DelData(supercard  arr[]);
void Lookdata(supercard  arr[],int num);
void  chagedata(supercard  arr[],int num);
int login(supercard  arr[],int num);
void r_andom(supercard  arr[]);
typedef enum {daent=1,delda,lkda,chged,ran} Btn;
Btn input(void);


#endif