#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "primeFactorization.hpp"

TEST_CASE("Prime Factorization Test") {
	SECTION("One:") {
		REQUIRE(primeFactorization(1) == vector<int>{});
	}
	SECTION("Two:") {
		REQUIRE(primeFactorization(2) == vector<int>{2});
	}
	SECTION("Three:") {
		REQUIRE(primeFactorization(3) == vector<int>{3});
	}
	SECTION("Four:") {
		REQUIRE(primeFactorization(4) == vector<int>{2, 2});
	}
	SECTION("Five:") {
		REQUIRE(primeFactorization(5) == vector<int>{5});
	}
	SECTION("Six:") {
		REQUIRE(primeFactorization(6) == vector<int>{2, 3});
	}
	SECTION("Seven:") {
		REQUIRE(primeFactorization(7) == vector<int>{7});
	}
	SECTION("Eight:") {
		REQUIRE(primeFactorization(8) == vector<int>{2, 2, 2});
	}
	SECTION("Nine:") {
		REQUIRE(primeFactorization(9) == vector<int>{3, 3});
	}
	SECTION("Ten:") {
		REQUIRE(primeFactorization(10) == vector<int>{2, 5});
	}
}
