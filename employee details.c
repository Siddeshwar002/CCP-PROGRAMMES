#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct employee{
    char ename[15];
    int eno;
    int esal;
    char gender[10];

    };

    struct employee E1;
    printf("enter the employee name\n");
    scanf("%s",E1.ename);
    printf("enter employee number\n");
    scanf("%d",&E1.eno);
    printf("enter employee salary\n");
    scanf("%d",&E1.esal);
    printf("enter employee gender\n");
    scanf("%s",E1.gender);

    printf("EMPLOYEE details are :\n");
    printf("EMP NAME   = %s\n",E1.ename);
    printf("EMP NO     = %d\n",E1.eno);
    printf("EMP SALARY = %d\n",E1.esal);
    printf("EMP GENDER = %s\n",E1.gender);

}

