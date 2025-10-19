#include <stdio.h>

int main(void)
{
    double weight_kg, height_m;
    
    printf("�п�J�魫�]����^�M�����]���ء^�A�H�ťթδ�����j�G");
    scanf("%lf %lf", &weight_kg, &height_m);

    if (height_m <= 0.0)
    {
        fprintf(stderr, "���~�G���������j�� 0\n");
        return 1;
    }

    double bmi = weight_kg / (height_m * height_m);
    printf("BMI = %.1f\n", bmi);

    if (bmi < 18.5)
        printf("�P�w�G�魫�L���]Underweight�A< 18.5�^\n");
    else if (bmi < 25.0)
        printf("�P�w�G���`�]Normal�G18.5 - 24.9�^\n");
    else if (bmi < 30.0)
        printf("�P�w�G�L���]Overweight�G25 - 29.9�^\n");
    else
        printf("�P�w�G�έD�]Obese�G>= 30�^\n");

    return 0;
}
