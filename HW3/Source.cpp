#include "Data.h"


int main()
{

	//creating random dada sets of different size

	Data dat1(10);
	dat1.printArr();

	Data dat2(100);
	dat2.printArr();

	Data dat3(1000);

	Data dat4(10000);

	//testing quicksort

	dat1.quickSort();

	dat1.printArr();
}