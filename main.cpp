#include "neuronioReLU.hpp"

using namespace std;

int main(){
    
    //entrada padrão peso e bias
    NeuronioReLU *n = new NeuronioReLU();
        double i = n->predict({3.2,2.0});
        cout<< i << endl;
        delete n;

    //entrada valores peso e bias
    Neuronio *n2 = new NeuronioReLU({0.2,0.4},-0.5);
        vector<double> x2;
            x2.push_back(0.3);
            x2.push_back(2);
        double i2 = n2->predict(x2);
        cout<< i2 << endl;
    delete n2;

    Neuronio *n3 = new NeuronioReLU({4.5,1.3},-1.0);
        vector<double> x3 = {1.0,4.2};
        double i3 = n3->predict({x3});
        cout<< i3 << endl;
    delete n3;

    //declaração de peso e bias externa
    vector <double> p4 = {1.5,5.8};
    double vies4 = 2.5;

    Neuronio *n4 = new NeuronioReLU(p4,vies4);

        vector<double> x4 = {1.0,4.2};
        
        double i4 = n4 -> predict(x4);

        cout<< i4 << endl;
    delete n4;

    // declaração externa de pesos, bias e entradas
    double p5a = 0.5;
    double p5b = 0.5;
    double vies5 = -2.5;
    vector<double> x5 = {1.0,3.2};

    Neuronio *n5 = new NeuronioReLU({p5a, p5b},vies5);     
        double i5 = n5 -> predict(x5);
        cout<< i5 << endl;
    delete n5;

    //entrada com origme em saídas de neurônios anteriormente preditos
    Neuronio *n6 = new NeuronioReLU({p5a, p5b},vies5);
        //entrando resultado de predict anteriormente calculado;
        vector<double> x6 = {i4,i5};       
        double i6 = n6 -> predict(x6);
        cout<< i6 << endl;
    delete n6;
    
    Neuronio *n7 = new NeuronioReLU({p5a, p5b},vies5);
        double i7 = n7->predict({3.2,2.0});
        cout<< i7 << endl;
    delete n7;

    NeuronioReLU aNeuronioReLU;
}


