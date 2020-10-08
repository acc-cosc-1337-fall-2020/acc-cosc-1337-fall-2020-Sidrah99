#include "dna.h"
#include <string>
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double  get_gc_content(const std::string &dna)
{
    double str = dna.length();
    double total = 0;
    for(double i=0; i<=str; i++)
    {
        if(dna[i] == 'C' || dna[i] == 'c' || dna[i] == 'G' || dna[i] == 'g')
        {
            total++;
        }
    }

    return total/str;
    
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

std::string get_reverse_string(std::string dna)
{
    std::string new_dna;
    for(int i=dna.length()-1; i>=0; i--)
    {
     new_dna.push_back(dna[i]);
    }
    
    return new_dna; 
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
std::string get_dna_complement(std::string dna)
{
   std::string complement = get_reverse_string(dna);
   for(int i=0; i<=dna.length()-1; i++)
   {
       if(complement[i] == 'A' || complement[i] == 'a')
        {
            complement[i] = 'T';
        }
        else if(complement[i] == 'T' || complement[i] == 't')
        {
            complement[i] = 'A';
        }
        else if(complement[i] == 'G' || complement[i] == 'g')
        {
            complement[i] = 'C';
        }
        else if(complement[i] == 'C' || complement[i] == 'c')
        {
            complement[i] = 'G';
        }
   }
    
    return complement; 
}
