#include<iostream>

using namespace std;

void PrintFibonacciSeries(short Num)
{
	short FibNum = 0, Prev1 = 1, Prev2 = 1;

	cout << Prev1 << "    " << Prev1 << "    ";

	for (short i = 2; i < Num; i++)
	{
		
		FibNum = Prev1 + Prev2;

		cout << FibNum << "    ";

		Prev1 = Prev2;
		Prev2 = FibNum;
	
	}
}

int main()
{
	
	PrintFibonacciSeries(10);

	cout << endl;

	return 0;
}