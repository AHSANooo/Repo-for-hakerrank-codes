#include<iostream>
using namespace std;

int main() {
    int n, i1 = 0, i2 = 2;

    while (i1 == 0) {
        cout << "Enter a number: ";
        cin >> n;

        if (n == 1) {
            cout << "1 is not a prime or composite." << endl;
        } else if (n == 0) {
            cout << "0 is invalid input." << endl;
        } else if (n < 0) {
            return 0;
        } else {
            while (i2 <= n / 2) {
                if (n % i2 == 0) {
                    cout << "Not a prime number." << endl;
                    i1 = 1; 
                   
                }
                i2++;
            }
            if (i1 == 0) {
                cout << "Prime number." << endl;
            }
        }
    }

    return 0;
}

