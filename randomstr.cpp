
#include <iostream>
#include <random>
#include <string>

using namespace std;

// Method to calculate sum of ASCII values of characters in string
int method1(string str) {
    int val = 0;
    for (int i = 0; i < str.length(); i++) {
        val += str[i];
    }
    return val;
}

// Function to generate random string
string generate_random_string(size_t length) {
    static const string chars =
        "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    static mt19937 generator(random_device{}());
    static uniform_int_distribution<> dist(0, chars.size() - 1);

    string result;
    for (size_t i = 0; i < length; ++i) {
        result += chars[dist(generator)];
    }

    return result;
}

int main() {
    // Generate and print 5 random strings
    for (int i = 0; i < 5; i++) {
        string s = generate_random_string(10);
        cout << s << endl;
    }

    // Test with "ravi"
    string n = "ravi";
    int hval = method1(n);
    cout << n << " " << hval << endl;

    // Test with "java"
    n = "java";
    hval = method1(n);
    cout << n << " " << hval << endl;

    return 0;
}
