#include <iostream>

using namespace std;

int gcd(int x, int y);

int main(int argc, char *argv[]) {
    if (argc < 3) {
        cerr << "#error: expecting two integers as arguments" << endl;
        return 1;
    }
    int x = stoi(string(argv[1]));
    int y = stoi(string(argv[2]));
    cout << gcd(x, y) << endl;
    return 0;
}

int gcd(int x, int y) {
    while (x != y)
        if (x > y)
            x -= y;
        else
            y -= x;
    return x;
}
