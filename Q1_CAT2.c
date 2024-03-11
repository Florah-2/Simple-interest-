//CALCULATING ELECTRICITY BILL
#include <stdio.h>

int main() {
      int customer_id, unit_consumed;
    char customer_name[50];
    float charges_per_unit, total_amount, surcharge = 0;

    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter Customer Name: ");
    scanf("%s", customer_name);
    printf("Enter Unit Consumed: ");
    scanf("%d", &unit_consumed);

    if (unit_consumed <= 300) {
        charges_per_unit = 175;
    } else if (unit_consumed > 300 && unit_consumed < 600) {
        charges_per_unit = 200;
    } else if (unit_consumed >= 600 && unit_consumed < 800) {
        charges_per_unit = 300;
    } else {
        charges_per_unit = 400;
    }

    total_amount = unit_consumed * charges_per_unit;

    if (total_amount > 500) {
        surcharge = 0.2 * total_amount;
    }

    total_amount += surcharge;

   if (total_amount < 200) {
        total_amount = 200;
    }

    printf("\nCustomer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %d\n", unit_consumed);
    printf("Charges per Unit: %.2f Ksh\n", charges_per_unit);
    printf("Total Amount to Pay: %.2f Ksh\n", total_amount);

    return 0;
}