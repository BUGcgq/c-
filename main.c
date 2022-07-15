#include "head.h"

int main(int argc, char const *argv[])
{
    supercard arr[len];
    bzero(arr,sizeof(arr));
    int num;
    int chose ;
    while (1)
    {
        printf("请输入你的账号：");
        scanf("%d",&num);
        int lg=login(arr,num);
        if (lg)
    {
        chose =input();
        switch (chose)
       {
         case daent:
           printf("请输入该战士编号：");
           scanf("%d",&num);
           while (getchar()!='\n');
            DataEntry(arr,num);
          break;
         case delda:
              DelData(arr);
        break;
        case lkda:
         printf("请输入要查找战士的编号：");
         scanf("%d",&num);
        while (getchar()!='\n');
        Lookdata(arr,num);
        break;
        case chged:
         printf("请输入要修改战士的编号：");
         scanf("%d",&num);
         while (getchar()!='\n');
          chagedata( arr, num);
        break;
        case ran:
            r_andom(arr);
        break;
       default:
        break;
       }
    }
    }
    
    return 0;
}
