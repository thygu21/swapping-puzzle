#include <iostream>
#include <string>

using namespace std;

void swap(int value)
{
    int x = value;
    for(int i = 2; i < value + 2; i++) // 2 to 4
    {
        for(int j = 0; j <= i; j++)
        {
            cout <<
        }
    }
    cout << value + 1;
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
