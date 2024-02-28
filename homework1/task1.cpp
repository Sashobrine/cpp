#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Enter your six digit number: ";
	cin >> number;

	if (number < 100000 || number > 999999) {
		cout << "Your number isn`t six digit";
		return 1;
	}

	int first_half = 0;
	int second_half = 0;
	
	for (int i = 0; i < 6; i++) {
		int result = number % 10;
		number /= 10;
		if (i < 3) {
			first_half += result;
		}
		else 
		{
			second_half += result;
		}
	}
	if (first_half == second_half) {
		cout << "it`s lucky number" << endl;
	}
	else
	{
		cout << "it`s not lucky number(((" << endl;
	}
	return 0;
}