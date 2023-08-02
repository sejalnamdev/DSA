#include <stdio.h>
struct student
{
    char firstName[50];
    int roll;
    float marks;
}
s[2];

int main(){
    int i ;
    printf("Enter information of student: \n");
    for(i=0;i<2;i++){
        s[i].roll=i+1;
        printf("\nRoll number: %d\n",s[i].roll);
        printf("Enter name: ");
        scanf("%s",&s[i].firstName);
        printf("Enter marks : ");
        scanf("%f",&s[i].marks);
    }
    for(i=0;i<2;i++){
        printf("\nRoll number: %d\n",s[i].roll);
        printf("Name of student %d: %s\n",s[i].roll,s[i].firstName);
        printf("Marks of student %d: %f",s[i].roll,s[i].marks);
    }
    return 0;
}