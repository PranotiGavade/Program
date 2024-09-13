#include<stdio.h>
#include<stdbool.h>

bool DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))    //filter
    {
        return false;
    }
    if((fMarks <= 35.0f) && (fMarks >= 0.0f))
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    float fValue = 0.0f;
    bool bRet = false;

    printf("please enter percentage :\n");
    scanf("%d",&fValue);

    bRet = DisplayResult(fValue);

    if(bRet == true)
    {
        printf("Student is pass in the exam\n");
    }
    else
    {
        printf("Student is fail in the exam\n");
    }
    return 0;
}