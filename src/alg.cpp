// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
	if (a > b) {
		for (int i = a + 1; i > 0; i--) {
			if (b%i == 0 && a%i == 0) {
				return i;
			}
		}
	}
	else {
		for (int i = b + 1; i > 0; i--) {
			if (b%i == 0 && a%i == 0) {
				return i;
			}
		}
	}
}
