#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    int roll_no;
    int standard;
};

union employee
{
    char name[100];
    int empNo;
    int salary;
};

int main()
{
    struct student abhishek={"abhishek",63,12};

    //union employee raj={"raj",100,15000}; 

    //we cant write this because in union we can only access one variable at time while other remains switch off
    //union allocate same space for every data members so while one is active other remains inactive.

    union employee raj;

    strcpy(raj.name,"RAJ R");
    raj.empNo=1001;
    raj.salary=10000;

    /*structure allows all members to be accessed simultaneously,while union allow only one member to be active at any given time*/

    return 0;

}
