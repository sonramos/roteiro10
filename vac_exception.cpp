#include "ValorAcimaException.h"
#include"exception"
#include <iostream>
using namespace std;

ValorAcimaException::ValorAcimaException()
{
    //ctor
}

ValorAcimaException::~ValorAcimaException()
{
    //dtor
}

void ValorAcimaException::Msg2(){

    cout<<"Numero entre 100 e 1000"<<endl;

}