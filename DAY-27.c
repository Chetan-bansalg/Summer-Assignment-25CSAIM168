#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int choice;

    printf("Choose a program to run:\n");
    printf("105. Student Record Management System\n");
    printf("106. Employee Management System\n");
    printf("107. Salary Management System\n");
    printf("108. Marksheet Generation System\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        // 105. Student Record Management System
        case 105: {
            struct Student s[10];
            int n, i;

            printf("Enter number of students: ");
            scanf("%d", &n);

            for(i = 0; i < n; i++) {
                printf("\nEnter details of student %d:\n", i + 1);

                printf("Roll Number: ");
                scanf("%d", &s[i].roll);

                printf("Name: ");
                scanf(" %[^\n]", s[i].name);

                printf("Marks: ");
                scanf("%f", &s[i].marks);
            }

            printf("\nStudent Records:\n");
            printf("Roll\tName\t\tMarks\n");

            for(i = 0; i < n; i++) {
                printf("%d\t%s\t\t%.2f\n",
                       s[i].roll,
                       s[i].name,
                       s[i].marks);
            }
            break;
        }

        // 106. Employee Management System
        case 106: {
            struct Employee e[10];
            int n, i;

            printf("Enter number of employees: ");
            scanf("%d", &n);

            for(i = 0; i < n; i++) {
                printf("\nEnter details of employee %d:\n", i + 1);

                printf("Employee ID: ");
                scanf("%d", &e[i].id);

                printf("Name: ");
                scanf(" %[^\n]", e[i].name);

                printf("Salary: ");
                scanf("%f", &e[i].salary);
            }

            printf("\nEmployee Records:\n");
            printf("ID\tName\t\tSalary\n");

            for(i = 0; i < n; i++) {
                printf("%d\t%s\t\t%.2f\n",
                       e[i].id,
                       e[i].name,
                       e[i].salary);
            }
            break;
        }

        // 107. Salary Management System
        case 107: {
            float basic, hra, da, gross;

            printf("Enter Basic Salary: ");
            scanf("%f", &basic);

            hra = basic * 0.20;
            da = basic * 0.10;
            gross = basic + hra + da;

            printf("\nSalary Details:\n");
            printf("Basic Salary : %.2f\n", basic);
            printf("HRA (20%%)    : %.2f\n", hra);
            printf("DA (10%%)     : %.2f\n", da);
            printf("Gross Salary : %.2f\n", gross);

            break;
        }

        // 108. Marksheet Generation System
        case 108: {
            char name[50];
            float m1, m2, m3, m4, m5;
            float total, percentage;
            char grade;

            printf("Enter Student Name: ");
            scanf(" %[^\n]", name);

            printf("Enter marks of 5 subjects:\n");
            scanf("%f %f %f %f %f",
                  &m1, &m2, &m3, &m4, &m5);

            total = m1 + m2 + m3 + m4 + m5;
            percentage = total / 5;

            if(percentage >= 90)
                grade = 'A';
            else if(percentage >= 75)
                grade = 'B';
            else if(percentage >= 60)
                grade = 'C';
            else if(percentage >= 40)
                grade = 'D';
            else
                grade = 'F';

            printf("\n========== MARKSHEET ==========\n");
            printf("Student Name : %s\n", name);
            printf("Total Marks  : %.2f / 500\n", total);
            printf("Percentage   : %.2f%%\n", percentage);
            printf("Grade        : %c\n", grade);

            if(grade == 'F')
                printf("Result       : Fail\n");
            else
                printf("Result       : Pass\n");

            break;
        }

        default:
            printf("Invalid choice! Please select between 105 and 108.\n");
    }

    return 0;
}