#include <iostream>
#include <algorithm>
#include "neuronio.hpp"

using namespace std;

class NeuronioReLU: public Neuronio{
    
    public: 

    NeuronioReLU():Neuronio(pesos, bias){
       pesos = {0.2,0.4};
       bias = -1.5;
    };

    NeuronioReLU(const vector<double>&pesos,double bias):Neuronio(pesos, bias){
        this -> pesos = pesos;
        this -> bias = bias;
    };


    double predict(const vector<double> entradas)const{
    
        double saida=0;
        int n_entrada = 2;
        for (int i=0; i<n_entrada; i++)
            saida += (entradas[i]* pesos[i]);
        saida=saida+bias;
        if (saida<0){
            saida=0;
            }
        return saida;
    }

    ~NeuronioReLU(){};
};