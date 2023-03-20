#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int ret(1);

    cin >> str;

    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] == str[str.length() - i - 1]) {
            continue ;
        }
        else {
            ret = 0;
            break ;
        }
    }
    cout << ret << endl;
    return 0;
}