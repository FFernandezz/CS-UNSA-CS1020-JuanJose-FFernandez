#ifndef EXPRESSION_NODE__H
#define EXPRESSION_NODE__H
#include "Short_Excel_.h"
using namespace std;


class Expression_Node_
{
    private:
        _str expression;

    public:
        Expression_Node_();
        virtual ~Expression_Node_();
        virtual _value get_value()=0;

};

#endif // EXPRESSION_NODE__H
