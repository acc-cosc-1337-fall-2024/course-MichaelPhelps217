//write include statements
#include "hwexpressions.h"
#include "iostream"

using std::cin;
using std::cout;

//write namespace using statement for cout

int main()
{
	double meal_amount = 0;
    cout<<"How much did your meal cost? ";
    cin>>meal_amount;

	double tax_amount = 0;
	tax_amount = get_sales_tax_amount(meal_amount);


	double tip_rate = 0;
    cout<<"What percentage did you tip (in decimals)? ";
    cin>>tip_rate;

	double tip_amount = 0;
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	double total = 0;
	total = meal_amount + tax_amount + tip_amount;


	cout<<"Meal Amount: "<<meal_amount<<"\n";
	cout<<"Sales Tax: "<<tax_amount<<"\n";
	cout<<"Tip Amount: "<<tip_amount<<"\n";
	cout<<"Total: "<<total<<"\n";


	return 0;
}
