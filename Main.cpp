#include <iostream>

using namespace std;


int Factorial(int array[], int a);
int Pivonachi();

int main()
{
	int FArr[] = { 1,1,2,3 };
	int PArr[] = {0,0,0,0,0,0};

	Factorial(FArr, 3);
	cout << Factorial(FArr, 3) << endl;

	
}


/*
* 1. 팩토리얼
n이 자연수일때 1 ~ n까지의 곱
3! = 3 x 2 x 1
5! = 5 x 4 x 3 x 2 x 1

2. 피보나치 수열
첫 달에 새로 태어난 토끼 한쌍
두 달 이상이 된 토끼는 번식이 가능하고, 한쌍은 매달 한 쌍의 새끼를 낳습니다.
토끼가 죽지 않는다면....

n번째 달의 토끼의 수는 얼마입니까?
*/


int Factorial(int array[], int a)
{
	if (a <= 0)
	{
		return 1;
	}
		
	return array[a] * Factorial(array, a - 1);
}

int Pivonachi(int array[], int a, int input)
{
	cin >> input;
	if (a >= input)
	{
		return 0;
	}

	return array[a];
}
