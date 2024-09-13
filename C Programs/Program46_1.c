#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    char FileName[50];
    char Arr[100] = {'\0'};
    int iRet = 0;
    int fd = 0;

    printf("Enter name of file that you want to open :\n");
    scanf("%s",FileName);

    fd =  open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open\n");
    }

    iRet = read(fd,Arr,10);

    printf("Number of bytes read from file is %d\n",iRet);
    printf("Data read from file is : %s\n",Arr);

    return 0;
}