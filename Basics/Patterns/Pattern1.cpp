/*

****
****
****
****

Rules:
- for, for outer loop, count no. of lines.
- for inner loop, focus on the columns & connect them somehow to the rows.
- print "*"

*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4 ;j ++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}