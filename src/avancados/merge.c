static void merge(int v[], int inicio, int meio, int fim) {
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    int esquerda[n1];
    int direita[n2];

    for (i = 0; i < n1; i++)
        esquerda[i] = v[inicio + i];

    for (j = 0; j < n2; j++)
        direita[j] = v[meio + 1 + j];

    i = 0;
    j = 0;
    k = inicio;

    while (i < n1 && j < n2) {
        if (esquerda[i] <= direita[j]) {
            v[k] = esquerda[i];
            i++;
        } else {
            v[k] = direita[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        v[k] = esquerda[i];
        i++;
        k++;
    }

    while (j < n2) {
        v[k] = direita[j];
        j++;
        k++;
    }
}

static void mergeSortRec(int v[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        mergeSortRec(v, inicio, meio);
        mergeSortRec(v, meio + 1, fim);

        merge(v, inicio, meio, fim);
    }
}

void mergeSort(int v[], int n) {
    if (n > 1) {
        mergeSortRec(v, 0, n - 1);
    }
}
