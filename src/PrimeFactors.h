#pragma once
#include <cstdint>
#include <vector>
#include <cmath>
#include <string>

class PrimeFactors {
public:
	PrimeFactors(uint64_t);
	void Factorize();
	bool IsCorrect() const;
	std::string ToString() const;
private:
	const uint64_t number;
	std::vector<unsigned int> factors;
};