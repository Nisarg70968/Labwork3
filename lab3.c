#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Addition
    int Add = a + b;
    printf("Add: %d\n", Add);

    // Subtraction
    int Sub = a - b;
    printf("Sub: %d\n", Sub);

    // Multiplication
    int Mul = a * b;
    printf("Mul: %d\n", Mul);

    // Division
    float Div = (float)a / b;
    printf("Div: %f\n", Div);

    // Modulus (Remainder)
    int Mod = a % b;
    printf("Mod: %d\n", Mod);

    return 0;
}

/*
Output:

Enter two numbers: 34 , 7
Add: 41
Sub: 27
Mul: 238
Div: 4.857143
Mod: 6

*/