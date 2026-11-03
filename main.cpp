#include <iostream>

// Lab 10 — Andy Munoz
// CIS 5 Week 10 · References & pointers

void swap_values(int& a, int& b) {
	int t = a; a = b; b = t;
}

int main() {
	int x = 3, y = 7;
	std::cout << "Before: " << x << " " << y << "\n";
	// TODO: swap_values(x, y);
	swap_values(x, y);
	std::cout << "After: " << x << " " << y << "\n";
	// TODO: pointer walkthrough with int* p = &x;
	int* p = &x;
	std::cout << "\nPointer Walkthrough:\n";
	std::cout << "Adress via pointer: " << p << "\n";
	std::cout << "Value via pointer: " << *p << "\n";
	
	return 0;
}	
