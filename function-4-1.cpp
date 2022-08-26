int sum_middle_row_column(int **vals, int num_rows, int num_cols) {
    int sum = 0;
    for (int i = 0; i < num_rows; i++) {
        sum += vals[i][(num_cols/2)+1];
    }
    for (int j = 0; j < num_cols; j++) {
        sum += vals[(num_rows/2)+1][j];
    }
    return sum;
}