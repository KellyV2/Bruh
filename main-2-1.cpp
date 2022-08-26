#include <iostream>

extern int tax_bracket_lookup(int income);

using namespace std;

int main() {
    cout << tax_bracket_lookup(10000) << endl;
    return 0;
}