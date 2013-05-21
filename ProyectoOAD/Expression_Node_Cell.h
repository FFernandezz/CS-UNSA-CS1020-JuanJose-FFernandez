#ifndef EXPRESSION_NODE_CELL_H
#define EXPRESSION_NODE_CELL_H
#include "Short_Excel_.h"



class Expression_Node_Cell:Expression_Node_;
{
    private:
        Cell *cell_pointer;

    public:
        Expression_Node_Cell();
        virtual ~Expression_Node_Cell();
        _value get_value();

};

#endif // EXPRESSION_NODE_CELL_H
