#include <stdio.h>

int main(void)
{
    double km_per_day, cost_per_liter, km_per_liter;
    double parking_fees, tolls;
    

    printf("�п�J�C���p�`���{�]�����^�G");
    scanf("%lf", &km_per_day);

    printf("�п�J�C���ɪo���G");
    scanf("%lf", &cost_per_liter);

    printf("�п�J�����C���ɥi��p�����ơ]km/L�^�G");
    scanf("%lf", &km_per_liter);

    printf("�п�J�C�鰱���O�G");
    scanf("%lf", &parking_fees);

    printf("�п�J�C��L���O�G");
    scanf("%lf", &tolls);
    double liters_needed = km_per_day / km_per_liter;
    double fuel_cost = liters_needed * cost_per_liter;
    double total_cost = fuel_cost + parking_fees + tolls;

    printf("\n�C��o�ӡ]���ɡ^�G%.2f L\n", liters_needed);
    printf("�C��U�Ʀ����G%.2f\n", fuel_cost);
    printf("�C�鰱���P�L���O�G%.2f\n", parking_fees + tolls);
    printf("�C���`�����]�t�U�ơB�����P�L���O�^�G%.2f\n", total_cost);

    return 0;
}

