#ifndef EXPRESSION_NODE_OPERATION_H
#define EXPRESSION_NODE_OPERATION_H


class Expression_Node_Operation:public Expression_Node_;
{
    private:
        Operations *operation_pointer;
    public:
        Expression_Node_Operation();
        virtual ~Expression_Node_Operation();



};

#endif // EXPRESSION_NODE_OPERATION_H
