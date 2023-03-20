#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    string name, grade;
    float point, total_point(0), ret(0);

    for (int i = 0; i < 50; i++) {
        cin >> name >> point >> grade;
        if (cin.eof())
            break ;
        total_point += point;
        if (grade == "A+") {
            ret += 4.5 * point;
        }
        else if (grade == "A0") {
            ret += 4.0 * point;
        }
        else if (grade == "B+") {
            ret += 3.5 * point;
        }
        else if (grade == "B0") {
            ret += 3.0 * point;
        }
        else if (grade == "C+") {
            ret += 2.5 * point;
        }
        else if (grade == "C0") {
            ret += 2.0 * point;
        }
        else if (grade == "D+") {
            ret += 1.5 * point;
        }
        else if (grade == "D0") {
            ret += 1.0 * point;
        }
        else if (grade == "F") {
            ret += 0 * point;
        }
        else if (grade == "P") {
            total_point -= point;
            continue ;
        }
    }
    ret /= total_point;
    cout << ret << endl;
}
