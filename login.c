#include "head.h"
int login(supercard  arr[],int num)
{
    int i=0;
    int pa;
    int paward;
    for (i ; i <len; i++)
    {
        if (arr[i].num==num)
        {
           printf("请输入密码："); 
            scanf("%d",&paward);
             while (getchar()!='\n');
           if(arr[num].pasward==paward)
              {
                  printf("密码输入正确正在为您登录....\n");
                  sleep(3);
                  printf("%s登录系统成功！\n",arr[num].name);
                  return 1;
              }     
          else
          {
                printf("密码输入错误....\n");  
                return 0;
          }
          
        }   
    }
    if (i==len)
    { 
      printf("没有该账号：\n");
      printf("请输入管理员密码："); 
      i=0;
      scanf("%d",&pa);
      while (getchar()!='\n');
      if (pa==88888888)
      {
        printf("密码输入正确正在为您登录....\n");
        sleep(3);
        printf("登录系统成功！\n");
        return 1;
      }
      else
      {
          printf("管理员密码错误！\n");
          printf("正在退出......\n");
          sleep(3);
          return 0;
      }
      
    }
}