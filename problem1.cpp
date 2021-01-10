/*Name: Yen Pham
Class: CSCE2100
Instructor: ABM Rezbaul Islam
Description: The purpose of this program is to decide the smallest and largest possible number for the given sticks
*/

#include <iostream>
using namespace std;

int main()
{
// Display name, EUID, e-mail address, the department name, and course number
	cout << "\n\t+----------------------------------------------+" << endl;
	cout << "\t|       Computer Science and Engineering       |" << endl;
	cout << "\t|      CSCE 2100 - Computing Foundation I      |" << endl;
	cout << "\t|   Yen Pham    yhp0005    yenpham@my.unt.edu  |" << endl;
	cout << "\t+----------------------------------------------+" << endl;

// Start the program
	long min_num[101] = {0,0,1,7,4,2,6,8,10,18,22,20,28,68,88,108,188,200};

	int stick_num;
	
	// set restrictions for the input values
	do
	{
		cout << "Enter the number of sticks (0 <= n <= 100): ";
		cin >> stick_num;
		if (stick_num < 0)
		{
			cout << "Number of sticks cannot be a negative number" << endl;
		}
		if (stick_num > 100)
		{
			cout << "Number of sticks cannot exceed 100" << endl;
		}
	} while (stick_num < 0 || stick_num > 100);

	//display smallest number created by the number of sticks
	if (stick_num == 0 || stick_num == 1)
	{
		cout << "There is no number executed by this number of stick" << endl;
	}
	else if (stick_num <= 17 && stick_num != 0 && stick_num != 1)
	{
		// display smallest number of sticks in the array if the input <= 17
		cout << "Smallest number: " << min_num[stick_num] << endl;
	}
	else
	{
		// calculate number of sticks
		for (int i = 18; i <= stick_num; i++)
		{
			min_num[i] = (min_num[i-7]*10) + 8;
		}
		cout << "Smallest number: " << min_num[stick_num] << endl;
	}

	//display largest number created by the number of sticks
	if (stick_num % 2 == 0)
	{
		// calculate largest number of sticks if the input is an even number
		cout << "Largest number: 1";
		for (int i = 0; i < (stick_num - 2)/2; i++)
		{
			cout << "1";
		}
		cout << endl; 
	}
	else
	{
		// calculate largest number of sticks if the input is an odd number
		cout << "Largest number: 7";
		for (int i = 0; i < (stick_num - 3)/2; i++)
		{
			cout << "1";
		} 
		cout << endl;
	}
	return 0;
}