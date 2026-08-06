#include <iostream>
using namespace std;

float gst(float price, float rate)
{
    return price + (price * rate / 100);
}

int main()
{
    float price, rate;
    cin >> price >> rate;

    cout << "Final Amount = " << gst(price, rate);

    return 0;
}
