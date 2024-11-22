#include <stdio.h>

int main() {
    int num = 1234;
    int count = 0;

    while (num != 0) {
        num = num / 10; 
        count++;      
    }

    printf("The number has %d digits.\n", count);

    return 0;
}
