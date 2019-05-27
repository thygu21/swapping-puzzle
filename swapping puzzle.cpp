#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void swap(int value)
{
	//print value

	//print path
	int x = value;
	int lineC = 0; //20 to enter
	for (int i = 0; i < value; i++) // 2 to 4 if value=3
	{
		for (int j = 0; j < i + 2; j++)
		{
			cout << x << " ";
			lineC++;
			x += 2 * int(pow(-1, i));

			if (lineC == 20)
			{
				cout << "\n";
				lineC = 0;
			}
		}
		x -= 1 * int(pow(-1, i));
	}
	x -= 2 * int(pow(-1, value - 1)); // 8 -> 6 if value=3;
	for (int i = 0; i < value; i++) // 3 to 1 if value=3
	{
		for (int j = 0; j < value - i; j++)
		{
			cout << x << " ";
			lineC++;
			x -= 2 * int(pow(-1, i)) * int(pow(-1,value - 1));
			if (lineC == 20)
			{
				cout << "\n";
				lineC = 0;
			}
		}
		x += 1 * int(pow(-1, i)) * int(pow(-1, value - 1));
		if (value % 2 == 0 && i % 2 == 0)
			x -= 2;
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

// n부터 2씩 한번증가 -> n+2 = a
// n+2보다 1큰 n+3부터 2씩 두번 감소 -> n-1 = b
// n-1보다 1작은 n-2부터 2씩 세번 증가 -> n+6
// 거꾸로
// b다시 출력
// a다시 출력
// n+1출력

//2 3 4 3 2 1 -> 3
//2 3 4 5 4 3 2 1 -> 4

//3
//3 5/ 6 4 2 /1 3 5 7 /6 4 2 /3 5 /4

//4
//4 6/ 7 5 3 /2 4 6 8 /9 7 5 3 1 /2 4 6 8 /7 5 3 /4 6 /5

// 1 2 -> 3 -> 3 5 6 4 2 1 3 5 7 6 4 2 3 5 4 
// 3 3
// 3 2
// 1

// 1 2 -> 2
// 2 2
// 1

// 1 2 -> 4
// 3 4
// 4 4
// 3 2
// 1
