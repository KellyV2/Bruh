#include <iostream>

extern int **pointer_array(int *vals, int len);

using namespace std;

int main() {
    int vals[]={1,2,3,4,5};
    int **val_ptrs = pointer_array(vals,5);
    *(val_ptrs[2])=10;
    return 0;
}