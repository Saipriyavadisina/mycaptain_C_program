#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char name[30];
    int age;
    int phno;
    double salary;
} Employee;
int main()
{
    int n=2;
    Employee employees[n];
    printf("Enter %d Employee Details:\n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);
        printf("Age: ");
        scanf("%d",&employees[i].age);
        printf("Ph no: ");
        scanf("%d",&employees[i].phno);
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);
        char ch = getchar();
        printf("\n");
    }
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
        printf("Age \t: ");
        printf("%d \n",employees[i].age);
        printf("Ph no \t: ");
        printf("%d \n",employees[i].phno);
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);
        printf("\n");
    }
    return 0;
}
