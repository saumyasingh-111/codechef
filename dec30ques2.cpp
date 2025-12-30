// https://www.codechef.com/problems/INDDAY

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // your code goes here
    int x;
    cin >> x;
    if (x > 15) {
        cout << -1;
    } else {
        cout << (15 - x);
    }
}