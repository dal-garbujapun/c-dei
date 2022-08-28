#include <stdio.h>
#include <stdint.h>

int maximum(int x, int y, int z);
int main(void)
{
    uint8_t num1 = 0;
    uint8_t num2 = 0;
    uint8_t num3 = 0;

    printf("%s", "Enter three integers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("Maxium is: %d\n", maximum(num1, num2, num3));
    return 0;
}

int maximum(int x, int y, int z) {
    //assume x is largest
    int max = x;

    if(y > max) max = y;

    if(z > max) max = z;

    return max;
}
