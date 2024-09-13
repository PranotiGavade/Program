#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char FileName[30];
    char Buffer[100] = {"\0"};
    int iRet = 0;

    printf("Enter file name that you want to open :\n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("File is not opened\n");
    }

   while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
   {
        printf("%d\n",iRet);
   }

   close(fd);

    return 0;
}