/*
    0 to 35     Fail                            (35 is exclusive)
    35 to 50    Pass class                      (50 is exclusive)
    50 to 60    Second class                    (60 is exclusive)
    60 to 75    First class                     (75 is exclusive)
    75 to 100   First class with distinction    (100 is inclusive)
*/

#include<stdio.h>

#define RET_INVALID -1

#define RET_FAIL 1
#define RET_PASSCLASS 2
#define RET_SECONDCLASS 3
#define RET_FIRSTCLASS 4
#define RET_DISTINCTION 5

int DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))
    {
        return RET_INVALID;
    }
    else if((fMarks >= 0.0f) &&(fMarks < 35.0))
    {
        return RET_FAIL;
    }
    else if((fMarks >= 35.0f) && (fMarks < 50.0f))
    {   
        return RET_PASSCLASS;
    }
    else if((fMarks >= 50.0f) && (fMarks < 60.0f)) 
    {
        return RET_SECONDCLASS;
    }
    else if((fMarks >= 60.0f)  &&(fMarks < 75.0f))
    {
        return RET_FIRSTCLASS;
    }
    else if((fMarks >= 75.0f) && (fMarks <= 100.0f))
    {
        return RET_DISTINCTION;
    }
}
int main()
{
    float fValue = 0.0f;
    int iRet = 0;

    printf("Enter percentage :\n");
    scanf("%f",&fValue);

    iRet = DisplayResult(fValue);

    if(iRet == RET_INVALID)
    {
        printf("Invalid imput\n");
    }
    else if(iRet == RET_FAIL)
    {
        printf("Student is FAIL\n");
    }
    else if(iRet == RET_PASSCLASS)
    {
        printf("Student is having PASS class\n");
    }
    else if(iRet == RET_SECONDCLASS)
    {
        printf("Student is havimg SECOND clss\n");
    }
    else if(iRet == RET_FIRSTCLASS)
    {
        printf("Student is having FIRST class\n");
    }
    else if(iRet == RET_DISTINCTION)
    {
        printf("Student is having first class with DISTINCTION\n");
    }
    return 0;
}