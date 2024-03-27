#include <iostream>

using namespace std;
int main()
{
    int n;
    int k = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int y = 0; y < n - i; y++) {
            cout << " ";
        }
        for (int z = 0; z < i + k; z++) {
            cout << "*";
        }
        cout << "\n";
        k++;
    }
}

