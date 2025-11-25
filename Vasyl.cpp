#include <iostream>
using namespace std;

int main() {
    const int n = 12;
    int A[n] = {5, 2, 3, 4, 5, 6, -7, 8, 9, -1, 2, 3};
    cout << "Початковий масив A: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << "   "; 
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
        cout << "У масиві менше двох непарних елементів." << endl;
        return 0;
    }

    int d = A[ind];
    if (d == 0) {
        cout << "Другий непарний елемент 0, ділення неможливе." << endl;
        return 0;
    }
    int C[n];
    int m = n - ind;
    int j = 0;

    for (int i = ind; i < n; i++) {
        C[j] = A[i] / d;
        j++;
    }
    cout << "Масив C: ";
    for (int i = 0; i < m; i++) {
        cout << C[i] << "   "; 
    }
    cout << endl;

    return 0;
}
