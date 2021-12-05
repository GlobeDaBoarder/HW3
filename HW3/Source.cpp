#include "Data.h"
#include "Timer.h"


int main()
{

	//creating random dada sets of different size

	Data dat1(10);
	dat1.printArr();

	Data dat2(100);
	dat2.printArr();

	Data dat3(1000);

	Data dat4(10000);

	//time measuring (in milliseconds)

	Timer t1;
	t1.start();

	dat1.quickSort();

	t1.end();

	std::cout << t1.getTime();

}