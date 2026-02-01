#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int sum = 0, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    max = arr[0];
    min = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", (float)sum / n);
    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);

    return 0;
}
