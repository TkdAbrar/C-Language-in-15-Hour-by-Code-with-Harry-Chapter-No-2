#include <stdio.h>
#include <math.h>
// Arithmetic Instructions
int main()
{
    int a = 4;
    int b = 8;
    printf("The value of a + b is: %d\n", a + b);
    printf("The value of a - b is: %d\n", a - b);
    printf("The value of a * b is: %d\n", a * b);
    printf("The value of a / b is: %d\n", a / b);

    int z;
    z = b ^ a; // Legal
    //  b ^a = z; // illegal
    printf("The value of z is: %d\n", z);

    printf("5 When divided by 2 leaves a remainder of %d\n", 5 % 2);
    printf("-5 When divided by 2 leaves a remainder of %d\n", -5 % 2);
    printf("5 When divided by -2 leaves a remainder of %d\n", 5 % -2);

    // no operator to be present
    // printf("The value of 4 * 5 is %d\n", (4)(5)); --> Will Not return 20 wrong !!
    printf("The value of 4 * 5 is %d\n", (4) * (5));

    // There is no aperator to perform exponentiation in C
    printf("The value of 4 ^ 5 is %d\n", 4 ^ 5);               // ==> Will not Produce 4 to the power 5
    printf("The value of 4 to the power5 is %f\n", pow(2, 5)); // Pow will return the double the value

    // Arithmetic operations between
    // int and int ++> int || int and float ==> float || float and float ==> float
    printf("The value of 6 + 5 is %d\n", 6 + 5);
    printf("The value of 6 + 5.6 is %f\n", 6.1 + 5.6);
    printf("The value of 6.1 + 5.6 is %f\n", 6.1 + 5.6);
    printf("The value of 5/2 is %d\n", 5 / 2);
    printf("The value of 3.0/9 is %f\n", 3.0 / 9);

    return 0;
}