#include "SpecialCustomFunction.h"

void SpecialCustomFunction::copyFrom(const SpecialCustomFunction& other)
{
	this->f = other.f;
	this->specialValuesCount = other.specialValuesCount;
	arr = new int[other.specialValuesCount];
	for (size_t i = 0; i < specialValuesCount; i++)
	{
		this->arr[i] = other.arr[i];
	}

}

void SpecialCustomFunction::free()
{
	delete[] arr;
	specialValuesCount = 0;

}


SpecialCustomFunction::SpecialCustomFunction() = default;

SpecialCustomFunction::SpecialCustomFunction(int* arr, size_t specialValuesCount, int(*f)(int value))
{

}

SpecialCustomFunction::SpecialCustomFunction(const SpecialCustomFunction& other)
{
	copyFrom(other);
}

SpecialCustomFunction& SpecialCustomFunction::operator=(SpecialCustomFunction& other)
{
	if(this!=&other)
	{
		free();
		copyFrom(other);
	} 
	return *this;
}

SpecialCustomFunction& SpecialCustomFunction::operator++()
{
	for (size_t i = 0; i < specialValuesCount; i++)
	{
		this->arr[i]++;
	}
	return*this;
}

SpecialCustomFunction SpecialCustomFunction::operator++(int)
{
	SpecialCustomFunction toReturn(*this);
	for (int i = 0; i < specialValuesCount; i++) {
		toReturn[i]++;

	}
	return toReturn;

	
}


