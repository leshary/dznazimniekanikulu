#include <iostream>
#include <cmath>
 
int Reverse(long long val) {
	long long result(0), temp = val;
	while (temp != 0) {
		result = result * 10 + temp % 10;
		temp /= 10;
	}
	return result;
}
 
void print_palindrom(long long n) {
	if (n == 1) std::cout << 9;
	else if (n % 2) {
		long long temp = (long long)pow(10, n / 2 - 1);
		for (int current = temp; current < 10 * temp; current++) {
			long long rest = 2 * (9 - current % 9) % 9;
			long long right = Reverse(current);
			std::cout << 100 * temp * current + 10 * temp * rest + right << " ";
			if (rest == 0) std::cout << 100 * temp * current + 90 * temp + right << " ";
		}
	}
	else {
		long long temp = (long long)pow(10, n / 2 - 1);
		for (long long current = temp + 8; current < 10 * temp; current += 9) {
			std::cout << 10 * temp * current + Reverse(current) << " ";
		}
	}
}
 
int main() {
	long long input;
	std::cin >> input;
	print_palindrom(input);
	return 0;
}
