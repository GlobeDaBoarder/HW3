#include "Data.h"
#include "Timer.h"
#include <fstream>
#include <math.h>


int main()
{
	//experiment #1 -- Quick Sort
	//time measuring (in milliseconds)

	std::ofstream qs_res;
	qs_res.open("./qs_res.csv");

	//5 sizes of data sets 10, 100, 1 000, 10 000, 100 000
	for (int i = 0; i < 5; ++i)
	{
		//20 tests per each size of data 
		for (int j = 0; j < 20; ++j)
		{
			Data d(pow(10, (i + 1))); 
			Timer t;
			t.start();
			d.quickSort();
			t.end();

			qs_res << t.getTime() << ';';
		}
		qs_res << '\n';
	}



}