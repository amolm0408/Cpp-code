#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char ch;

    ifstream fin("source.txt");
    ofstream fout("destination.txt");

    if (!fin.is_open())
    {
        cout << "Source file not found!";
        return 0;
    }

    if (!fout.is_open())
    {
        cout << "Destination file cannot be opened!";
        fin.close();
        return 0;
    }

    while (fin.get(ch))
    {
        fout << ch;
    }

    cout << "File copied successfully!";

    fin.close();
    fout.close();

    return 0;
}
