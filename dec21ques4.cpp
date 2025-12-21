// https://www.codechef.com/problems/CWCTH

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // your code goes here
    int a, b;
    cin >> a >> b;

    if (b >= 3 * a) {
        cout << "rain";
    } else {
        cout << "dry";
    }
}