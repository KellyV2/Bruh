#include <iostream>

extern int sum_middle_row_column(int **vals, int num_rows, int num_cols);

using namespace std;

int main() {
    int array[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    cout << sum_middle_row_column(array,3,3) << endl;
    return 0;
}