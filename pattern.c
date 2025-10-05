#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop for printing all rows
    for (int i = 0; i < rows; i++) {

        // First inner loop printing
        // leading white spaces
        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }

        // Second inner loop for 
        // printing alphabets
        for (int k = 0; k < 2 * (rows - i) - 1; k++) {
            printf("%c ", 'A' + k);
        }
        printf("\n");
    }
}
