#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int n;

    cout << "Введіть розмір масиву (не більше 100): ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Некоректний розмір масиву!" << endl;
        return 0;
    }

    int A[100];
    srand(time(0));

    for (int i = 0; i < n; i++) {
        A[i] = rand() % 21 - 10;
    }

    cout << "Початковий масив A: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    int k = 0;
    int ind = -1;

    for (int i = 0; i < n; i++) {
        if (A[i] % 2 != 0) { 
            k++;
            if (k == 2) {
                ind = i;
                break;
            }
        }
    }

    if (k < 2) {
        cout << "У масиві менше двох непарних елементів. Неможливо виконати завдання." << endl;
        return 0;
    }

    int d = A[ind];

    if (d == 0) {
        cout << "Другий непарний елемент дорівнює 0. Ділення неможливе." << endl;
        return 0;
    }

    int C[100];
    int m = n - ind;
    int j = 0;

    for (int i = ind; i < n; i++) {
        C[j] = A[i] / d;
        j++;
    }

    cout << "Масив C: ";
    for (int i = 0; i < m; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
