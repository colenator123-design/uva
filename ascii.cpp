#include <iostream>
#include <string>

using namespace std;

int main() {
    string encodedMessage;
    getline(cin, encodedMessage);

    for (char& c : encodedMessage) {
        if (isalpha(c)) {  // 确保是字母
            if (islower(c)) {
                c = (c - 'a' + 24) % 26 + 'a';
            } else {
                c = (c - 'A' + 24) % 26 + 'A';
            }
        }
    }

    cout << "Decoded message: " << encodedMessage << endl;

    return 0;
}
