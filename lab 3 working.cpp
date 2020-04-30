#include <iostream>
#include <iomanip>

using namespace std;

int main()

{

	char ch;

	int hours;
	int minutes;

	double cost;

	cout << "Input type of charge, C for Car, T for Trucks, or S for Senior Citizen" << endl;
	cin >> ch;

	cout << "Enter time parked in hours and minutes" << endl;
	cin >> hours >> minutes;


	if (minutes > 30)
		{
		hours += 1;
		}
	
	if (hours <= 16 && hours > 0)
	{
		{
		if (ch == 'S')
		{
			cout << "free of charge" << endl;
		}
		
		else if (ch == 'C')
			{
				if (hours <= 2)
				{
					cost = hours * 0;			
				}

				else if (hours > 2 && hours <= 5)
				{
					cost = (hours - 2) * 1.00;					
				}

				else if (hours > 5 && hours <= 16)
				{
					cost = (hours - 5) * 0.50 + 3.00;					
				}

			}


		else if (ch == 'T')

			{
				if (hours <= 2)
				{
					cost = hours * 0;
				}

				else if (hours > 2 && hours <= 4)
				{
					cost = (hours - 2) * 2.00
				}

				else if (hours > 4 && hours <= 16)
				{
					cost = (hours - 4) * 1.00 + 4.00;
				}
			}

		else cout << "error, charge must be C, T, or S.";

		}	
			cout << fixed << showpoint << setprecision(2);
			cout << "cost=" << /tcost;

	}
		else cout << "error, hours must be greater than 0 and less than 16." << endl;
	
}

	return 0;

