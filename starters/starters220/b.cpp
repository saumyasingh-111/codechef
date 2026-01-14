// Front-Back Matching

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> freq(26, 0);

        for (char ch : s) {
            freq[ch - 'a']++;
        }

        bool check = false;
        for (int i = 0; i < 26; i++) {
            if (freq[i] >= 2) {
                check = true;
                break;
            }
        }

        if (check)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}