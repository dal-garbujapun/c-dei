#include <stdio.h>

int square(int number); // function prototype

int main(void) {

    for (size_t i = 1; i <= 10; i++)
    {
        printf("%d ", square(i) );
    }

    puts("");

    return 0;
}

int square(int number) {
    return number * number;
}