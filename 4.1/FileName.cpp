#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    double sum1 = 0, sum2 = 0, sum3 = 0;
    int k = 1;

    cout << "N = "; cin >> N;

    while (k <= N) {
        sum1 += (1 + sqrt(1 + k + k)) / (k + k);
        k++;
    }
    cout << "S1 = " << sum1 << endl;

    k = 1;
    while (k <= N) {
        sum2 += (1 + sqrt(1 + k + k)) / (k + k);
        k++;
    }
    cout << "S2 = " << sum2 << endl;

    for (k = 1; k <= N; k++) {
        sum3 += (1 + sqrt(1 + k + k)) / (k + k);
    }
    cout << "S3 = " << sum3 << endl;

    return 0;
}
