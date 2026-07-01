static void heapify(int v[], int n, int i) {
    int maior = i;
    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;
    int temp;

    if (esquerda < n && v[esquerda] > v[maior]) {
        maior = esquerda;
    }

    if (direita < n && v[direita] > v[maior]) {
        maior = direita;
    }

    if (maior != i) {
        temp = v[i];
        v[i] = v[maior];
        v[maior] = temp;

        heapify(v, n, maior);
    }
}

void heapSort(int v[], int n) {
    int i, temp;

    for (i = n / 2 - 1; i >= 0; i--) {
        heapify(v, n, i);
    }

    for (i = n - 1; i > 0; i--) {
        temp = v[0];
        v[0] = v[i];
        v[i] = temp;

        heapify(v, i, 0);
    }
}
