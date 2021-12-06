#include "HeapSort.h"

//private methods

void HeapSort::swap(int& el1, int& el2)
{
    int temp = el1;
    el1 = el2;
    el2 = temp;
}

void HeapSort::heapify(std::vector<int>& data, int heapSize, int index)
{
	int smallest_el_ind = index;
	int left = 2 * index + 1;
	int right = 2 * index + 2;

    if (left < heapSize && data[left] < data[smallest_el_ind])
        smallest_el_ind = left;

    if (right < heapSize && data[right] < data[smallest_el_ind])
        smallest_el_ind = right;

    // Swap and continue heapifying if root is not largest
    if (smallest_el_ind != index) {
        swap(data[index], data[smallest_el_ind]);
        heapify(data, heapSize, smallest_el_ind);
    }
}

void HeapSort::buildMinHeap(std::vector<int>& data)
{
    for (int i = data.size() / 2 - 1; i >= 0; i--)
        heapify(data, data.size(), i);
}


//public static  method

void HeapSort::Sort(std::vector<int>& data)
{
    buildMinHeap(data);

    // Heap sort
    for (int i = data.size() - 1; i >= 0; i--) {
        swap(data[0], data[i]);

        // Heapify root element to get highest element at root again
        heapify(data, i, 0);
    }
}