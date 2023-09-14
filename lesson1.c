#include <stdio.h>

int main() {
    float profit, commission;

    printf("please enter the profit:");
    scanf("%f", &profit);

    if (profit <= 10000) { commission = profit * 0.05; }
    else if (profit >= 10000 && profit <= 20000) { commission = profit * 0.5; }
    else { commission = profit * 0.15; }

    printf("The commission will be :%.2f\n", commission);
    return 0;
}
