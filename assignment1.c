/*
 * Program to count the number of 1's in the binary representation of a given number.
 * 
 * Shirin S
 * 02/10/2024
 */


#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while (num != 0) {
        if (num % 2 == 1) {            // Check if the least significant bit is 1
            count++;
        }
        num = num / 2;               // Divide the number by 2 to move to the next bit
    }

    printf("Number of 1's in the binary representation: %d\n", count);
    
    return 0;
}
