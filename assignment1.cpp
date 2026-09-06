#include <iostream>
using namespace std;


int fac(int m)
{
        int res = 1;


        for (int i = m; i >= 1; i--)
        {
                res = res * i;
        }


        return res;
}


int BinoCoeff(int m, int r)
{
        int ans = fac(m) / (fac(r) * fac(m - r));


        return ans;
}


void printPascal(int d)
{
        for (int i = 0; i < d; i++)
        {


                for (int ineedspace = 0; ineedspace < d - i - 1; ineedspace++)
                {
                        cout << "\t";
                }




                for (int j = 0; j <= i; j++)
                {
                        cout << BinoCoeff(i, j) << "\t\t";
                }


                cout << endl;
        }
}


int main()
{
        int rows;


        cout << "Enter desired number of rows: ";
        cin >> rows;


        printPascal(rows);


        return 0;
}