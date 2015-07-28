#include <iostream>

using namespace std;

const long MAX_DECIMAL = 1099511627776;

void user_hexIn(char hex[]);
//Pass character array to function
//Return user defined array containing hexadecimal numeral

char restart(char run_again);

int main()
{
    char hex_charIn1[10], hex_charIn2[10];
    int hex_intIn1[10], hex_intIn2[10];
    char run_again = 'y';
    
    while(run_again != 'N' && run_again != 'n')
    {
        user_hexIn(hex_charIn1);
        run_again = restart(run_again);
        cin.clear();
        cin.ignore(1000, '\n');
    }
    
    
   return 0;
}

void user_hexIn(char hex[])
{
    char character;
    cout << "Please input a hexadecimal numeral\n";
    for(int i = 0;character!='\n';i++)
    {
        cin.get(character);
        if(character == '\n')
        {
            hex[i] = '\0';
        }
        else
            hex[i] = character;
    }
    cout << endl;
    for(int i = 0;hex[i]!='\0';i++)
    {
        cout << hex[i];
    }
    cout << endl;
}

char restart(char run_again)
{
    cout << "Would you like to run this program again?\n";
    cin >> run_again;
    return run_again;
}