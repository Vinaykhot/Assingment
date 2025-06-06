#include<stdio.h>


void DisplaySchedule(char ch)
{
    if( ch == 'A' || ch == 'a')
    {
        printf("Your Exam at 7 AM\n");
    }
    else if( ch == 'B' || ch == 'b')
    {
        printf("Your Exam at 8:30 AM\n");
    }
    else if( ch == 'C' || ch == 'c')
    {
        printf("Your Exam at 9:20 AM\n");

    }
    else if( ch == 'D' || ch == 'd')
    {
        printf("Your Exam at 10:30 AM\n");
    }
}

int main()
{
    char cvalue = '\0';

    printf("Enter the Character: \n");
    scanf("%c",&cvalue);

    DisplaySchedule(cvalue);

    return 0;
}
