#include <stdio.h>
#define ARRSIZE 5
void input_array (int [], int);
void bubble_sort (int [], int);
void display_array (int [], int);
void main () {
    int a[ARRSIZE];
    input_array (a, ARRSIZE);
    bubble_sort (a, ARRSIZE);
    printf ("The bubble sorted array is as follows:\n");
    display_array (a, ARRSIZE);
}

void input_array (int a[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf ("Enter element #%d\n", i + 1);
        scanf ("%d", &a[i]);
    }
}

void bubble_sort (int a[], int size) {
    int i, j, temp;
    for (j = 0; j < size - 1; j++) {
        for (i = 0; i < size - 1; i++) {
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}

void display_array (int a[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf ("%d ", a[i]);
    printf ("\n");
}
