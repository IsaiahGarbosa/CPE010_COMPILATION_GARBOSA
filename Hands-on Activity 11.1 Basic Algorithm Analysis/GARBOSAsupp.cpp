#include <iostream>
#include <chrono>

using namespace std;

bool Unique(const int A[], int n, long long& op_count) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            op_count++;

            if (A[i] == A[j]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int sizes[] = {1000, 2000, 4000, 8000, 16000};

    for (int n : sizes) {
        int* A = new int[n];

        for (int i = 0; i < n; i++) {
            A[i] = i;
        }

        long long op_count = 0;

        auto start = chrono::high_resolution_clock::now();

        Unique(A, n, op_count);

        auto end = chrono::high_resolution_clock::now();

        auto time = chrono::duration_cast<chrono::nanoseconds>
                    (end - start).count();

        cout << "N = " << n
             << "\t\tOperations = " << op_count
             << "\t\tTime = " << time << " ms" << endl;

        delete[] A;
    }

    return 0;
}