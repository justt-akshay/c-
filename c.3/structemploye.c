#include<stdio.h>
#include<string.h>
struct employee
{
    int empNo;
    char empName[100];
    char address[100];
    int age;

};

int main()
{
    printf("Write a program of structure employee that provides the following information -print and display empno, empname, address and age\n");

    struct employee abhishek;
    abhishek.empNo=63;
    strcpy(abhishek.empName,"Abhishek Wagh");
    strcpy(abhishek.address,"B7 suncity row house kamrej char rasta");
    abhishek.age=25;

     printf("\nemployee no. is %d",abhishek.empNo);
     printf("\nemployee name is %s",abhishek.empName);
     printf("\nemployee address is %s",abhishek.address);
     printf("\nemployee age is %d",abhishek.age);

     printf("\n");

     struct employee raj={48,"Raj Rangunwala","Adajan Patiya",26};
     printf("\nemployee no. is %d",raj.empNo);
     printf("\nemployee name is %s",raj.empName);
     printf("\nemployee address is %s",raj.address);
     printf("\nemployee age is %d",raj.age);
     return 0;
}