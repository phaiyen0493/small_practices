/*Name: Yen Pham
Class: CSCE2100
Instructor: ABM Rezbaul Islam
Description: The purpose of this program is to decide the minimum magic number
*/

#include <iostream>
#include <cmath>
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
	int input_num;
	int magic_num;
	int sum;
	int temp_num;
	bool found = false;

	//set restricions for input values
	do
	{
		cout << "Enter a positive integer number that is less than or equal to 1000000: ";
		cin >> input_num;
		if (input_num > 1000000)
		{
			cout << "Error: You entered a value that is larger than 1000000" << endl; 
		}
		if (input_num <= 0)
		{
			cout << "Error: You entered a value that is not a positive number" << endl; 
		}

	} while (input_num > 1000000 || input_num <=0);

	// find magic number
	for (int i = input_num; i <= 1000000; i++)
	{
		sum = 0;
		temp_num = i;
		// calculate the sum of digits of a number
		while (temp_num != 0)
		{
			sum = sum + (temp_num % 10);
			temp_num = temp_num/10;
		}

		// decide if the number is divisible by the sum of its digits
		if (i % sum == 0)
		{
		    found = true;
			magic_num = i; 
			// display the magic number
			cout << "Smallest Magic Number that is greater or equal to " << input_num << " is: " << magic_num << endl;
			break;
		}
	}
		
	if (found == false)
	{
		// display if magic number cannot be found
		cout << "There is no Magic Number that is greater or equal to " << input_num << " and less than 1000000" << endl;
	}
	
	return 0;
}