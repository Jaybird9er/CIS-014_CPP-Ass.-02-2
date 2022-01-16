#include <iostream>
using namespace std;

/**
* FUNCTION NAME: canAlwaysWin
* PURPOSE: the function takes in the total number of pebbles and computes
* whether player 1 can win or not when taking away pebbles in increments of 1-6.
* PARAMETER: int n
* RETURN VALUE: boolean: true or false
* FUNCTION SIGNATURE: bool canAlwaysWin(int n)
*/

bool canAlwaysWin(int n)
{
    cout << boolalpha;
    n %= 7;
    return n;
}

int main()
{
    cout << canAlwaysWin(14);
    return 0;
}
