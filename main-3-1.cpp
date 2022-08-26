#include <iostream>

extern int even_numbers_above(int vals[], int above, int length);

using namespace std;

int main() {
    int array[5] = {1,2,3,4,5};
    cout << even_numbers_above(array,1,5);
    return 0;
}