#include<iostream>

using namespace std;

int main() {
    int n;
    int a, b, c;
    int ans = 0;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        if(a + b + c >= 2) ans++;
    }
    cout << ans << "\n";
    return 0;
}