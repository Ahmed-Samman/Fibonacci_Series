#include<iostream>

using namespace std;

void PrintFibonacciSeries(short Prev1, short Prev2, short Num)
{
	short FibNum = 0;

	if (Num > 0)
	{
		FibNum = Prev1 + Prev2;

		cout << FibNum << "\t";
		Prev1 = Prev2;
		Prev2 = FibNum;

		
		PrintFibonacciSeries(Prev1, Prev2, Num - 1);
	}
}

int main()
{
	

	 PrintFibonacciSeries(1, 0, 10);

	 cout << endl;

	return 0;
}