#include "pch.h"
#include "../Project7/prime_factors.cpp"

using namespace std;
TEST(PrimeFacotrs, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}
TEST(PrimeFacotrs, Of2) {
	PrimeFactor prime_factor;
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}