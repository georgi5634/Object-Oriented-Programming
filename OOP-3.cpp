// OOP-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
int* createarr(int n)
{
	int* arr = new int[n];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	return arr;

}

int arrlen(int *arr, int size)
{
	int counter = 0;
	for (size_t i = 0; i < size; i++)
	{
		counter++;
	}
	return counter;
}
//int Filesize()
int* ReadFIle(std::ifstream& ifs)
{


}
int main()
{
	int size;
	std::cin >> size;
	int* arr = createarr(size);
	
	std::ofstream ofs("test1.dat", std::ios::out | std::ios::binary);
	if(!ofs.is_open())
	{
		return 2;
	
	}
	ofs.write((const char*)arr,sizeof(int)*size);
	std::ifstream ifs("test1.dat", std::ios::in | std::ios::binary);
	int* arrres = createarr(size);

	//int* arrresult=
	return 0;
}
/*
  
*/

