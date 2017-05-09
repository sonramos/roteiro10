#include "SaldoNaoDisponivelException.h"
#include<exception>
#include<iostream>
using namespace std;
SaldoNaoDisponivelException::SaldoNaoDisponivelException()
{
    //ctor
}

SaldoNaoDisponivelException::~SaldoNaoDisponivelException()
{
    //dtor
}
SaldoNaoDisponivelException::msg(){

    cout<<"Saldo nao disponivel"<<endl;

}

