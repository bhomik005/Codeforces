#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::string;

int main() {
    int n;
    cin >> n;
    string word;
    // O(n) time | O(1) space
    while(n--) {
        cin >> word;
        // check if word length is longer than 10 then do this
        if(word.length() > 10) cout << word[0] << word.length() - 2 << word[word.length() - 1];
        // else print the word as it is
        else cout << word;
        cout << "\n";
    }
    return 0;
}