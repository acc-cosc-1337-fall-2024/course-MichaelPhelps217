//write include statements
#include "repetition.h"
#include<iostream>

using std::cout;
using std::cin;

//write using statements
int display_option_menu()
{
	int pick_option = 3;

	cout<<"1-Factorial\n";
	cout<<"2-GCD\n";
	cout<<"3-Exit\n";
	cout<<"Please pick an option: ";
	cin>>pick_option;

	return pick_option;
}

bool validate_option(int num)
{
	if(std::isdigit(num) == 0)
	{
    	return !(num > 3 || num < 1);
	}
	return false;
}

int get_int_from_user()
{
	int num = 0;
	cout<<"Please enter a number: ";
	cin>>num;
	cin.clear();
	cin.ignore(999, '\n');

	return num;
}

int main() 
{
	do
	{
		int option = display_option_menu();
		if(validate_option(option))
		{
			if(option == 3)
			{
				std::string response = "no";
				cout<<"Are you sure you want to exit (yes/no)? ";
				cin>>response;
				if(response == "yes")
				{
					exit(0);
				}
			}
			if(option == 1)
			{
				int x = get_int_from_user();
				if(!std::isdigit(x) && x > 0)
				{
					int result = factorial(x);
					cout<<"Result is: "<<result<<"\n\n";
				}
				else
				{
					cout<<"\n ***** Invalid Input *****"<<"\n\n";
				}
			}
			if(option == 2)
			{
				bool fail = true;
				int x = get_int_from_user();
				if(!std::isdigit(x) && x > 0)
				{
					int y = get_int_from_user();
					if(!std::isdigit(y) && y > 0)
					{
						int result = gcd(x, y);
						cout<<"Result is: "<<result<<"\n\n";
						fail = false;
					}
				}
				if(fail)
				{
					cout<<"\n\n ***** Invalid Input *****"<<"\n\n";
				}
			}
			cin.clear();
//			cin.ignore(999, '\n');
		}
		else
		{
			cout<<"\n ***** Invalid Input *****"<<"\n\n";
			cin.clear();
			cin.ignore(999, '\n');
		}
	} while (true);

	return 0;
}