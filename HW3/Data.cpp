#include "Data.h"

//private methods

void Data::setRandArr()
{
	std::random_device dev;
	std::mt19937 rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type> dist(1, m_data.size());

	for (int& el : m_data)
	{
		el = dist(rng);
	}

}

//public methods

Data::Data(int size)
{
	m_data.resize(size);
	this->setRandArr();
}

void Data::printArr()
{
	for (int& el : m_data)
	{
		std::cout << el << ' ';
	}
	std::cout << std::endl;
}

void Data::quickSort()
{
	QuickSort::Sort(m_data, 0, m_data.size() - 1);
}