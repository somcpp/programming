#include <stdio.h>

// Recursive function to count the occurrence of each digit
void countDigits(int num, int* count) {

}

int main() {
    int num;
    int count[10] = {0}; // Initialize count array with zeros
    scanf("%d", &num);
    countDigits(num, count);
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) { // Check if the digit is present
            printf("Digit %d: %d\n", i, count[i]);
        }
    }
    return 0;
}