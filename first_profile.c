#include<stdio.h>
void main ()
{int age ;
char name[10];
int choice;
scanf("%s",name);
printf("hello!");
printf("tell me your age?\n");
scanf("%d",&age);
printf("your age is %d\n",age);
printf("\n");
if(age<13)
    {
        printf("you are kid can't go ahead\n");
    }
else
    {
        printf("you are big kid you can continue\n\n");
    }
printf("what work do you do?\n");

printf(  "1. engineer \n 2. doctor \n 3. teacher \n 4. youtuber \n 5. other\n");
printf("Enter you choice:");
scanf("%d",&choice);
if (choice==1)
        {printf("In which company?\n");
        printf("what is your salary?\n");
        printf("do you want to continue with your company?/n");
        }
if (choice==2)
    {printf("In which company?\n");
    printf("what is your salary?\n");
    printf("do you want to continue with your company?\n");
    }

getch();
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



