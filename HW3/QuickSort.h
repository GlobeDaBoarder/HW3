#pragma once
#include <vector>

class QuickSort
{
private:
	static int locatepivot(std::vector<int>& data, int left, int right);

	static int partition(std::vector<int>& data, int left, int right);

public:
	QuickSort() = delete;

	static void Sort(std::vector<int>& data, int left, int right);
};



