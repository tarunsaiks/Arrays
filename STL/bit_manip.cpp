#include <bits/stdc++.h>
int main()
{
	std::bitset<5> num(std::string("01100"));
	num.reset(2);			  // set and reset counts order from right most position indexing 0
	std::cout << num << "\n"; // num is now 01000
	num.reset(0);			  // num is still 01000
	std::cout << num << "\n";
	num.set(3, false); // num is 00000
	std::cout << num << "\n";
	return 0;
}
