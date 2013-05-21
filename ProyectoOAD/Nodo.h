#ifndef NODO_H
#define NODO_H
#include<string>
using namespace std;
typedef unsigned int VT;
class Nodo
{
    private:
        string _valor;
        VT _row;
        VT _Col;
    public:
        Nodo();
        Nodo(const Nodo& other);

};

#endif // NODO_H
