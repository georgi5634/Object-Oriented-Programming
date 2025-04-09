#pragma once
class SpecialCustomFunction
{
	int* arr = nullptr;
	size_t specialValuesCount = 0;
	int (*f) (int value);
	void copyFrom(const SpecialCustomFunction& other);
	void free();
	
public:
	SpecialCustomFunction();
	SpecialCustomFunction(int* arr, size_t specialValuesCount, int(*f) (int value));
	SpecialCustomFunction(const SpecialCustomFunction& other);
	SpecialCustomFunction& operator=(SpecialCustomFunction& other);
	SpecialCustomFunction& operator++();
	SpecialCustomFunction operator++(int);
	SpecialCustomFunction& operator--();
	SpecialCustomFunction operator--(int);
	SpecialCustomFunction& operator()();
	SpecialCustomFunction operator!();
	~SpecialCustomFunction();


};

