#include<stdio.h>
void main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // Bubble Sort
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nMinimum: %d\n", arr[0]);
    printf("Maximum: %d\n", arr[n-1]);
    printf("Second Minimum: %d\n", arr[1]);
    printf("Second Maximum: %d\n", arr[n-2]);
}
