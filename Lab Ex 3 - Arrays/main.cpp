
// Lab Exercise 3 - Arrays
// Instructions:
/*
	[ ] Write a program that performs the following:
		[ ] Prompt the user to input five numbers.
		[ ] Store the input into either an array or a vector.
		[ ] Once the user is finished entering numbers:
			[ ] Display the five numbers in reverse order.
			[ ] Display the highest number entered.
			[ ] Display the lowest number entered.
		[ ] Extra Credit: Allow the user to enter as many numbers as they want(at least 5).
	[ ] Compress(zip) your program and submit it to Blackboard.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int arr[5];
	int highestNum;
	int lowestNum;
	cout << "Enter 5 numbers: ";

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	cout << "Numbers in reverse order" << endl;
	for (int i = 4; i >= 0; i--)
	{
		cout << arr[i] << endl;
	}

	highestNum = arr[0];
	cout << "Highest number: ";
	for (int i = 1; i < 5; i++)
	{
		if (highestNum < arr[i])
		{
			highestNum = arr[i];
		}
	}
	cout << highestNum << endl;


	lowestNum = arr[0];
	cout << "Lowest number: ";
	for (int i = 1; i < 5; i++)
	{
		if (lowestNum > arr[i])
		{
			lowestNum = arr[i];
		}
	}
	cout << lowestNum << endl;


	_getch();
	return 0;
}
