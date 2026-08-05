#include <iostream>
using namespace std;

void discount(float price, float percent)
{
    float d = price * percent / 100;
    float finalPrice = price - d;

    cout << "Discount = " << d << endl;
    cout << "Final Price = " << finalPrice;
}

int main()
{
    float price, percent;
    cin >> price >> percent;

    discount(price, percent);

    return 0;
}
