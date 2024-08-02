#include <iostream>
class matrix {
    int **p;
    int d1, d2;
public:
    matrix(int x, int y);
    ~matrix(); 
    void get_element(int i, int j, int value);
    int put_element(int i, int j) const; 
};
matrix::matrix(int x, int y) {
    d1 = x;
    d2 = y;
    p = new int*[d1];
    for (int i = 0; i < d1; i++) {
        p[i] = new int[d2];
    }
}
matrix::~matrix() {
    for (int i = 0; i < d1; i++) {
        delete[] p[i];
    }
    delete[] p;
}
void matrix::get_element(int i, int j, int value) {
    if (i < d1 && j < d2) {
        p[i][j] = value;
    } else {
        std::cout << "Index out of bounds\n";
    }
}
int matrix::put_element(int i, int j) const {
    if (i < d1 && j < d2) {
        return p[i][j];
    } else {
        std::cout << "Index out of bounds\n";
        return -1; 
    }
}
int main() {
    int m, n;
    std::cout << "Enter size of matrix: ";
    std::cin >> m >> n;
    matrix A(m, n);
    std::cout << "Enter Matrix Element row by row:\n";
    int i, j, value;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            std::cin >> value;
            A.get_element(i, j, value);
        }
    }
    std::cout << "\n";
    std::cout << A.put_element(1, 2); 
    return 0;
}
