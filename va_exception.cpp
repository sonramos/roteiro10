#include "ValorAbaixoException.h"
#include<iostream>

using namespace std;

ValorAbaixoException::ValorAbaixoException()
{
    cout<< "valor menor ou igual a zero"<<endl;
}

ValorAbaixoException::~ValorAbaixoException()
{
    //dtor
}
ValorAbaixoException::Msg1(){

    cout<<" Numero menor ou igual a zero"<<endl;

}
