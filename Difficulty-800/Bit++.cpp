#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;
    string statement;
    while(n--) {
        cin >> statement;
        if(statement == "X++" || statement == "++X") x++;
        else x--;
    }
    cout << x << "\n";
    return 0;
}