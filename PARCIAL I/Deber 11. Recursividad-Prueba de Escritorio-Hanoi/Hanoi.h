#pragma once

template<typename T>
class Hanoi {
private:
	T num;
	char a, b, c;
public:
	Hanoi() = default;
	void hanoi(T, char, char, char);
};