//write include statement for decisions header
#include "decisions.h"
#include <iostream>

using std::cin;
using std::cout;
using std::string;

//Write code for function(s) code here
void run_option_menu()
{
	cout<<"1-Letter grade using if\n";
	cout<<"2-Letter grade using switch\n";
	cout<<"3-Exit\n";
}
void run_grade_menu()
{
	cout<<"\nEnter a number between 0-100: ";
}

string prompt_user()
{
    auto option = 0;
    auto grade = -1;

	run_option_menu();
	cout<<"Enter option: ";
    cin>>option;
    if(validate_menu_option(option))
    {
        if (option == 1)
        {
            run_grade_menu();
            cin>>grade;
            return get_letter_grade_using_if(grade);
        }
        else if(option == 2)
        {
            run_grade_menu();
            cin>>grade;
            return get_letter_grade_using_switch(grade);
        }
        else if(option == 3)
        {
            return "Bye";
        }
    }
    return "Invalid Option";
}

bool validate_menu_option(int num)
{
    return !(num > 3 || num < 1);
}

string get_letter_grade_using_if(int grade)
{
    string result = "";
    if(grade <= 100 && grade >= 90)
    {
        result = "Your grade is A";
    }
    else if(grade <= 89 && grade >= 80)
    {
        result = "Your grade is B";
    }
    else if(grade <= 79 && grade >= 70)
    {
        result = "Your grade is C";
    }
    else if(grade <= 69 && grade >= 60)
    {
        result = "Your grade is D";
    }
    else if(grade <= 59 && grade >= 0)
    {
        result = "Your grade is F";
    }
    else
    {
        result = "Invalid Number";
    }

    return result;
}

string get_letter_grade_using_switch(int grade)
{
    string result = "";
    switch (grade)
    {
        case 90 ... 100:
            result = "Your grade is A";
            break;
        case 80 ... 89:
            result = "Your grade is B";
            break;
        case 70 ... 79:
            result = "Your grade is C";
            break;
        case 60 ... 69:
            result = "Your grade is D";
            break;
        case 0 ... 59:
            result = "Your grade is F";
            break;
        default:
            result = "Invalid Number";
            break;
    }

    return result;
}