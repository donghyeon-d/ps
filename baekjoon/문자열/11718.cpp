#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    for (int i = 0; i < 100; i++) {
        getline(cin, str);
        if (cin.eof())
            break ;
        cout << str << endl;
    }
    return 0;
}