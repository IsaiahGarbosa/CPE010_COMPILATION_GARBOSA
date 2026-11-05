#include <iostream>
#include <chrono>
#include <cmath>

using namespace std;

// Algorithm rpwr
long long rpwr(long long x, int n, long long& op_count) {
    op_count++;

    if (n == 0)
        return 1;

    return x * rpwr(x, n - 1, op_count);
}

// Algorithm brpower
long long brpower(long long x, int n, long long& op_count) {
    op_count++;

    if (n == 0)
        return 1;

    if (n % 2 == 1) {
        long long y = brpower(x, (n - 1) / 2, op_count);
        return x * y * y;
    }
    else {
        long long y = brpower(x, n / 2, op_count);
        return y * y;
    }
}

int main() {

    int sizes[] = {1000, 2000, 4000, 8000, 16000};

    cout << "RPWR:" << endl;

    for (int n : sizes) {

        long long op_count = 0;

        auto start = chrono::high_resolution_clock::now();

        rpwr(2, n, op_count);

        auto end = chrono::high_resolution_clock::now();

        auto time = chrono::duration_cast<chrono::nanoseconds>
                    (end - start).count();

        cout << "N = " << n
             << "\tOperations = " << op_count
             << "\tTime = " << time << " ms" << endl;
    }

    cout << endl << "BRPOWER:" << endl;

    for (int n : sizes) {

        long long op_count = 0;

        auto start = chrono::high_resolution_clock::now();

        brpower(2, n, op_count);

        auto end = chrono::high_resolution_clock::now();

        auto time = chrono::duration_cast<chrono::nanoseconds>
                    (end - start).count();

        cout << "N = " << n
             << "\tOperations = " << op_count
             << "\tTime = " << time << " ms" << endl;
    }

    return 0;
}