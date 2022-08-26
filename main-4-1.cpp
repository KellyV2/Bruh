#include <iostream>

extern int sum_middle_row_column(int **vals, int num_rows, int num_cols);

using namespace std;

int main() {
    int array[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            array[i][j] = 1;
        }
    }
    cout << sum_middle_row_column(array,3,3);
    return 0;
}