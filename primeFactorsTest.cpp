#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "primeFactorization.hpp"

vector<int>v = {};

TEST_CASE("Prime Factorization Test") {
	SECTION("One:") {
		REQUIRE(primeFactorization(v, 1) == vector<int>{});
	}
	SECTION("Two:") {
		REQUIRE(primeFactorization(v, 2) == vector<int>{2});
	}
	SECTION("Three:") {
		REQUIRE(primeFactorization(v, 3) == vector<int>{3});
	}
	SECTION("Four:") {
		REQUIRE(primeFactorization(v, 4) == vector<int>{2, 2});
	}
	SECTION("Five:") {
		REQUIRE(primeFactorization(v, 5) == vector<int>{5});
	}
	SECTION("Six:") {
		REQUIRE(primeFactorization(v, 6) == vector<int>{2, 3});
	}
	SECTION("Seven:") {
		REQUIRE(primeFactorization(v, 7) == vector<int>{7});
	}
	SECTION("Eight:") {
		REQUIRE(primeFactorization(v, 8) == vector<int>{2, 2, 2});
	}
	SECTION("Nine:") {
		REQUIRE(primeFactorization(v, 9) == vector<int>{3, 3});
	}
	SECTION("Ten:") {
		REQUIRE(primeFactorization(v, 10) == vector<int>{2, 5});
	}
}
