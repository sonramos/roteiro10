#include "TestaValidaNumero.h"

 TestaValidaNumero::TestaValidaNumero()
{
   //dctor

}

 TestaValidaNumero::~TestaValidaNumero()
{
    //dtor
}

void TestaValidaNumero::  SetTestaValidaNumero(int num){

    this->num = num;

}
int TestaValidaNumero:: GetTestaValidaNumero(){

    return num;

}