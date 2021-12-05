#include<vector>
#include <iostream>
#include <random>

void printArr(std::vector<int>& arr)
{
	for (int& el : arr)
	{
		std::cout << el << ' ';
	}
	std::cout << std::endl;
}

void setRandArr(std::vector<int>& arr)
{
	std::random_device dev;
	std::mt19937 rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type> dist(1, arr.size()); 

	for (int& el : arr)
	{
		el = dist(rng);
	}

}

int LocatePivot(std::vector<int>& data, int left, int right)
{
	int pivot = 0;
	int& v1 = data[left];
	int& v2 = data[right];
	int& v3 = data[(left + right) / 2]; 

	if (v1 > v2)
	{
		int temp = v1;
		v1 = v2;
		v2 = temp;
	}
	
	if (v2 > v3)
	{
		int temp = v2;
		v2 = v3;
		v3 = temp;
	}

	if (v1 > v2)
	{
		int temp = v1;
		v1 = v2;
		v2 = temp;
	}

	return v2;
}

int partition(std::vector<int>& data, int left, int right)
{
	int pivot = LocatePivot(data, left, right);
	int i = left - 1;


	return 0;
}

void QuickSort(std::vector<int>& data, int left, int right)
{
	if (left >= right)
		return;

	int part = partition(data, left, right);

	QuickSort(data, left, part - 1);
	QuickSort(data, part + 1, right);
}

int main()
{

	//creating random dada sets of different size

	std::vector<int> arr1(10);
	setRandArr(arr1);
	printArr(arr1);

	std::vector<int> arr2(100);
	setRandArr(arr2);
	printArr(arr2);

	std::vector<int> arr3(1000);
	setRandArr(arr3);

	std::vector<int> arr4(10000);
	setRandArr(arr4);

	//run tests 
	
	QuickSort(arr1, 0, arr1.size() - 1);
}