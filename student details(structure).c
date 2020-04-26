#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    struct student
    {
        char name[20];
        int rollno;
        char section[5];
        char department[20];
        float fees;
        float totalmarks;
    }s[2];

    for(i=0;i<2;i++)
    {
        printf("ENTER THE DETAILS OF STUDENT %d\n\n ",i+1);
        printf("NAME OF STUDENT:\n");
        scanf("%s",s[i].name);
        printf("ROLL NO: \n");
        scanf("%d",&s[i].rollno);
        printf("SECTION:\n");
        scanf("%s",s[i].section);
        printf("DEPARTMENT:\n");
        scanf("%s",s[i].department);
        printf("FEES:\n");
        scanf("%f",&s[i].fees);
        printf("TOTAL MARKS OBTAINED:\n");
        scanf("%f",&s[i].totalmarks);
    }
    if(s[0].totalmarks>s[1].totalmarks)
    {
        printf("STUDENT %d details as follows \n",1);
        printf("NAME: %s \n",s[0].name);
        printf("ROLL NO: %d \n",s[0].rollno);
        printf("SECTION : %s \n",s[0].section);
        printf("DEPARTMENT : %s\n ",s[0].department);
        printf("FEES: %f \n",s[0].fees);
        printf("TOTAL MARKS OBTAINED: %f \n",s[0].totalmarks);

    }
    else
    {

        printf("STUDENT %d details as follows \n",2);
        printf("NAME: %s \n",s[1].name);
        printf("ROLL NO: %d \n",s[1].rollno);
        printf("SECTION : %s \n",s[1].section);
        printf("DEPARTMENT : %s \n",s[1].department);
        printf("FEES: %f \n",s[1].fees);
        printf("TOTAL MARKS OBTAINED: %f \n",s[1].totalmarks);
    }

}
