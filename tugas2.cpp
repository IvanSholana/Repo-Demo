#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, x, i;
    cin >> n >> x;

    if (2 * x > (pow(3, n) - 1))
        cout << -1;
    else {
        vector<long long> v;

        while (x >= 1) {
            v.push_back(x % 3);
            x /= 3;
        }

        v.push_back(0);

        for (i = 0; i < v.size() - 1; i++) {
            if (v[i] == 2) {
                v[i + 1] = v[i + 1] + 1;
                v[i] = -1;
            }

            if (v[i] == 3) {
                v[i + 1] = v[i + 1] + 1;
                v[i] = 0;
            }
        }

        for (i = 0; i < v.size(); i++) {
            if (v[i] == -1)
                cout << i + 1 << " ";
        }

        cout << endl;

        for (i = 0; i < v.size(); i++) {
            if (v[i] == 1)
                cout << i + 1 << " ";
        }
    }

    return 0;
}
