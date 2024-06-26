#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to find the minimum number of primes that sum up to n
std::pair<int, std::vector<int>> minPrimesToSumN(int n) {
    std::vector<int> primes;

    // Generate a list of prime numbers less than n
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }

    // Use dynamic programming to find the minimum number of primes
    std::vector<int> dp(n + 1, n + 1);
    std::vector<std::vector<int>> usedPrimes(n + 1);
    dp[0] = 0;

    for (int prime : primes) {
        for (int j = prime; j <= n; ++j) {
            if (dp[j] > dp[j - prime] + 1) {
                dp[j] = dp[j - prime] + 1;
                usedPrimes[j] = usedPrimes[j - prime];
                usedPrimes[j].push_back(prime);
            }
        }
    }

    return dp[n] > n ? std::make_pair(-1, std::vector<int>()) : std::make_pair(dp[n], usedPrimes[n]);
}

int main() {
    int n;
    cout<<"Enter no";
    cin>>n;
    auto result = minPrimesToSumN(n);

    if (result.first == -1) {
        std::cout << "It's not possible to sum up to " << n << " using prime numbers." << std::endl;
    } else {
        std::cout << "The minimum number of prime numbers that sum up to " << n << " is: " << result.first << std::endl;
        std::cout << "The prime numbers are: ";
        for (int prime : result.second) {
            std::cout << prime << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
