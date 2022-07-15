#include "head.h"

void DelData(supercard  arr[])
{
    char name[10];
    int i=0;
    int paward;
    printf("请输入密码：\n"); 
            scanf("%d",&paward);
             while (getchar()!='\n');
      if(paward==88888888)
   {
        printf("*******请输入需要删除角色名字********\n");
        fgets(name,10,stdin);
         for (i; i<len; i++)
       {
          if( strcmp(arr[i].name,name)==0)
         {
           printf("请稍等正在为您删除角色.....\n");
           sleep(3);
           printf("******角色删除成功！********\n");
           printf("==========================\n");
           memset(&arr[i], 0, sizeof(arr[i]));
           break;
          }
          return ;
          if(i>=len)
         {
           printf("***没有找到这个角色***\n");
           return ;
         } 
        }
   }
      else
      {
        printf("密码错误\n");
        return ;
      }

}