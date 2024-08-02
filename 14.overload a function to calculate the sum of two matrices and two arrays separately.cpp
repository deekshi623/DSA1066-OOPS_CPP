#include<iostream>
using namespace std;
void add(int arr1[], int arr2[], int arr3[], int size) {
    for(int i = 0; i < size; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }
}
void add(int mat1[][3], int mat2[][3], int mat3[][3], int row, int col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int arr3[5];

    add(arr1, arr2, arr3, 5);

    cout << "Sum of two arrays: ";
    for(int i = 0; i < 5; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    int mat1[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    int mat3[3][3];

    add(mat1, mat2, mat3, 3, 3);

    cout << "Sum of two matrices: " << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << mat3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
