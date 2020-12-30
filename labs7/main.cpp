#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, i, j, x;
    cout << "Введите размер матрицы: ";
    cin >> n;
    int **matr = new int *[n];
    for (int i = 0; i < n; i++)
        matr[i] = new int[n]s;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matr[i][j] = 0;

    cout << "1 - Заполнить диагональ\n" << "2 - Заполнить обратную диагональ\n";
    cout << "3 - Заполнить зигзагом\n" << "4 - Заполнить все, кроме диагоналей\n";
    cin >> x;
    switch (x) {
        case 1:
            for (i = 0; i < n; i++)
                for (j = 0; j < n; j++)
                    if (i == j)
                        matr[i][j] = 1;
            break;
        case 2:
            for (i = 0; i < n; i++)
                for (j = n - 1; j >= 0; j--)
                    if (j + i == n - 1)
                        matr[i][j] = 1;
            break;
        case 3:
            bool right;
            right = true;
            for (i = 0; i < n; i++)
                for (j = 0; j < n; j++) {
                    if (i % 2 == 0) matr[i][j] = 1;
                    else {
                        if (right) {
                            matr[i][n - 1] = 1;
                            right = false;
                            break;
                        } else {
                            matr[i][0] = 1;
                            right = true;
                            break;
                        }
                    }
                }
            break;
        case 4:
            for (i = 0; i < n; i++)
                for (j = 0; j < n; j++)
                    if (i != j && j + i != n - 1)
                        matr[i][j] = 1;
            break;
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (j == (n - 1))
                cout << matr[i][j] << endl;
            else
                cout << matr[i][j];

    return 0;
}