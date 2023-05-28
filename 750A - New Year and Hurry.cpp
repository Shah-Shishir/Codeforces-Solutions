#include <iostream>
using namespace std;

int countSolvedProblems(int n, int k) {
    int left = 1;
    int right = n;
    int result = -1;

            
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int totalTime = 5 * (mid * (mid + 1)) / 2;

        if (totalTime <= (240 - k)) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    int n, k;
    cin >> n;
    cin >> k;

    int solvedProblems = countSolvedProblems(n, k);
    cout << solvedProblems << endl;

    return 0;
}
