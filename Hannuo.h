# ifndef _HANNUO_H_
# define _HANNUO_H_

# include<stack>

class Hannuo
{
private:
    std::stack<int> A;
    std::stack<int> B;
    std::stack<int> C;
    int floor;
    int stepCount = 0;
    void step(int , char , char , char );
    void printStep(char , char );
public:
    Hannuo(int floor = 3);
    void soluation(void);
};

# endif // _HANNUO_H_
