#include <stdio.h>

void bubbleSort(int v[], int n);
void selectionSort(int v[], int n);
void insertionSort(int v[], int n);
void mergeSort(int v[], int n);
void quickSort(int v[], int n);
void heapSort(int v[], int n);

void printArray(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int v1[] = {5, 3, 8, 1, 2};
    int n = 5;

    bubbleSort(v1, n);
    printf("Bubble Sort: ");
    printArray(v1, n);

    int v2[] = {5, 3, 8, 1, 2};
    selectionSort(v2, n);
    printf("Selection Sort: ");
    printArray(v2, n);

    int v3[] = {5, 3, 8, 1, 2};
    insertionSort(v3, n);
    printf("Insertion Sort: ");
    printArray(v3, n);

    int v4[] = {5, 3, 8, 1, 2};
    mergeSort(v4, n);
    printf("Merge Sort: ");
    printArray(v4, n);

    int v5[] = {5, 3, 8, 1, 2};
    quickSort(v5, n);
    printf("Quick Sort: ");
    printArray(v5, n);

    int v6[] = {5, 3, 8, 1, 2};
    heapSort(v6, n);
    printf("Heap Sort: ");
    printArray(v6, n);

    return 0;
}
