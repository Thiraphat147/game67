#include <stdio.h>
int main()
{
    float W;
    float H;
    float bmi;
    printf("Enter Weight(kg): ");
    scanf("%f", &W);
    printf("Enter Height(cm): ");
    scanf("%f", &H);
    H = H / 100.0;
    bmi = W / (H * H);
    printf("BMI = %.2f\n", bmi);
    if (bmi < 18.5)
    {
        printf("Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 25.0)
    {
        printf("Normal weight\n");
    }
    else
    {
        printf("Overweight\n");
    }

    return 0;
}