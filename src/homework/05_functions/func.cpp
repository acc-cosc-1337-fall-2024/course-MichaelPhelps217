//add include statements
#include "func.h"
#include "iostream"
using std::string;
using std::cout;
using std::cin;

//add function code here
double get_gc_content(const string &dna_string)
{
	double count_gc = 0;

	for(auto i = 0; i < dna_string.length(); i++)
	{
		if(dna_string[i] == 'G' || dna_string[i] == 'C')
		{
			count_gc++;
		}
	}
	return count_gc/dna_string.length();
}

string reverse_string(string dna)
{
	string temp;
	for(int i = dna.length() - 1; i >= 0; i--)
	{
		temp+=dna[i];
	}
	return temp;
}

string get_dna_compliment(string dna)
{
	string reverse = reverse_string(dna);
	for(int i = 0; i < reverse.length(); i++)
	{
		if(reverse[i] == 'G')
		{
			reverse[i] = 'C';
		}
		else if(reverse[i] == 'C')
		{
			reverse[i] = 'G';
		}
		else if(reverse[i] == 'T')
		{
			reverse[i] = 'A';
		}
		else if(reverse[i] == 'A')
		{
			reverse[i] = 'T';
		}
	}
	return reverse;
}