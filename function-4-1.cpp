int sum_middle_row_column(int **vals, int num_rows, int num_cols) {
    int sum = 0;
    for(int col = 0; col < num_cols; col++) {
        sum += vals[num_cols/2][col];
    }
    for (int row = 0; row < num_rows; row++) {
        sum += vals[row][num_rows/2];
    }
    return sum;
}