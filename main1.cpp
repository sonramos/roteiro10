#include <iostream>
#include <stdio.h>
#include "SaldoNaoDisponivelException.h"
#include "Conta.h"
#include<exception>
using namespace std;

int main()
{
    Conta c1;
    SaldoNaoDisponivelException N;
    float saldo_atual;
    float valor;
    float sd;
    std::string tipo_conta;

    cout<<"Digite o valor que voce deseja sacar"<<endl;
    cin>>valor;
    sd = 1000;


    try{
        if(valor > sd){

            throw(SaldoNaoDisponivelException());
        }

            printf("o seu saldo e %f",c1.sacar(valor,sd));
    }

    catch(SaldoNaoDisponivelException N){
        N.msg();
    }




    return 0;
}
