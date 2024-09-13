#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<io.h>

int DisplayN(char FName[],int iSize)
{
    int fd = 0;
    int iRet = 0;
    char Buffer[100] = {'\0'};
    int iCount = 0;
    int i = 0;

    fd = open(FName,O_RDONLY);

    iRet = read(fd,Buffer,12);

    printf("Number of bytes read from data is %d\n",iRet);
    printf("data read from file is :%s\n",Buffer);

}
int main()
{
    char FileName[30];
    int iValue = 0;
    
    printf("Enter file name that you want to open :\n");
    scanf("%s",FileName);

    printf("Enter number of charachters chrachter :\n");
    scanf("%s",&iValue);

   DisplayN(FileName,iValue);

    return 0;
}