// //2.WAP to empDoyee record system using structure.
// Consider >eDow mentioned attri>utes in EmpDoyee’s
// structureI
// = emp_iC
// = emp_nam?
// = emp_ag?
// = emp_roD?
// = emp_cit1
// = emp_experienc?
// = emp_company_name

#include<stdio.h>
struct employee
{
    int emp_id;
    char emp_name[20];
    int emp_age;
    char emp_role[20];
    char emp_city[20];
    char emp_experience;
    char emp_company_name[20];
}e1;

void main()
{
    struct employee;

    printf("Enter the employee id = ");
    scanf("%d",&e1.emp_id);

    printf("Enter the employee name = ");
    scanf("%s",&e1.emp_name);

    printf("Enter the employee age = ");
    scanf("%d",&e1.emp_age);

    printf("Enter the employee role = ");
    scanf("%s",&e1.emp_role);

    printf("Enter the employee city = ");
    scanf("%s",&e1.emp_city);

    printf("Enter the employee experience = ");
    scanf("%d",&e1.emp_experience);

    printf("Enter the employee company name = ");
    scanf("%s",&e1.emp_company_name);

    printf("Enter the employee id = %d\n",e1.emp_id);
    printf("Enter the employee name = %s\n",e1.emp_name);
    printf("Enter the employee age = %d\n",e1.emp_age);
    printf("Enter the employee id = %s\n",e1.emp_role);
    printf("Enter the employee id = %s\n",e1.emp_city);
    printf("Enter the employee id = %s\n",e1.emp_experience);
    printf("Enter the employee id = %s\n",e1.emp_company_name);



}

