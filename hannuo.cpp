# include<iostream>
# include<stack>
# include"Hannuo.h"
using namespace std;

Hannuo::Hannuo(int floor)
{
    int i;
    this->floor = floor;
    for (i = floor; i > 0; i--)
    {
        A.push(i);
    }
}

void Hannuo::step(int n, char towerA, char towerB, char towerC)
{
    if (n == 0)
    {
        return ;
    }
    step(n - 1, towerA, towerC, towerB);
    printStep(towerA, towerC);
    step(n - 1, towerB, towerA, towerC);

}

void Hannuo::printStep(char a, char b)
{
    int brick;
    stepCount++;
    if (a == 'a')
    {
        brick = A.top();
        A.pop();
    }
    else if (a == 'b')
    {
        brick = B.top();
        B.pop();
    }
    else
    {
        brick = C.top();
        C.pop();
    }

    if (b == 'a')
    {
        A.push(brick);
    }
    else if (b == 'b')
    {
        B.push(brick);
    }
    else
    {
        C.push(brick);
    }
    cout << brick << " : " << a << "-->" << b << endl;
}

void Hannuo::soluation(void)
{
    step(floor, 'a', 'b', 'c');
    cout << "²½Êý£º" << stepCount << endl;
}
