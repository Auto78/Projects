// First Day of the Advant of Code

// Preprocessor Directives
#include <iostream>
#include <fstream>
#include <limits>
#include <vector>

using namespace std;

// Const Variables
const int SIZE = 20000;

// Intro to main Code;
int main()
{
    int numbers[SIZE];
    int highestNumber = 0;
    int elementsInFile = 0;
    vector<int> elfTotal;
    int sum = 0;
    int highestTotal = 0;

    ifstream inFile;

    inFile.open("input.txt");
    if (!inFile.is_open())
    {
        cout << "Error File Doesn't Exist\n";
    }

    while (!inFile.eof())
    {
        inFile >> numbers[elementsInFile];
        if (!inFile)
        {
            
            inFile.clear();
            inFile.ignore(numeric_limits<streamsize>::max(), '\n');

            for (int i = 0; i < elementsInFile; i++)
            {
                sum += numbers[i];
                elfTotal.push_back(sum);
            }

            sum = 0;
        }
        elementsInFile++;
    }

    for (int i = 0; i < elementsInFile; i++)
    {
        if (numbers[i] > highestNumber)
        {
            highestNumber = numbers[i];
        }
    }
    for (size_t i = 0; i < elfTotal.size(); i++)
    {
        if (elfTotal[i] > highestTotal)
        {
            highestTotal = elfTotal[i];
        }
    }

    cout << "The highest Number is " << highestNumber << endl;
    cout << "The Elf with the highest total is: " << highestTotal << endl;
    cout << elfTotal[0] << endl;
}
