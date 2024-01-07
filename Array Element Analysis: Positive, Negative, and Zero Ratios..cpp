#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int zero = 0, plus = 0, minus = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            zero++;
        else if (arr[i] < 0)
            minus++;
        else if (arr[i] > 0)
            plus++;
    }

    cout << fixed << setprecision(6) << static_cast<double>(plus) / n << endl;
    cout << fixed << setprecision(6) << static_cast<double>(minus) / n << endl;
    cout << fixed << setprecision(6) << static_cast<double>(zero) / n;

    return 0;
}

