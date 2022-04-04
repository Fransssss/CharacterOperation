// Title : Character operation - <cctype>
// Purpose :
// Enjoy the process - Practice makes Improvement
// Author : Fransiskus Agapa

#include <iostream>
#include <cctype>                                              // important since we deal with characters

using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::string;
using std::isalpha;
using std::isdigit;
using std::isspace;
using std::islower;
using std::isupper;
using std::toupper;
using std::tolower;

int main() {
    string lineToIdentify;
    int alphaCount = 0;
    int digitCount = 0;
    int spaceCount = 0;

    cout << "\nThis program will scan and identify these following from the input :" <<  endl;
    for(size_t i = 0; i < 3; ++i)                // For-loop here is no necessary but so much fun to do!
    {
        if( i == 0)
        {
            cout << i+1 << ") " << " Check if the input has an alphabetic (isalpha) " << endl;
        }

        if(i == 1)
        {
            cout << i+1 << ") " << " Check if the input has any digit (isdigit) " << endl;
        }

        if(i == 2)
            cout << i+1 << ") " << " Check if the input has any space (isspace) " << endl;
    }

    cout << " ...and change any lowercase to uppercase && uppercase to lowercase!" << endl;
    cout << endl << " Write random input :" << endl;
    cout << " Your input [ ";
    getline(cin,lineToIdentify); cout << " ]";

    for(size_t i = 0; i < lineToIdentify.size();++i)
    {
        if(isalpha(lineToIdentify.at(i)))
        {
            alphaCount++;
        }

        if(isdigit(lineToIdentify.at(i)))
        {
            digitCount++;
        }
        if(isspace(lineToIdentify.at(i)))
        {
            spaceCount++;
        }

        if(isupper(lineToIdentify.at(i)))                  // change any lower case to upper case
        {
            lineToIdentify.at(i) = tolower(lineToIdentify.at(i));
        }

        if(islower(lineToIdentify.at(i)))                  // change any upper case to lower case
        {
            lineToIdentify.at(i) = toupper(lineToIdentify.at(i));
        }

    }

    cout << "\n Your input has : " << endl;
    for(size_t i = 0;i < 3; ++i)
    {
        if(i == 0)
        {
            cout << i + 1 << ".) " << alphaCount << " alphabetical character/s" << endl;
        }

        if(i == 1)
        {
            cout << i + 1 << ".) " << digitCount << " numerical character/s" << endl;
        }
        if(i == 2)
        {
            cout << i + 1 << ".) " << spaceCount << " space/s" << endl;
        }
    }

    cout << "\n The input after scanning : " << endl;
    cout << "[ "<< lineToIdentify << " ]" << endl;

    return 0;
}
