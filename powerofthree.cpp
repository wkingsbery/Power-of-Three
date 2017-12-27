#include "powerofthree.h"


PowersOfThree::PowersOfThree()
{
	target = 0;
	interval = 0;
	cout << "constr" << endl;
	for (int i = 0; i < 10; i++)
	{
		numberz[i] = 2;
		cout << numberz[i];
	}
}

PowersOfThree::PowersOfThree(int numberA)
{
	target = numberA;
	interval = powerInterval(numberA);
	for (int i = 0; i < 10; i++)
        {
                numberz[i] = 2;
        //        cout << numberz[i];
        }
}

void PowersOfThree::calculateIntervals()
{
	int goal = 0;
	int count = 0;
	int currTarget = target;
	if (currTarget < 0)
	{
		currTarget = currTarget * -1;
	}
	while (goal != target)
	{
		numberz[count] = powerInterval(currTarget);
		//cout << numberz[count];
		if (target < 0)
		{
			goal = goal - numberz[count];
		}
		else
		{
			goal = goal + numberz[count];
		}
		currTarget = currTarget - numberz[count];
		//cout << currTarget << endl;
		count++;
	
	}
	if (target < 0)
	{
		for (int i = 0; i < count; i++)
		{
			numberz[i] = numberz[i] *-1 ;
		}
	}
	//for (int i = 0; i < 10; i++)
	//{
	//	if (numberz[count] == 0)
	//	{
	//		cout << numberz[count];
	//	}
	//}
}

void PowersOfThree::printArray()
{

	cout << target << " = ";
	for (int i = 0; i < 10; i++)
	{
		if (numberz[i] != 2)
		{
			if (numberz[i] > 0 && i != 0)
			{
				cout << " + ";
			}
			else
			{
				cout << " ";
			}
			cout << numberz[i];
		}
	}
}

int PowersOfThree::powerInterval(int number)
{
	if (number >= -121 && number <= -41)
	{
		interval = -81;
	}
	else if (number >= -40 && number <= -14)
        {
                interval = -27;
        }
	else if (number >= -13 && number <= -5)
        {
                interval = -9;
        }
	else if (number >= -4 && number <= -2)
        {
                interval = -3;
        }
	else if (number == -1)
	{
		interval = -1;
	}
	else if (number == 1)
	{
		interval = 1;
	}
	else if (number <= 121 && number >= 41)
        {
                interval = 81;
        }
	else if (number <= 40 && number >= 14)
        {
                interval = 27;
        }
	else if (number <= 13 && number >= 5)
        {
                interval = 9;
        }
	else if (number <= 4 && number >= 2)
        {
                interval = 3;
        }
	return interval;
}
