#include <iostream>

int main()
{
	int t, n, sum, a;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::cin >> n;
		sum = 0;
		for (int j = 0; j < n; j++) {
			std::cin >> a;
			if (a % 2) {
				sum += a;
			}
		}
		std::cout << sum <<std::endl;
	}
}
