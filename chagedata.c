#include "head.h"
void  chagedata(supercard  arr[],int num)
{
    int a;
    char name[10];
    char gender[5];
    char skills[10];
    int  age;
    float  odds;
    int damage;
     int pasward;
    printf("1.名字**2.性别**3.技能**4.年龄**5攻击力**6胜率**7密码\n");
    printf("请输入数字选择修改的项目：");
    scanf("%d",&a);
    while (getchar()!='\n');
    switch (a)
    {
    case 1:
        printf("请重新输入战士名字：");
        fgets(name,10,stdin);
        strcpy(arr[num].name,name);
         printf("正在为您修改请稍后.....\n");
         sleep(3);
        printf("修改成功！\n");
        break;
    case 2:
        printf("请重新输入战士品质：");
        fgets(gender,10,stdin);
        strcpy(arr[num].gender,gender);
        printf("正在为您修改请稍后.....\n");
         sleep(3);
        printf("修改成功！\n");
        break;
    case 3:
        printf("请重新输入战士技能：");
        fgets(skills,10,stdin);
        strcpy(arr[num].skills,skills);
         printf("正在为您修改请稍后.....\n");
         sleep(3);
        printf("修改成功！\n");
        break;
    case 4:
        printf("请重新输入年龄：");
        scanf("%d",&age);
        while (getchar()!='\n');
        arr[num].age=age;
         printf("正在为您修改请稍后.....\n");
         sleep(3);
        printf("修改成功！\n");
        break;
    case 5:
        printf("请重新输入攻击力：");
        scanf("%d",&damage);
        while (getchar()!='\n');
        arr[num].damage=damage;
         printf("正在为您修改请稍后.....\n");
         sleep(3);
        printf("修改成功！\n");
    case 6:
        printf("请重新输入胜率：");
        scanf("%e",&odds);
        while (getchar()!='\n');
        arr[num].odds=odds;
         printf("正在为您修改请稍后.....\n");
         sleep(3);
        printf("修改成功！\n");
        break;
    case 7:
          printf("请重新输入密码：");
        scanf("%d",&pasward);
        while (getchar()!='\n');
        arr[num].pasward=pasward;
         printf("正在为您修改请稍后.....\n");
         sleep(3);
        printf("修改成功！\n");
    break;
      
    default:
        printf("输入无效重新输入\n");
        break;
    } 
}