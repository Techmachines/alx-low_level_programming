#include <stdio.h>

int main() {
    double num1, num2, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);  
 
    // Calculating product
    product = num1 * num2;

    // %.2lf displays number up to 2 decimal point
    printf("Product = %.2lf", product);
    
    return 0;
}
