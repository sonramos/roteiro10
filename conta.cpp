#include "Conta.h"
#include<iostream>

Conta::Conta()
{
    //ctor
}

Conta::~Conta()
{
    //dtor
}
float Conta::sacar( float valor, float sd){


        saldo_atual = sd - valor;
        return saldo_atual;


}


