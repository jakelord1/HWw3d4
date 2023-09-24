#pragma once

class ID
{
	int num;
	char let;
public:
	ID() = default;
	ID(int n, char l) { num = n; let - l; }
	friend ostream& operator<<(ostream& os, const ID obj) { os << obj.num << obj.let; }
	ID operator+(ID& obj);
	ID operator-(ID& obj);
	ID operator*(ID& obj);
};

