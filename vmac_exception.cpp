#include "ValorMuitoAcimaException.h"
#include "exception"
#include "iostream"
using namespace std;

ValorMuitoAcimaException::ValorMuitoAcimaException()
{
    //ctor
}

ValorMuitoAcimaException::~ValorMuitoAcimaException()
{
    //dtor
}
void ValorMuitoAcimaException::Msg3(){

    cout<<"Numero maior que 1000"<<endl;
}
