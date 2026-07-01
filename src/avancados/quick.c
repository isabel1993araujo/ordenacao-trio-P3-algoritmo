int partition(int v[], int low, int high) {
    int pivot = v[high];
    int i = low - 1;
    int j, temp;

    for (j = low; j < high; j++) {
        if (v[j] < pivot) {
            i++;

            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }

    temp = v[i + 1];
    v[i + 1] = v[high];
    v[high] = temp;

    return i + 1;
}

void quickSortRec(int v[], int low, int high) {
    if (low < high) {
        int pi = partition(v, low, high);

        quickSortRec(v, low, pi - 1);
        quickSortRec(v, pi + 1, high);
    }
}

void quickSort(int v[], int n) {
    quickSortRec(v, 0, n - 1);
}
