#include<stdio.h>
void main ()
{int age,choice,salary,school;
char company_name[20],y_n,school_name[30],hospital_name,youtube_channel_name,what_job_name;
//scanf("%[^\n]%*c");
printf("hello!");
printf("tell me your age?\n");
scanf("%d",&age);
printf("your age is %d\n",age);
printf("\n");
if(age<21)
    {
        printf("you are kid can't go ahead\n");
        getch();
    }
else
    {
        printf("you are big kid you can continue\n\n");
        printf("what work do you do?\n");
        printf("1. engineer \n 2. doctor \n 3. teacher \n 4. youtuber \n 5. other\n");
        printf("Enter you choice:");
        scanf("%d",&choice);
        if (choice==1)
            {
                printf("In which company?\n");
                scanf("%s",company_name);
                printf("\nwhat is your salary?\n");
                scanf("%d",&salary);
                printf("\n do you want to continue with your company?\n");
                scanf("%c",&y_n);
            }
        if (choice==2)
            {
                printf("In which company?\n");
                scanf("%s",company_name);
                printf("what is your salary?\n");
                scanf("%d",&salary);
                printf("do you want to continue with your company?\n");
                scanf("%c",&y_n);
            }
        if (choice==3)
            {
                printf("In which School?\n");
                scanf("%s",school_name);
                printf("what is your salary?\n");

                printf("do you want to continue with your School?\n");
            }
    }


}
/*
hello
hello
what is your age
13
you age is 13

int choice;
Tell me your profession
1. teacher
2. doctor
3. dentist
4. mochi

Enter your choice : 3

If(choice==3)
{

}


*/



