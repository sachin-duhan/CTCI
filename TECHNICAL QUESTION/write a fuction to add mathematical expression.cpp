#include <iostream>
#include <vector>
using namespace std;

class ExprTem
{
public:
    double cofficeint;
    double exponent;
};

vector<ExprTem> add_(vector<ExprTem> expr1, vector<ExprTem> expr2)
{
    vector<ExprTem> result;
    // solve here!
}

int main()
{
    vector<ExprTem> expr1, expr2, sol = add_(expr1, expr2);
    for (auto a : sol)
        cout << a.cofficeint << " " << a.exponent << endl;
    return 0;
}