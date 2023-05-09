// square matrix pattern questions
// 1 1 1 1 1
// 1 2 2 2 1
// 1 2 2 2 1
// 1 2 2 2 1
// 1 1 1 1 1

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
            if (i == 1 || i == num || j == 1 || j == num)
            {
                cout << "1 ";
            }
            else
            {
                cout << "2 ";
            }
        }
        cout << "\n";
    }
    return 0;
}