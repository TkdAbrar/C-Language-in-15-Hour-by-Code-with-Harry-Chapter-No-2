#include <stdio.h>
// Operator Precedence

int main()
{
    int x = 2;
    int y = 3;
    printf("The value of 3*x - 8*y is %d\n", 3 * x - 8 * y);
    printf("The value of 8*y / 3*x is %d\n", 8 * y / 3 * x);
    // 8*y / 3*x = 24 / 6 Will give wrong answar
    // 24 / 3*2
    // 8*2
    // 16
    return 0;
}