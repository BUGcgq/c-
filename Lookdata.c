#include "head.h"
void Lookdata(supercard  arr[],int num)
{
    printf("请稍等正在为查询%d号战士的信息.....\n",num);
    sleep(3);
    if (strlen(arr[num].name)<1)
    {
       printf("没有该角色\n");
       return ;
    }
    else
    {
    printf("%d号战士的角色信息如下\n",arr[num].num);
     printf("姓名：%s",arr[num].name);
    printf("品质：%s",arr[num].gender);
    printf("年龄：%d\n",arr[num].age);
    printf("胜率：%0.2f\n",arr[num].odds);
    printf("技能：%s",arr[num].skills);
    printf("攻击力：%d\n",arr[num].damage);
    return ;
    }
}