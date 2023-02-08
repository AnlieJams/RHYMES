#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string word;
    char rifma[200];
    FILE* f;
    fopen_s(&f, "gistfile1.txt", "r");

    cout << "¬ведите слово, ваще любое: ";
    cin >> word;

    while (true)
    {
        fgets(rifma, 199, f);
        string temp = rifma;
        if (feof(f) != 0)
            break;
        if (word[word.length() - 2] == temp[temp.length() - 3] && word[word.length() - 1] == temp[temp.length() - 2])
            cout << temp;
    }
    fclose(f);
}