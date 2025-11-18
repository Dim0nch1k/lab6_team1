#include <iostream>
using namespace std;

int main() {
    const int n = 12;
    int A[n] = {5, 2, 3, 4, 5, 6, -7, 8, 9, -1, 2, 3};

    cout << "Початковий масив A: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    int k = 0;       // лічильник непарних елементів
    int ind = -1;    // індекс другого непарного

    // Пошук другого непарного елемента
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 != 0) {  // непарний
            k++;
            if (k == 2) {
                ind = i;
                break;
            }
        }
    }

    // Перевірка
    if (k < 2) {
        cout << "У масиві менше двох непарних елементів. Роботу завершено." << endl;
        return 0;
    }

    int d = A[ind]; // значення другого непарного

    if (d == 0) {
        cout << "Другий непарний елемент дорівнює 0. Ділення неможливе." << endl;
        return 0;
    }

    // Створення масиву C
    int C[n];
    int m = n - ind; // розмір масиву C
    int j = 0;

    for (int i = ind; i < n; i++) {
        C[j] = A[i] / d;
        j++;
    }

    // Вивід масиву C
    cout << "Масив C: ";
    for (int i = 0; i < m; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}

