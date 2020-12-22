
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream f ("primer.txt");
    int stringCount = 0;
    while (f)
    {
        string s;
        getline(f, s);
        int wordCount = 1;
        int simbolCount = s.length();
        if (simbolCount > 0)
        {
            stringCount++;
            cout << simbolCount << "  " << wordCount << endl;
            continue;
        }
        for (int i = 0; i < simbolCount; i++)
        {
            if (s[i] == ' ')
            {
                wordCount++;
            }
        }
        
    }
    cout << stringCount << endl;
}

