#pragma once
#include<vector>
#include <iostream>
#include <random>

class Data
{
private:
	std::vector<int> m_data;


private:
	void setRandArr();

public:
	Data(int size);

	void printArr();
};