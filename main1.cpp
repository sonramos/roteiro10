main.cpp



#include <iostream>
#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"
#include<iostream>

using namespace std;

int main()
{
    TestaValidaNumero c;
    int num;
    cout<<"Digite um numero"<<endl;
    cin>>num;
    c.SetTestaValidaNumero(num);

   try{
    if(c.GetTestaValidaNumero() <= 0){
        throw(ValorAbaixoException());
    }

    if(c.GetTestaValidaNumero()>100 && c.GetTestaValidaNumero()<1000){
        throw(ValorAcimaException());

        }

    if(c.GetTestaValidaNumero()>=1000){

        throw(ValorMuitoAcimaException());
    }
  }
     catch(ValorAbaixoException T){

        T.Msg1();
     }

     catch(ValorAcimaException E){

        E.Msg2();
    }

     catch(ValorMuitoAcimaException W){

        W.Msg3();
    }
    return 0;
}


