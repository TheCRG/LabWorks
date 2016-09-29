#include <stdio.h>

int main(){
    char name[25];
    char surname[25];
    int roll;
    int marks;

    printf("Enter information of students:\n\n");
    printf("Enter name: ");
    scanf("%s", &name);

    printf("Enter surname: ");
    scanf("%s", &surname);

    printf("Enter roll number: ");
    scanf("%d",&roll);

    printf("Enter marks: ");
    scanf("%d",&marks);

    printf("\nDisplaying Information\n");
    printf("Name: %s\n",name);
    printf("Surname: %s\n", surname);
    printf("Roll: %d\n",roll);
    printf("Marks: %d\n",marks);

    return 0;
}
