#ifndef CELL_H
#define CELL_H
#include "Short_Excel_.h"


class Cell
{
    private:
        Expression_Node_ *Expression_node_pointer;
        Tree_Expression *Tree_expression_pointer;
        vector <Cell_pointer> List_dependencies;

    public:
        Cell();
        virtual ~Cell();


};

#endif // CELL_H
