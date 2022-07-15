#include "head.h"

void  DataEntry(supercard  arr[],int num)
{
    char name[10];
    char gender[5];
    char skills[10];
    int  age;
    float  odds;
    int damage;
    int pasward;
    for (int i = 0; i <len; i++)
    {
       if (strlen(arr[num].name)>1||num>=len)
       {
         printf("该编号已经有战士了,或者编号已经满\n");
       }
       else
       {
    
           printf("请创建密码：");
           scanf("%d",&pasward);
           while (getchar()!='\n');
           arr[num].pasward=pasward;
           printf("请输入战士名字：");
           arr[num].num=num;
           fgets(name,10,stdin);
           strcpy(arr[num].name,name);
           printf("请输入年龄：");
           scanf("%d",&age);
           while (getchar()!='\n');
           arr[num].age=age;
           printf("请输入战士品质：");
           fgets(gender,10,stdin);
           strcpy(arr[num].gender,gender);
           printf("请输入攻击力：");
           scanf("%d",&damage);
           while (getchar()!='\n');
           arr[num].damage=damage;
           printf("请输入战士技能：");
           fgets(skills,10,stdin);
           strcpy(arr[num].skills,skills);
           printf("请输入胜率：");
           scanf("%e",&odds);
           while (getchar()!='\n');
           arr[num].odds=odds;
           printf("请稍等正在为您创建角色.....\n");
           sleep(3);
           printf("创建角色成功！\n");
       }
       return ;
    }

}