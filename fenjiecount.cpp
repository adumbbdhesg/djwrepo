#include<iostream>

int count = 1;
int fenjiecount(int n)
{
	if (n == 1)
		return count;
	else
	{
		for (int i = 2; i < n; i++)
		{
			if (n%i == 0)
			{
				count++;
				fenjiecount(n / i);
			}
		}
	}
}

int main()
{
	int x;
	std::cout << "请输入一个整数";
	std::cin >> x;
	fenjiecount(x);
	std::cout << "分解式个数:" << count;
	system("pause");
	return 0;
}
