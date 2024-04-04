/**
 *   @file: lab11.cc
 * @author: Thomas Poling
 *   @date: 4/2/24
 *  @brief:
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream inStream;
    ofstream outStream;
    string inputFile = "text.txt";
    inStream.open(inputFile);
    if (inStream.fail())
    {
        cout << "Error file does not exist" << endl;
        exit(0);
    }
    string outputFile = "output.txt";
    outStream.open(outputFile);
    if (outStream.fail())
    {
        cout << "Error file can not be created" << endl;
        exit(0);
    }
    char ch;
    while (!(inStream.eof()))
    {
        inStream.get(ch);
        if (inStream.eof())
        {
            break;
        }

        if (ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5'|| ch == '6' || ch == '7' || ch == '8' || ch == '9')
        {
            ch = '*';
            outStream << ch;
        }
        if (ch == 'a' || ch == 'b' || ch == 'c' || ch == 'd' || ch == 'e' || ch == 'f' || ch == 'g' || ch == 'h' || ch == 'i' || ch == 'j' || ch == 'k' || ch == 'l' || ch == 'm' || ch == 'n' || ch == 'o' || ch == 'p' || ch == 'q' || ch == 'r' || ch == 's' || ch == 't' || ch == 'u' || ch == 'v' || ch == 'w' || ch == 'x' || ch == 'y' || ch == 'z')
        {
            ch = toupper(ch);
            outStream << ch;
        }
        else{
            outStream << ch;
        }
    }
    inStream.close();
    outStream.close();
    return(0);
}
