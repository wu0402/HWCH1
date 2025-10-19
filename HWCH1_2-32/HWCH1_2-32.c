#include <stdio.h>

int main(void)
{
    double weight_kg, height_m;
    
    printf("請輸入體重（公斤）和身高（公尺），以空白或換行分隔：");
    scanf("%lf %lf", &weight_kg, &height_m);

    if (height_m <= 0.0)
    {
        fprintf(stderr, "錯誤：身高必須大於 0\n");
        return 1;
    }

    double bmi = weight_kg / (height_m * height_m);
    printf("BMI = %.1f\n", bmi);

    if (bmi < 18.5)
        printf("判定：體重過輕（Underweight，< 18.5）\n");
    else if (bmi < 25.0)
        printf("判定：正常（Normal：18.5 - 24.9）\n");
    else if (bmi < 30.0)
        printf("判定：過重（Overweight：25 - 29.9）\n");
    else
        printf("判定：肥胖（Obese：>= 30）\n");

    return 0;
}
