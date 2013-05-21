#ifndef EXPRESSION_NODE_CONSTANT_H
#define EXPRESSION_NODE_CONSTANT_H
#include "Short_Excel_.h"


class Expression_Node_constant :public Expression_Node_;
{
    private:
        _value constant;

    public:
        Expression_Node_constant();
        virtual ~Expression_Node_constant();
        _value get_value();



};

#endif // EXPRESSION_NODE_CONSTANT_H
