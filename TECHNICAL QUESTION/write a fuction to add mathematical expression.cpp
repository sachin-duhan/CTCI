#include <iostream>
#include <vector>
using namespace std;

/*
** QUESTION STATEMENT
! problem statement 
* given two expression of the form a*X^a + b*x^b and c*x^x - d*x^d 
* we are required to return the sum the two expressions
*/
class ExprTem
{
public:
    double cofficeint;
    double exponent;
};

vector<ExprTem> add_(vector<ExprTem> expr1, vector<ExprTem> expr2)
{
    vector<ExprTem> result;
    // TODO : solve the problem here in simple way!!
    // ! approach matters more than solution!
}

int main()
{
    vector<ExprTem> expr1, expr2, sol = add_(expr1, expr2);
    for (auto a : sol)
        cout << a.cofficeint << " " << a.exponent << endl;
    return 0;
}