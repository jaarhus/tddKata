#include "primeFactorization.hpp"

vector<int> primeFactorization(int myint) {
	vector<int> return_vector = {};
	int test_int = 2;
	while(test_int <= myint) {
		if (isprime(test_int)) {
			while (myint % test_int == 0) {
				myint = myint / test_int;
				return_vector.push_back(test_int);
			}
		}
		test_int++;
	}
	return return_vector;
}

bool isprime(int n) {
	if (n < 2) return false;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}