#pragma once
#include <iostream>
#include <random>
#include "QuickSort.h"
#include "HeapSort.h"

class Data
{
private:
	std::vector<int> m_data;


private:
	void setRandArr();
	void setAscending();

public:
	Data(int size, bool is_random);

	void printArr();
	void quickSort();
	void heapSort();
};