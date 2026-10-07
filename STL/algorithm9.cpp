#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[] = {10, 25, 7, 40, 15};

    cout << *min_element(a, a + 5) << endl;

    return 0;
}
