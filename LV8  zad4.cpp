

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int brojac = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (brojac > 0) {
                cout << ", ";
            }
            cout << i;
            brojac++;
        }
    }

    cout << endl << brojac;

    return 0;
}

