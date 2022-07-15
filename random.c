#include "head.h"

void r_andom(supercard  arr[])
{
       int number;
       printf("正在为你抽取...\n");
       sleep(2);
       srand(time(NULL));
         for (int j = 0; j < 500000;j=j+10000)
      {
        number=rand()%len;
        printf("\r%s",strtok(arr[number].name, "\n"));
        fflush(stdout);
        usleep(j);
      }
    printf("\n恭喜抽到品质%s的英雄%s\n",strtok(arr[number].gender, "\n"),arr[number].name);
     return ;
}