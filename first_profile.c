#include<stdio.h>
#include<stdlib.h>
void main ()
{int age=0,choice=0,salary=0;
 char company_name[20],y_n,school_name[30],hospital_name[30],youtube_channel_name[10],job_name[10],your_name[10];
 char buffer[1024];
//scanf("%[^\n]%*c",);
//printf("hello!");
//snprintf(buffer,6,"%s","Hello!");

sprintf(buffer,"Hello\n");
printf("%s",buffer);

//fprintf(stdin,"Hello");

//printf("what is your name?\n");
sprintf(buffer,"What is your name?\n");
printf("%s",buffer);

fgets(your_name,sizeof(your_name),stdin);
sscanf(your_name,"%s",your_name);

//scanf("%[^\n]%*c",your_name);

sprintf(buffer,"Hello,%s",your_name);
printf("%s",buffer);


//printf("\ntell me your age?\n");
sprintf(buffer,"\nTell me your age?\n");
printf("%s",buffer);


fgets(buffer,sizeof(buffer),stdin);
sscanf(buffer,"%d",&age);
//age=atoi(buffer);
//scanf("%d",&age);


//printf("your age is %d",age);
sprintf(buffer,"Your age is %d\n",age);
printf("%s",buffer);
if(age<21)
    {
        sprintf(buffer,"you are kid can't go ahead\n");
        printf("%s",buffer);

    }
else
    {// Rest type safing
        sprintf(buffer,"you are big kid you can continue\n\n");
        printf("%s",buffer);
        sprintf(buffer,"what work do you do?\n");
        printf("%s",buffer);
        sprintf(buffer," 1.engineer \n 2. doctor \n 3. teacher \n 4. youtuber \n 5. other\n");
        printf("%s",buffer);
        sprintf(buffer,"Enter you choice:");
        printf("%s",buffer);
        //memset(buffer,'\0',sizeof(buffer));
        //buffer[0]='\0';
        //fgets(buffer,3,stdin);
        fgets(buffer,3,stdin);
        sscanf(buffer,"%d",&choice);
        //printf("%s",buffer);
        //choice=atoi(buffer);
        //scanf("%d",&choice);
        //fflush(stdin); // don't use
        //scanf("%[^\n]%*c",company_name);
        //choice=1;
        if (choice==1)
            {
                sprintf(buffer,"In which company?\n");
                printf("%s",buffer);
                //printf("Debug , this is a debug message");
                //scanf("%s",&company_name);
                //printf("hello");
                //scanf("%*[^\n]%*c",company_name);
                fgets(company_name,sizeof(company_name),stdin);
                sprintf(buffer,"\nwhat is your salary?\n");
                printf("%s",buffer);

                fgets(buffer,sizeof(buffer),stdin);
                sscanf(buffer,"%d",&salary);
                //scanf("%d",&salary);
                sprintf(buffer,"\n do you want to continue with your company?\n");
                printf("%s",buffer);

                fgets(buffer,sizeof(buffer),stdin);
                sscanf(buffer,"%c",&y_n);
                //scanf("%c",&y_n);

                sprintf(buffer,"Your choice is %c",y_n);
                printf("%s",buffer);

            }
        if (choice==2)
            {
                printf("Debug, choice 2");
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

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int age2;
  char name[20];
  //char age[3];
 printf("%d",atoi(fgets(name,sizeof(name),stdin)));
printf("%s",name);
    return 0;
}
*/

