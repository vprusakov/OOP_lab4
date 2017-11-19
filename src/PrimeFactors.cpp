#include "PrimeFactors.h"

PrimeFactors::PrimeFactors(uint64_t number) : number(number) {
	factors.resize(number + 1);
	Factorize();
}
void PrimeFactors::Factorize() {
	uint64_t curr_number = number;
	int probe = 2;
	while (curr_number != 1) {
		if (curr_number % probe != 0) {
			++probe;
		}
		else {
			curr_number /= probe;
			++factors[probe];
		}
	}
}

bool PrimeFactors::IsCorrect() const {
	uint64_t result = 0;
	for (std::size_t i = 0, l = factors.size(); i != l; ++i) {
		if (factors[i]) {
			result = pow(i, factors[i]);
		}
	}
	return number == result;
}

std::string PrimeFactors::ToString() const {
	std::string result;
	for (std::size_t i = 0, l = factors.size(); i != l; ++i) {
		if (factors[i]) {
			if (factors[i] == 1) {
				result += " * " + std::to_string(i);
			}
			else {
				result += " * " + std::to_string(i) + '^' + std::to_string(factors[i]);
			}
		}
	}
	result.erase(0, 3);
	return result;
}