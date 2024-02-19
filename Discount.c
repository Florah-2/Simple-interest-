//Checking discount eligibility 
#include <stdio.h>
int main()
{
  int purchase;
  float discount;
    printf("Enter purchase:\n");
    scanf("%d", &purchase);
    if(purchase>=1000){
        discount=0.05 * purchase;
      printf("You are eligible for a discount of %.2f\n", discount);
    }
    else{
      printf("Sorry,You are not eligible for a discount\n");
    }
    return 0;
}