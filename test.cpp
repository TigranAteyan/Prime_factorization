#include <gtest/gtest.h>
#include <vector>

std::vector<int> primeFactorize(int n) {
    std::vector<int> factors;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

TEST(PrimeFactorizationTest, HandlesPrimeNumbers) {
    EXPECT_EQ(primeFactorize(13), std::vector<int>({13}));
}

TEST(PrimeFactorizationTest, HandlesCompositeNumbers) {
    EXPECT_EQ(primeFactorize(60), std::vector<int>({2, 2, 3, 5}));
    EXPECT_EQ(primeFactorize(125), std::vector<int>({5, 5, 5}));
}

TEST(PrimeFactorizationTest, HandlesOne) {
    EXPECT_EQ(primeFactorize(1), std::vector<int>({}));
}
