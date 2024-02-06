#include "hwexpressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
double get_sales_tax_amount(double meal_amount)
{
	auto tax = tax_rate * meal_amount;
	return tax;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
	auto tip_amount = tip_rate * meal_amount;
	return tip_amount;
}

