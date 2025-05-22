#include <iostream>
using namespace std;

int main()
{

    for (int r = 1; r <= 10; r++)
    {

        for (int a = 1; a <= 10; a++)
        {
            if (r == 5)
            {
                cout << " ";
            }
            else
            {
                cout << r << "," << a << " ";
            }
            
        }
        cout << endl;
    }
}