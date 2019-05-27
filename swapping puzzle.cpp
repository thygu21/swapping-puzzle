//이름 : 김현구
//학번 : 2015726076

#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

void swap(int value)
{
	vector<int> a;
	int x = value;

	//find path
	for (int i = 0; i < value; i++) // 2 to 4 if value=3
	{
		for (int j = 0; j < i + 2; j++)
		{
			a.push_back(x);
			x += 2 * int(pow(-1, i));
		}
		x -= 1 * int(pow(-1, i));
	}
	x -= 2 * int(pow(-1, value - 1)); // 8 -> 6 if value=3;
	for (int i = 0; i < value; i++) // 3 to 1 if value=3
	{
		for (int j = 0; j < value - i; j++)
		{
			a.push_back(x);
			x -= 2 * int(pow(-1, i)) * int(pow(-1, value - 1));
		}
		x += 3 * int(pow(-1, i)) * int(pow(-1, value - 1));
	}

	//print
	cout << a.size();
	for (int i = 0; i < a.size(); i++)
	{
		if (i % 20 == 0)
			cout << "\n";
		cout << a[i] << " ";
	}
	cout << "\n";
}

int main()
{
	string input;
	int in;
	while (1)
	{
		cin >> input;
		if (input == "EOI")
			return 0;

		in = stoi(input);
		swap(in);
	}
}

