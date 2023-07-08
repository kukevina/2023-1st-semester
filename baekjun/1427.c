#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int compare(const void* x, const void* y) { 
    return *(int*)y - *(int*)x;
}

int digit_count(int x) {
    if (x == 0) {
        return 1;  // Special case for zero
    }
    return floor(log10(fabs(x))) + 1;
}

int main() {
    int* arr = NULL;
    char* string = NULL;
    int num, digits;
    scanf("%d", &num);
    digits = digit_count(num);
    arr = (int*)calloc(digits, sizeof(int));
    string = (char*)calloc(digits + 1, sizeof(char));  // Increase buffer size to accommodate null terminator

    if (arr == NULL || string == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        exit(1);
    }

    snprintf(string, digits + 1, "%d", num);

    for (int i = 0; i < digits; i++) {
        arr[i] = string[i] - '0';
    }

    qsort(arr, digits, sizeof(int), compare);

    for (int i = 0; i < digits; i++) {
        printf("%d", arr[i]);
    }

    free(arr);
    free(string);

    return 0;
}
