#include <stdio.h>

int main() {
    int result1 = sum_them_all(4, 1, 2, 3, 4);
    int result2 = sum_them_all(0); // Should return 0

    printf("Result 1: %d\n", result1); // Should print "Result 1: 10"
    printf("Result 2: %d\n", result2); // Should print "Result 2: 0"

    return 0;
}
