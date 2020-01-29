// selection sort
// Big o (n^2)  - Omega (n ^ 2)
/*
 * For i from 0 to n–1
    Find smallest item between i'th item and last item
    Swap smallest item with i'th item
 */

#include <stdio.h>
void swap(int *a, int *b);

void selection(int arr[],int n);

int main(void)
{
    int arr[] = {2, -5, 7, 89, 100, -78, 5, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    selection(arr,size);
    printf("Sorted list: ");
    for (int i = 0 ; i < size ; i++) {
        printf("%i   ",arr[i]);
    }
    printf("\n");
}
void selection(int arr[],int n) {
    for (int i = 0 ; i < n -1 ; i++) {
        int holder = i;
        for (int j = i + 1 ; j < n ; j++) {
            if (arr[holder] > arr[j]) {
                holder = j;
                swap(&arr[holder],&arr[i]);
            }
        }
    }
}
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}