#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    const int REALM = 5, ACCOUNT_NAME = 5;
    string server[REALM][ACCOUNT_NAME];
    int next = 0, score[5], max;
    
    //Account Name 0 will be reserved for the Realm names
    server[0][0] = "Ner'Zhul";
    server[1][0] = "Malygos";
    server[2][0] = "Tichondrius";
    server[3][0] = "Blackrock";
    server[4][0] = "Kil'Jaeden";
    
    for(int realm = 0; realm < 1; realm++)
    {
        for(int account_name = 1; account_name < 5; account_name++)
        {
            cout << "Please enter the name of this account #"
                 << account_name << " on " << server[realm][0] << endl;
            cin >> server[realm][account_name];
            cout << endl;
        }
    }
    
    for(int realm = 0; realm < 1; realm++)
    {
        cout << "The players on " << server[realm][0] << " are: ";
        for(int account_name = 1; account_name < 5; account_name++)
        {
            cout << server[realm][account_name] << " ";
        }
    }
   return 0;
}

