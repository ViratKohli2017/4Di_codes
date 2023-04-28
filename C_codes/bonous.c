#include <stdio.h>

int main() {
    float salary, bonus;
    int years_of_service;
    
    printf("Enter your salary: ");
    scanf("%f", &salary);
    
    printf("Enter your years of service: ");
    scanf("%d", &years_of_service);
    
    if (years_of_service > 5) {
        bonus = 0.05 * salary;
        printf("Your bonus is: %.2f\n", bonus);
    } else {
        printf("Sorry, you are not eligible for the bonus.\n");
    }
    
    return 0;
}
