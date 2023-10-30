#include<iostream>

using namespace std;

int main() {
	int num = 1;

	do
	{
		cout << num << " ";

		num *= 2;

	} while (num < 1000);

	return 0;
}