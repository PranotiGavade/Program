#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<io.h>

int CountWhite(char FName[])
{
    int fd = 0;
    int iRead = 0;
    char Buffer[100];
    int iCount = 0;
    int i = 0;

    fd = open(FName,O_RDONLY);

    while((iRead = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(i = 0; i< iRead ; i++)
        {
            if(Buffer[i] == ' ')
            {
                iCount++;
            }
        }
    }
    return iCount;

}
int main()
{
    char FileName[30];
    int iRet = 0;
    
    printf("Enter file name that you want to open :\n");
    scanf("%s",FileName);

    iRet = CountWhite(FileName);

   printf("Number of white spaces are %d",iRet);

    return 0;
}