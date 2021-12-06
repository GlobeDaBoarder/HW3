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

void Data::setAscending()
{
	for (int i = 0; i < m_data.size(); ++i)
	{
		m_data[i] = i;
	}
}

//public methods

Data::Data(int size, bool is_random)
{
	m_data.resize(size);
	if (is_random)
	{
		this->setRandArr();
		return;
	}
		
	this->setAscending();

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