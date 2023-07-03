#include <iostream>

using namespace std;


int Factorial(int array[], int a);

int Fivonachi(int n);

int main()
{
	int FArr[] = { 1,1,2,3,4,5 };
	
	Factorial(FArr, 3);
	cout << Factorial(FArr, 3) << endl;

	Factorial(FArr, 5);
	cout << Factorial(FArr, 5) << endl;
	
	int input{0};
	cin >> input;
	Fivonachi(input);
	cout << Fivonachi(input) << endl;
}

int Factorial(int array[], int a)
{
	if (a <= 0)
	{
		return 1;
	}
		
	return array[a] * Factorial(array, a - 1);
}

int Fivonachi(int n)
{
	if (n <= 1 )
	{
		return n;
	}
	
	return Fivonachi(n - 1) + Fivonachi(n - 2);
}
