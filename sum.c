#include <stdio.h>

int main() {

    int arr[5];
    int i, j, target;

    printf("Enter 5 elements: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter Target: ");
    scanf("%d", &target);

    if (target != 0) {

        for (i = 0; i < 5; i++) {

            for (j = i + 1; j < 5; j++) {

                if (arr[i] + arr[j] == target) {
                    printf("Pair: %d, %d\n", arr[i], arr[j]);
                }
            }
        }

    } else {
        printf("Invalid input!");
    }

    return 0;
}