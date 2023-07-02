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
* 1. ���丮��
n�� �ڿ����϶� 1 ~ n������ ��
3! = 3 x 2 x 1
5! = 5 x 4 x 3 x 2 x 1

2. �Ǻ���ġ ����
ù �޿� ���� �¾ �䳢 �ѽ�
�� �� �̻��� �� �䳢�� ������ �����ϰ�, �ѽ��� �Ŵ� �� ���� ������ �����ϴ�.
�䳢�� ���� �ʴ´ٸ�....

n��° ���� �䳢�� ���� ���Դϱ�?
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
