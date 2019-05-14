// Helloworld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
template <typename T>
class SquarePair
{
	class SquareProxy
	{
		T _underliyng;
	public:
		explicit SquareProxy(T val) : _underliyng(val) {}
		operator T() { return _underliyng * _underliyng; }
	}; 
public:
	using first_type = T;
	using second_type = T;
	T first;
	SquareProxy second;
	explicit SquarePair(T val) : first(val), second(val) {}
};

template <typename PAIR, typename PAIR::first_type* dummy1 = nullptr, typename PAIR::second_type* dummy2 = nullptr>
std::ostream& operator<<(std::ostream& out, const PAIR& pair)
{
	return out << pair.first << ' ' << pair.second;
}
int main()
{
	SquarePair<int> x{ 5 };
    std::cout << x ; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
