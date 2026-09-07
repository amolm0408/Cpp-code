#include <iostream>
using namespace std;
void accept(int &m, int ary1[])
{
    cout << "Enter desired size of your array: ";
    cin >> m;
    cout << "Enter elements of array:\n";
    for (int i = 0; i < m; i++)
        cin >> ary1[i];
}
void display(int m, int ary1[])
{
    for (int k = 0; k < m; k++)
        cout << ary1[k] << " ";
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void Sort(int n, int ary2[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (ary2[j] > ary2[j + 1])
            {
                swap(ary2[j], ary2[j + 1]);
            }
        }
    }
}


int main()
{
    int n, array[10];
    accept(n, array);
    Sort(n, array);
    cout << "\nSorted Array: ";
    display(n, array);
    return 0;
}
