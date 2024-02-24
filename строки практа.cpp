#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

int main()
{
    int option;
    string word;

    string removeVovels(string str);
    string removeConsonants(string str);

    cout << "Enter a word: ";
    cin >> word;
    
    cout << "\n\nWhat to do with word '" << word << "', which you entered?\n";
    cout << "\t1. Reverse it.\n";
    cout << "\t2. Remove vowels from it.\n";
    cout << "\t3. Remove consonants from it.\n";
    cout << "\t4. Shuffle its letters.\n";
    cin >> option;
    switch (option)
    {
        case 1:
            reverse(word.begin(), word.end());
            cout << "\n-> " << word << endl;
            break;
        case 2:
            word = removeVovels(word);
            cout << "\n-> " << word << endl;
            break;
        case 3:
            word = removeConsonants(word);
            cout << "\n-> " << word << endl;
            break;
        case 4:
            random_shuffle(word.begin(), word.end());
            cout << "\n-> " << word << endl;
            break;
        default:
            cout << "\nWell... it means you've chosen doing nothing.\n";
            break;
    }
}

string removeVovels(string str)
{
    vector<char> vovels = { 'a', 'i', 'o', 'e', 'u', 'A', 'I', 'O', 'E', 'U'};
    for (int i = 0; i < str.length(); i++)
    {
        if (find(vovels.begin(), vovels.end(), str[i]) != vovels.end())
        {
            str = str.replace(i, 1, "");
            i -= 1; 
        }
    }
    return str;
}

string removeConsonants(string str)
{
    vector<char> vovels = { 'q', 'w', 'r', 't', 'y', 'p', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm',
                            'Q', 'W', 'R', 'T', 'Y', 'P', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'Z', 'X', 'C', 'V', 'B', 'N', 'M' };
    for (int i = 0; i < str.length(); i++)
    {
        if (find(vovels.begin(), vovels.end(), str[i]) != vovels.end())
        {
            str = str.replace(i, 1, "");
            i -= 1;
        }
    }
    return str;
}

