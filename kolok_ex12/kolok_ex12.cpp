#include <iostream>
int main() {
	int n;
	std::cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	int k = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 1; j < n; j++) {
			if (a[i] == a[j]) {
				k++;
			}
		}
		if (k == 2) {
			std::cout << a[i];
			break;
		}
		k = 0;
	}
	return 0;
}