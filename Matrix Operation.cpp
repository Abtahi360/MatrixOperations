#include <iostream>

using namespace std;

void sum(int a[3][3], int b[3][3], int i, int j) {
    int c[i][j];

    for (int x = 0; x < i; x++) {
        for (int y = 0; y < j; y++) {
            c[x][y] = a[x][y] + b[x][y];
        }
    }

    cout << "Sum of matrices:" << endl;
    for (int x = 0; x < i; x++) {
        for (int y = 0; y < j; y++) {
            cout << c[x][y] << " ";
        }
        cout << endl;
    }
}
void transpose(int a[3][3], int i, int j) {
    int c[j][i];
    for (int x = 0; x < i; x++) {
        for (int y = 0; y < j; y++) {
            c[y][x] = a[x][y];
        }
    }
    cout << "Transpose of A matrix:" << endl;
    for (int x = 0; x < j; x++) {
        for (int y = 0; y < i; y++) {
            cout << c[x][y] << " ";
        }
        cout << endl;
    }
}

void multiplication(int a[3][3], int b[3][3], int i, int k, int j) {
    int c[i][j];

    for (int x = 0; x < i; x++) {
        for (int y = 0; y < j; y++) {
            c[x][y] = 0;
        }
    }
    for (int x = 0; x < i; x++) {
        for (int y = 0; y < j; y++) {
            for (int z = 0; z < k; z++) {
                c[x][y] += a[x][z] * b[z][y];
            }
        }
    }

    cout << "Multiplication of matrices:" << endl;
    for (int x = 0; x < i; x++) {
        for (int y = 0; y < j; y++) {
            cout << c[x][y] << " ";
        }
        cout << endl;
    }
}

int main() {
    int a[3][3] = {{2, 4, 3}, {10, 1, 5}, {44, 47, 1}};
    int b[3][3] = {{5, 3, 4}, {2, 1, 9}, {0, 7, 1}};
    sum(a, b, 3, 3);
    cout << endl << "----------------------------" << endl;
    transpose(a, 3, 3);
    cout << endl << "----------------------------" << endl;
    multiplication(a, b, 3, 3, 3);

    return 0;
}
