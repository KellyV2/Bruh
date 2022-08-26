int **pointer_array(int *vals, int len) {
    for (int i = 0; i < len; i++) {
        *(vals+i) = (*vals+i);
    }
}