#include<stdio.h>
int main()
{
    int grade;
    printf("Enter your in grade: ");
    scanf("%d", &grade);
    if (grade > 100) {
        printf("Invalid input! Grade must be lower than 100.\n");
    } else if (grade >= 92 && grade <= 100) {
        printf("Your letter grade is A.\n");
    } else if (grade >= 84 && grade <= 91) {
        printf("Your letter grade is A-.\n");
    } else if (grade >= 76 && grade <= 83) {
        printf("Your letter grade is B.\n");
    } else if (grade >= 68 && grade <= 75) {
        printf("Your letter grade is B-.\n");
    } else if (grade >= 60 && grade <= 67) {
        printf("Your letter grade is C.\n");
    } else if (grade >= 50 && grade <= 59) {
        printf("Your letter grade is D.\n");
    } else if (grade < 50) {
        printf("Your letter grade is F.\n");
    } else {
        printf("Invalid input! Grade must be greater than 0.\n");
    }
    getchar();
    return 0;
}
