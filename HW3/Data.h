#pragma once
#include <iostream>
#include <random>
#include "QuickSort.h"

class Data
{
private:
	std::vector<int> m_data;


private:
	void setRandArr();

public:
	Data(int size);

	void printArr();
	void quickSort();
};