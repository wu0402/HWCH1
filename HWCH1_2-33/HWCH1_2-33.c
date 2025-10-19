#include <stdio.h>

int main(void)
{
    double km_per_day, cost_per_liter, km_per_liter;
    double parking_fees, tolls;
    

    printf("請輸入每日行駛總里程（公里）：");
    scanf("%lf", &km_per_day);

    printf("請輸入每公升油價：");
    scanf("%lf", &cost_per_liter);

    printf("請輸入平均每公升可行駛公里數（km/L）：");
    scanf("%lf", &km_per_liter);

    printf("請輸入每日停車費：");
    scanf("%lf", &parking_fees);

    printf("請輸入每日過路費：");
    scanf("%lf", &tolls);
    double liters_needed = km_per_day / km_per_liter;
    double fuel_cost = liters_needed * cost_per_liter;
    double total_cost = fuel_cost + parking_fees + tolls;

    printf("\n每日油耗（公升）：%.2f L\n", liters_needed);
    printf("每日燃料成本：%.2f\n", fuel_cost);
    printf("每日停車與過路費：%.2f\n", parking_fees + tolls);
    printf("每日總成本（含燃料、停車與過路費）：%.2f\n", total_cost);

    return 0;
}

