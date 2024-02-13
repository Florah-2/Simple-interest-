//bonus calculation
#include <stdio.h>

int main() {
    double salary, bonus;
    int years_of_service;

      printf("Enter your salary: ");
    scanf("%lf", &salary);

    printf("Enter your years of service: ");
    scanf("%d", &years_of_service);

   
    if (years_of_service > 5) {
              bonus = 0.05 * salary;
        printf("You are eligible for a bonus.\n");
        printf("Your bonus amount is: %.2lf\n", bonus);
    } else {
        printf("you are not eligible for a bonus.\n");
    }

    return 0;
}