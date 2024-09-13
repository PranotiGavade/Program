#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char FileName[40];
    int fd = 0;

    printf("Enter name of file that you want to create :\n");
    scanf("%s",FileName);

    fd = creat(FileName,0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets created succesfully with fd %d\n",fd);
    }
    return 0;
}