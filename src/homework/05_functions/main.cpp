#include "func.h"
#include "iostream"
using std::string;
using std::cout;
using std::cin;

int display_option_menu()
{
	int pick_option = 3;

	cout<<"1-Get GC Content\n";
	cout<<"2-Get DNA Compliment\n";
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

	return num;
}

int main() 
{
	//This is where we get the DNA string and its size.
    string dna_string = "";

	int option = display_option_menu();
	if(!validate_option(option))
	{
		cout<<"Invalid Option"<<"\n";
		return 1;
	}

    cout<<"Please enter a DNA string (Ex: AGCTATAG): ";
    cin>>dna_string;

	if(option == 1)
	{
		cout<<"The GC Content is: "<<get_gc_content(dna_string)<<"\n";
	}
	if(option == 2)
	{
		cout<<"The DNA Compliment is: "<<get_dna_compliment(dna_string)<<"\n";
	}
	if(option == 3)
	{
		cout<<"Bye :("<<"\n";
	}

	return 0;
}
