#include "Data.h"

//int LocatePivot(std::vector<int>& data, int left, int right)
//{
//	int pivot = 0;
//	int& v1 = data[left];
//	int& v2 = data[right];
//	int& v3 = data[(left + right) / 2]; 
//
//	if (v1 < v2)
//	{
//		int temp = v1;
//		v1 = v2;
//		v2 = temp;
//	}
//	
//	if (v2 < v3)
//	{
//		int temp = v2;
//		v2 = v3;
//		v3 = temp;
//	}
//
//	if (v1 < v2)
//	{
//		int temp = v1;
//		v1 = v2;
//		v2 = temp;
//	}
//
//	return v2;
//}
//
//int partition(std::vector<int>& data, int left, int right)
//{
//	int pivot = LocatePivot(data, left, right);
//	int i = left - 1;
//
//	for (int j = left; j < right; j++) {
//		if (data[j] > pivot) {
//			i++;
//			int temp = data[i];
//			data[i] = data[j];
//			data[j] = temp;
//		}
//	}
//	int temp = data[i + 1];
//	data[i + 1] = data[right];
//	data[right] = temp;
//	return i + 1;
//}
//
//void QuickSort(std::vector<int>& data, int left, int right)
//{
//	if (left >= right)
//		return;
//
//	int part = partition(data, left, right);
//
//	QuickSort(data, left, part - 1);
//	QuickSort(data, part + 1, right);
//}

int main()
{

	//creating random dada sets of different size

	Data dat1(10);
	dat1.printArr();

	Data dat2(100);
	dat2.printArr();

	Data dat3(1000);

	Data dat4(10000);
}