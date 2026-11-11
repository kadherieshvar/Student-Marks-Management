
#include <stdio.h>
#include <conio.h>

void main()
{
    int choice;
    int roll;
    int m1, m2, m3, m4, m5;
    int total;
    float average;
    char name[30];
    char grade;
    int pass;

    clrscr();

    do
    {
        printf("\n\nSTUDENT MARKS MANAGEMENT SYSTEM");
        printf("\n--------------------------------");
        printf("\n1. Enter Student Details");
        printf("\n2. Calculate Result");
        printf("\n3. Display Result");
        printf("\n4. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("\nEnter Roll Number: ");
                scanf("%d", &roll);

                printf("Enter Student Name: ");
                scanf("%s", name);

                printf("Enter Subject 1 Mark: ");
                scanf("%d", &m1);

                printf("Enter Subject 2 Mark: ");
                scanf("%d", &m2);

                printf("Enter Subject 3 Mark: ");
                scanf("%d", &m3);

                printf("Enter Subject 4 Mark: ");
                scanf("%d", &m4);

                printf("Enter Subject 5 Mark: ");
                scanf("%d", &m5);

                break;

            case 2:

                total = m1 + m2 + m3 + m4 + m5;

                average = total / 5.0;

                pass = 1;

                if(m1 < 35 || m2 < 35 || m3 < 35 ||
                   m4 < 35 || m5 < 35)
                {
                    pass = 0;
                }

                if(pass == 0)
                {
                    grade = 'F';
                }
                else if(average >= 90)
                {
                    grade = 'A';
                }
                else if(average >= 80)
                {
                    grade = 'B';
                }
                else if(average >= 70)
                {
                    grade = 'C';
                }
                else if(average >= 60)
                {
                    grade = 'D';
                }
                else
                {
                    grade = 'F';
                }

                printf("\nResult Calculated Successfully!");

                break;

            case 3:

                printf("\n\nSTUDENT RESULT");
                printf("\n----------------------");

                printf("\nRoll Number : %d", roll);
                printf("\nName        : %s", name);
                printf("\nTotal       : %d", total);
                printf("\nAverage     : %.2f", average);
                printf("\nGrade       : %c", grade);

                if(pass == 1)
                    printf("\nResult      : PASS");
                else
                    printf("\nResult      : FAIL");

                break;

            case 4:

                printf("\nExiting Program...");
                break;

            default:

                printf("\nInvalid Choice!");

        }

    } while(choice != 4);

    getch();
}
