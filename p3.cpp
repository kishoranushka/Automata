// square matrix pattern questions
// *
// * *
// * * *
// * * * *
// * * * * *

#include <iostream>
using namespace std;
int main()
{
    int i, j, num;
    cout << "Enter the number of rows : ";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            if (i >= j)
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}