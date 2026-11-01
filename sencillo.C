//Programa para calcular la desviacion estandar de los datos de una imagen cargada
//por medio de clases
{
gROOT->Reset();
//gStyle->SetOptStat(0);
#include "stdevII.h"
#include "math.h"
//Para leer archivo y llenar array
ifstream inp;
int dat=6;//cantidad de datos
int vector[dat];
inp.open("datosSencillo.dat");
for(int i=0;i<dat && inp>>vector[i];i++){}
inp.close();

desviacion stdev;
    cout <<"La desviacion de la cosa es: "<<stdev.rms(vector,dat)<<endl;
}
