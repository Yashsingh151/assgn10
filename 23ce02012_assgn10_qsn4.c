#include <stdio.h>

union Data {
    int i[5];
    float f[5];
    char c[5];
};

int main() {
    union Data data;

    printf("Enter the value for integer array: \n");
    for (int j = 0; j < 5; j++) {
        scanf("%d", &data.i[j]);
    }

    printf("Integer Array: ");
    for (int j = 0; j < 5; j++) {
        printf("%d ", data.i[j]);
    }

    printf("\n\n");

    printf("Enter the value for float array: \n");
    for (int k = 0; k < 5; k++) {
        scanf("%f", &data.f[k]);
    }

    printf("Float Array: ");
    for (int k = 0; k < 5; k++) {
        printf("%.2f ", data.f[k]);
    }

    printf("\n\n");

    printf("Enter the value for character array: \n");
    for (int l = 0; l < 5; l++) {
        scanf(" %c", &data.c[l]);
    }

    printf("Character Array: ");
    for (int l = 0; l < 5; l++) {
        printf("%c ", data.c[l]);
    }

    return 0;
}