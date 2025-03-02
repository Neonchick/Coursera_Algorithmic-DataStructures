#include <iostream>
#include <vector>

using std::vector;

vector<int> optimal_summands(int n)
{
	vector<int> summands;
	int b = n;
	for (int i = 1; i <= b; i++)
		if (i >= n / 2 + n % 2)
		{
			summands.push_back(n);
			return summands;
		}
		else
		{
			summands.push_back(i);
			n -= i;
		}
	return summands;
}

int main()
{
	int n;
	std::cin >> n;
	vector<int> summands = optimal_summands(n);
	std::cout << summands.size() << '\n';
	for (size_t i = 0; i < summands.size(); ++i)
	{
		std::cout << summands[i] << ' ';
	}
}
