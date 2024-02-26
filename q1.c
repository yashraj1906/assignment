#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Print the largest element
    printf("The largest element in the array is: %d\n", max);

    return 0;
}
