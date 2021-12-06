#pragma once
#include <vector>

class HeapSort
{
private:
	static void buildMinHeap(std::vector<int>& data);

	static void heapify(std::vector<int>& data, int heapSize, int index);

	static void swap(int& el1, int& el2);

public:
	HeapSort() = delete;

	static void Sort(std::vector<int>& data);
};