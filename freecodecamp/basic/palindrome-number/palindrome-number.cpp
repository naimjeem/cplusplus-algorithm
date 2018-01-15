#include <iostream>

using namespace std;

int main() {
	int num, theNum, reverseNum = 0;

	cout << "Enter a number : ";
	cin >> num;

	theNum = num;

	while (num != 0)	{
		reverseNum = reverseNum * 10 + (num % 10);
		num = num / 10;
	}

	if (reverseNum == theNum)	{
		cout << "Number is Palindrome";
	}	else	{
		cout<<"Number is not Palindrome";
	}
}
