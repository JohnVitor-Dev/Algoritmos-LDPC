#include <stdio.h>

int main() {

    float F = 0;
    float C = 0;
    int limite = 10;
    
  

    for (int i = 1; i <= 10; i++) {
        
        C += 10;
        
        F = (C * 1.8) + 32;
        
        printf("Celsius = %.2f / Fahrenheit = %.2f \n", C, F);
        
    }

    return 0;
}
