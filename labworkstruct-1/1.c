// //1.WAP to student record system using structure.
// Consider >eDow mentioned attri>utes in Student’s
// structureI
// = stu_iC
// = stu_nam?
// = stu_ag?
// = stu_cours?
// = stu_cit1
// = stu_stC
// = stu_schooD

#include<stdio.h>
struct student
{
    int stu_id;
    char stu_name[20];
    int stu_age;
    char stu_course[20];
    char stu_city[20];
    int stu_std;
    char stu_school[20];
}s1;

void main()
{
    struct student;

    printf("Enter the student id = ");
    scanf("%d",&s1.stu_id);

    printf("Enter the student name = ");
    scanf("%s",&s1.stu_name);

    printf("Enter the student age = ");
    scanf("%d",&s1.stu_age);

    printf("Enter the student course = ");
    scanf("%s",&s1.stu_course);

    printf("Enter the student city = ");
    scanf("%s",&s1.stu_city);

    printf("Enter the student std = ");
    scanf("%d",&s1.stu_std);

    printf("Enter the student school = ");
    scanf("%s",&s1.stu_school);

    printf("Enter the student id = %d\n",s1.stu_id);
    printf("Enter the student name = %s\n",s1.stu_name);
    printf("Enter the student id = %d\n",s1.stu_age);
    printf("Enter the student id = %s\n",s1.stu_course);
    printf("Enter the student id = %s\n",s1.stu_city);
    printf("Enter the student id = %d\n",s1.stu_std);
    printf("Enter the student id = %s\n",s1.stu_school);



}

