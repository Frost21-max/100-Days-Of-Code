#include <stdio.h>

int main() {
    int n, i, arr[100];
    int max1, max2;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = -999999;

    for(i = 0; i < n; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("Second largest element = %d", max2);
    printf("\n");
    return 0;
}

