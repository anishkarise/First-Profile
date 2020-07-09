#include<stdio.h>
#include<stdlib.h>
void main ()
{int age=0,choice=0,salary=0,gender=0;
 char company_name[20],y_n,school_name[30],hospital_name[30],youtube_channel_name[20],job_name[20],your_name[20];
 char buffer[1024];



sprintf(buffer,"Hello\n");
printf("%s",buffer);


sprintf(buffer,"What is your name?\n");
printf("%s",buffer);

fgets(your_name,sizeof(your_name),stdin);
sscanf(your_name,"%s",your_name);


sprintf(buffer,"Hello,%s",your_name);
printf("%s",buffer);


sprintf(buffer,"\nTell me your age?\n");
printf("%s",buffer);


fgets(buffer,sizeof(buffer),stdin);
sscanf(buffer,"%d",&age);

sprintf(buffer,"Your age is %d\n",age);
printf("%s",buffer);
if(age<21)
    {
        sprintf(buffer,"you are kid can't go ahead\n");
        printf("%s",buffer);

    }
else
    {
        sprintf(buffer,"you are big kid you can continue\n\n");
        printf("%s",buffer);
        sprintf(buffer,"what work do you do?\n");
        printf("%s",buffer);
        sprintf(buffer," 1.engineer \n 2. doctor \n 3. teacher \n 4. youtuber \n 5. other\n");
        printf("%s",buffer);
        sprintf(buffer,"Enter you choice:");
        printf("%s",buffer);
        fgets(buffer,3,stdin);
        sscanf(buffer,"%d",&choice);

        if (choice==1)
            {
                sprintf(buffer,"In which company?\n");
                printf("%s",buffer);

                fgets(company_name,sizeof(company_name),stdin);
                sscanf(company_name,"%s",company_name);

                sprintf(buffer,"\nwhat is your salary?\n");
                printf("%s",buffer);

                fgets(buffer,sizeof(buffer),stdin);
                sscanf(buffer,"%d",&salary);

                sprintf(buffer,"\n do you want to continue with your company?\n");
                printf("%s",buffer);

                fgets(buffer,sizeof(buffer),stdin);
                sscanf(buffer,"%c",&y_n);

                sprintf(buffer,"Your choice is %c",y_n);
                printf("%s",buffer);

            }
        if (choice==2)
            {
                sprintf(buffer,"in which hospital?\n");
                printf("%s",buffer);

                fgets(hospital_name,sizeof(hospital_name),stdin);
                sscanf(hospital_name,"%s",hospital_name);

                sprintf(buffer,"\nwhat is your salary?\n");
                printf("%s",buffer);

                fgets(buffer,sizeof(buffer),stdin);
                sscanf(buffer,"%d",&salary);

                sprintf(buffer,"\n do you want to continue with your hospital?");
                printf("%s",buffer);

                fgets(buffer,sizeof(buffer),stdin);
                sscanf(buffer,"%c",&y_n);

                sprintf(buffer,"your choice is %c",y_n);
                printf("%s",buffer);

            }
        if (choice==3)
            {
                sprintf(buffer,"In which school?\n");
                printf("%s",buffer);

                fgets(school_name,sizeof(school_name),stdin);
                sscanf(school_name,"%s",school_name);

                sprintf(buffer,"\nwhat is your salary?\n");
                printf("%S",buffer);

                fgets(buffer,sizeof(buffer),stdin);
                sscanf(buffer,"%d",salary);

                sprintf(buffer,"\n do you want to continue with your school?");
                printf("%s",buffer);

                fgets(buffer,sizeof(buffer),stdin);
                sscanf(buffer,"%c",&y_n);

                sprintf(buffer,"your choice is %c",y_n);
                printf("%s",buffer);
            }
        if (choice==4)
           {
                sprintf(buffer,"what is the name of your channel?\n");
                printf("%S",buffer);

                fgets(youtube_channel_name,sizeof(youtube_channel_name),stdin);
                sscanf(youtube_channel_name,"%s",youtube_channel_name);

                sprintf(buffer,"\nwhat is your income?\n");
                printf("%s",buffer);

                fgets(buffer,sizeof(buffer),stdin);
                sscanf(buffer,"%d",salary);

                sprintf(buffer,"\n do you want to continue with your you tube careerer?\n");
                sscanf(buffer,"%c",&y_n);

                sprintf(buffer,"your choice is %c",y_n);
                sprintf("%s",buffer);

           }

         if ( choice == 5)
         {
             //printf("Debug, checking ");
             sprintf(buffer,"\n1.men \n2.women");
             printf("%s",buffer);
             sprintf(buffer,"\nEnter you choice\n");
             printf("%s",buffer);
             fgets(buffer,3,stdin);
             sscanf(buffer,"%d",&choice);

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

