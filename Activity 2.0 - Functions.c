#include <stdio.h>
float average(float sum);

int main ()
{
    float grade[5], sum, ave;
    int i;

    printf("Enter grades: \n");
    for (i=0; i<5; i++)
    {
        scanf("%f", &grade[i]);
        sum += grade[i];
    }

    ave = average(sum);

    printf("Average grade: %f", ave);

    return 0;
}

float average(float sum)
{
    float average;
    average = sum/5;
    return average;
}
