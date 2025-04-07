#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j * j << "\t";
        }
        cout << endl;
    }
    
    return 0;
}

/*
0
0	1
0	1	4
0	1	4	9
0	1	4	9	16
0	1	4	9	16	25
*/