#include <iostream>
# include"Hannuo.h"

using namespace std;

int main()
{
    Hannuo h;
    h.soluation();

    Hannuo b(4);
    b.soluation();

    int num;
    cin >> num;

    Hannuo c(num);
    c.soluation();
    return 0;
}
