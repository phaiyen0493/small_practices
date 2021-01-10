/*Name: Yen Pham
Class: CSCE2100
Instructor: ABM Rezbaul Islam
Description: The purpose of this program is to decide the maximum sodas a friend can drink on a thirsty day
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
	int start_bottle;
	int collect_bottle;
	int exchange_requirement;
	int thirsty_day_result;
	int temp;

	//set restrictions for the inputs of soda bottle number in the beginning of the day
	do
	{
		cout << "Enter number of emptied soda bottles your friend has at the start of the day: ";
		cin >> start_bottle;
		if (start_bottle < 0)
		{
			cout << "Number of soda bottle has to be a natural number" << endl;
		}
	} while (start_bottle < 0);

	//set restrictions for the inputs of soda bottle number collected during the day
	do
	{
		cout << "Enter the number of emptied soda bottles your friend has collected during the day: ";
		cin >> collect_bottle;
		if (collect_bottle < 0)
		{
			cout << "Number of soda bottle has to be a natural number" << endl;
		}
	} while (collect_bottle < 0);

	//set restrictions for the inputs of soda bottle number required to get one new soda bottle
	do
	{
		cout << "Enter the number of emptied soda bottles required to buy a new soda: ";
		cin >> exchange_requirement;
		if (exchange_requirement < 0)
		{
			cout << "Number of soda bottle has to be a natural number" << endl;
		}
	} while (exchange_requirement < 0);

	thirsty_day_result = 0;
	do
	{
		//calculate the number of bottles that can be bought
		temp = floor ((start_bottle + collect_bottle) / exchange_requirement);
		collect_bottle = (start_bottle + collect_bottle) % exchange_requirement;
		start_bottle = temp;
		thirsty_day_result += temp;

		// display the steps
		cout << "The boy will buy " << temp << " soda bottles and has " << collect_bottle << " emptied soda bottles remaining" << endl;
		cout << "At this point, the number of soda bottles the boy has bought so far during the day was " << thirsty_day_result << endl;
	} while (temp != 0);
	
	// display the final number of soda bottles needed finally
	cout << endl << "Number of soda bottles needed on the thirsty day: " << thirsty_day_result << endl;

	return 0;
}