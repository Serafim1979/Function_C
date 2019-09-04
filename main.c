#include <stdio.h>
#include <stdlib.h>
#include"function.h"
#define SIZE 5
int main()
{
    printf("\n\t\tExponentiation\n");
    int n, base, res, i;
    int arr[SIZE] = {14, 67, 2, 89, 7};

    printf("Enter the number to be raised to the power: ");
    scanf("%d", &n);
    printf("Enter the number degree: ");
    scanf("%d", &base);
    res = my_power(n, base);
    printf("%d\n", res);

    printf("\n\t\tQuick sort\n");
    printf("\nBefore: ");
    for(i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);

    my_qsort(arr, 0, SIZE-1);
    printf("\nAfter: ");
    for(i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);


    return 0;
}
