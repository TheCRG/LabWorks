#include <stdio.h>

int main(){
    char name[25];
    int roll;
    int marks;

    printf("Enter information of students:\n\n");
    printf("Enter name: ");
    scanf("%s", &name);

    printf("Enter roll number: ");
    scanf("%d",&roll);

    printf("Enter marks: ");
    scanf("%d",&marks);

    printf("\nDisplaying Information\n");
    printf("Name: %s\n",name);
    printf("Roll: %d\n",roll);
    printf("Marks: %d\n",marks);

    return 0;
}
