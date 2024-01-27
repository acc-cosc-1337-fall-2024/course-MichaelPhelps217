//write include statements
#include <iostream>
#include <data_types.h>


//write namespace using statement for cout
using std::cout;
using std::cin;

int main()
{
	int num = 0;
	//this creates a integer variable called "num".

	cout<<"Enter a number: ";
	//in the terminal this will prompt the user to type in a random number.

	cin>>num;
	// cin (cin being what the user input will be stored in "num" replacing the original value of 0).

	int result = 0;
	//this creates a integer variable called "result".

	result = multiply_numbers(num);
	//the result will use "multiply_numbers" function from "data_types.h" and multiply the users
	//inputed number/integer with the "int num2 = 5;" in order to get the new integer value.

	cout<<"Value is: "<<result<<"\n";
	// cout will display the result to the terminal.
	//"\n" is for this to be displayed on a new line.

	int num1 = 4;
	result = multiply_numbers(num1);
	cout<<"Value is: "<<result<<"\n";
	//this is similar to to code above, the only difference is that I don't ask the user for a
	//number, instead I just created my own integer variable, "int num1 = 4;".

	return 0;
}
