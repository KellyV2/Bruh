int **pointer_array(int *vals, int len) {
    int** array = reinterpret_cast<int **>(new int[len]);
    for (int i = 0; i < len; i++) {
        array[i] = new int;
    }
    for (int j = 0; j < len; j++) {
        array[j] = reinterpret_cast<int *>(vals[j]);
    }
    return array;
 }