#include<iostream>
using std::cin;
using std::cout;


int main() {
    int w;
    cin >> w;

    // O(1) time | O(1) space
    if(w > 2 && w % 2 == 0) cout << "YES";
    else cout << "NO";
    cout << "\n";
    return 0;
}