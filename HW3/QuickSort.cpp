#include "QuickSort.h"

//private static methods

int QuickSort::locatepivot(std::vector<int>& data, int left, int right)
{
	int pivot = 0;
	int& v1 = data[left];
	int& v2 = data[right];
	int& v3 = data[(left + right) / 2];

	if (v1 < v2)
	{
		int temp = v1;
		v1 = v2;
		v2 = temp;
	}

	if (v2 < v3)
	{
		int temp = v2;
		v2 = v3;
		v3 = temp;
	}

	if (v1 < v2)
	{
		int temp = v1;
		v1 = v2;
		v2 = temp;
	}

	return v2;
}

int QuickSort::partition(std::vector<int>& data, int left, int right)
{
	int pivot = locatepivot(data, left, right);
	int i = left - 1;

	for (int j = left; j < right; j++) {
		if (data[j] > pivot) {
			i++;
			int temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	int temp = data[i + 1];
	data[i + 1] = data[right];
	data[right] = temp;
	return i + 1;
}

//public static method 

void QuickSort::Sort(std::vector<int>& data, int left, int right)
{
	if (left >= right)
		return;

	int part = partition(data, left, right);

	Sort(data, left, part - 1);
	Sort(data, part + 1, right);
}