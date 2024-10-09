#include <iostream>
#include <vector>

using namespace std;

class Matrix {
public:
    vector<vector<int>> mat;
    int rows, cols;

public:
    void inputMatrix() {
        cout << "Enter number of rows and columns: ";
        cin >> rows >> cols;
        mat.resize(rows, vector<int>(cols));

        cout << "Enter the elements of the matrix:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> mat[i][j];
            }
        }
    }

    void displayMatrix() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

class MatrixOperations : public Matrix {
public:
    void add(Matrix& other) {
        if (rows != other.rows || cols != other.cols) {
            cout << "Error : Different Dimensions\n";
            return;
        }

        vector<vector<int>> result(rows, vector<int>(cols));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[i][j] = mat[i][j] + other.mat[i][j];
            }
        }

        cout << "Result of Addition:\n";
        for (auto& row : result) {
            for (auto& elem : row) {
                cout << elem << " ";
            }
            cout << endl;
        }
    }

    void subtract(Matrix& other) {
        if (rows != other.rows || cols != other.cols) {
            cout << "Error:Different Dimensions\n";
            return;
        }

        vector<vector<int>> result(rows, vector<int>(cols));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[i][j] = mat[i][j] - other.mat[i][j];
            }
        }

        cout << "Result of Subtraction:\n";
        for (auto& row : result) {
            for (auto& elem : row) {
                cout << elem << " ";
            }
            cout << endl;
        }
    }

    void multiply(Matrix& other) {
        if (cols != other.rows) {
            cout << "Error: inapropriate dimensions\n";
            return;
        }

        vector<vector<int>> result(rows, vector<int>(other.cols, 0));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                for (int k = 0; k < cols; k++) {
                    result[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }

        cout << "Result of Multiplication:\n";
        for (auto& row : result) {
            for (auto& elem : row) {
                cout << elem << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    MatrixOperations mat1, mat2;

    cout << "Input Matrix 1:\n";
    mat1.inputMatrix();

    cout << "Input Matrix 2:\n";
    mat2.inputMatrix();

    cout << "Matrix 1:\n";
    mat1.displayMatrix();
    cout << "Matrix 2:\n";
    mat2.displayMatrix();

    mat1.add(mat2);
    mat1.subtract(mat2);
    mat1.multiply(mat2);

    return 0;
}
