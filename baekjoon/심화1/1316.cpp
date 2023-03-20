#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    unsigned int N(0), cnt(0);
    int alpha[26] = {0,};
    string str;

    cin >> N;

    for (unsigned int a = 0; a < N; a++) {
        cin >> str;
        memset(alpha, 0, sizeof(int) * 26);
        for (unsigned int b = 0; b < str.length(); b++) {
            if (alpha[str[b] - 'a'] == 1)
                break ;
            else {
                alpha[str[b] - 'a'] = 1;
                while (b != str.length() - 1 && str[b] == str[b + 1])
                    b++;
            }
            if (b == str.length() - 1)
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}