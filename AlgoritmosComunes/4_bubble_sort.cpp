#include <bits/stdc++.h>
// Algoritmo de ordenamiento: Burbuja.
// g++ 4_Bubble_sort.cpp -o 4
using namespace std;
using namespace std::chrono;

void sort(vector <int> &A);

int main(int argc, char const *argv[]) {
    int n;
    cout << "Escribe el tamaño de la entrada: ";
    cin >> n;
    vector <int> A(n);
    // Se leen los valores
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    sort(A);

    // Mostramos después de ordenar
    cout << "Elementos ordenados: " << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}

void sort(vector<int> &A) {
    // Para saber cuánto tarda en ms
    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    int temp;
    for (unsigned int i = 0; i < A.size() - 1; i++) {
        for (unsigned int j = 0; j < A.size() - i - 1; j++) {
            if(A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    // Se obtiene la diferencia de los tiempos
    duration<double, std::milli> time_span = t2 - t1;
    // Mostramos el resultado:
    cout << "El algoritmo tardó: " << time_span.count() << " ms." << "\n\n";
}
