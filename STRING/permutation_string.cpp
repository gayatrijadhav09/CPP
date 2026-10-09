
#include <iostream>
#include <string>
using namespace std;

bool isfreqsame(int freq1[], int freq2[]) {
    for(int i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
    int freq[26] = {0};

    for(int i = 0; i < s1.length(); i++) {
        int idx = s1[i] - 'a';
        freq[idx]++;
    }

    int windsize = s1.length();

    if(windsize > s2.length()) {
        return false;
    }

    for(int i = 0; i <= s2.length() - windsize; i++) {
        int windfreq[26] = {0};

        for(int j = i; j < i + windsize; j++) {
            int idx = s2[j] - 'a';
            windfreq[idx]++;
        }

        if(isfreqsame(freq, windfreq)) {
            return true;
        }
    }

    return false;
}

int main() {
    string s1, s2;

    cin >> s1 >> s2;

    if(checkInclusion(s1, s2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

