#include "Data.h"
#include "Timer.h"
#include <fstream>
#include <math.h>

Timer RunQuickSort(Data& d)
{
	Timer t;
	t.start();
	d.quickSort();
	t.end();

	return t;
}

void RunTests(std::ofstream& res, Timer (*f)(Data& d))
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

			Data d(data_size);
			Timer t = (*f)(d);
			

			res << t.getTime() << ',';
		}
		res << '\n';
	}
}

int main()
{
	//experiment #1 -- Quick Sort
	//time measuring (in milliseconds)

	std::ofstream qs_res("./qs_res.csv");
	RunTests(qs_res, RunQuickSort);
	qs_res.close();


}