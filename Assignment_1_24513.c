//Q:finds the missing number from an array.
#include <stdio.h>

int main() {
    int n, missing = -1;

    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements:\n", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i <= n; i++) {
        int found = 0;
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] == i) {
                found = 1;
                break;
            }
        }
        if (!found) {
            missing = i;
            break;
        }
    }

    printf("Missing Number = %d\n", missing);

    return 0;
}
