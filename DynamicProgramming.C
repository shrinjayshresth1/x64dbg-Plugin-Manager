#include <iostream>
#include <vector>

using namespace std;

/**
 * Function to calculate the nth Fibonacci number using dynamic programming.
 *
 * @param n The index of the Fibonacci number to calculate.
 * @return The nth Fibonacci number.
 */
int calculateFibonacci(int n) {
    vector<int> dp(n + 1, 0);

    // Base cases
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid input. n must be a non-negative integer." << endl;
    } else {
        int result = calculateFibonacci(n);
        cout << "The " << n << "th Fibonacci number is: " << result << endl;
    }

    return 0;
}
