#include "Data.h"
#include "Timer.h"
#include <fstream>
#include <math.h>

Timer MeasureQuickSort(Data& d)
{
	Timer t;
	t.start();
	d.quickSort();
	t.end();

	return t;
}

void RunTests(std::ofstream& res, Timer (*MeasureSortFunction)(Data& d), bool isRandom)
{
	//5 sizes of data sets 10, 100, 1 000, 10 000, 100 000
	for (int i = 0; i < 6; ++i)
	{
		//20 tests per each size of data 
		for (int j = 0; j < 21; ++j)
		{
			if (i == 0)
			{
				if (j == 0)
				{
					res << ',';
					continue;
				}

				res << "test #" << j << ',';

				continue;
			}

			int data_size = pow(10, i);
			if (j == 0)
			{
				res << "data size " << data_size << ',';
				continue;
			}

			Data d(data_size, isRandom);

			Timer t = (*MeasureSortFunction)(d);

			res << t.getTime() << ',';
		}
		res << '\n';
	}
}

int main()
{
	//experiment #1 -- Quick Sort, random data
	//time measuring (in milliseconds)

	std::ofstream qs_rand_res("./qs_rand_res.csv");
	RunTests(qs_rand_res, MeasureQuickSort, true); //3rd parameter true is resonsible for making data random 
	qs_rand_res.close();

	//experiment #2 -- Quick Sort, ascending data

	std::ofstream qs_asc_res("./qs_asc_res.csv");
	RunTests(qs_asc_res, MeasureQuickSort, false);
	qs_asc_res.close();
}