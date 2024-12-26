#include <stdio.h>

int main() {
    char name[50];
    float hoursWorked, hourlyWage, totalPay;

    // Input employee details
   
    scanf("%s", name);
    
    scanf("%f", &hoursWorked);
  
    scanf("%f", &hourlyWage);

    // Calculate total pay
    totalPay = hoursWorked * hourlyWage;

    // Display the result
    printf("Employee Name: %s\n", name);
    printf("Total Pay: %.2f\n", totalPay);

    return 0;
}