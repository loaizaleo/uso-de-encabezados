#ifndef STDEV_H
#define STDEV_H
#include <cmath>

class desviacion{
 public:
//funcion para calcular la desviacion estandar muestral
float rms(int arreglo[], int nro_elementos){
float suma=0,media=0,s=0;
int o,n;
for(o=0;o<nro_elementos;o++){
suma+=arreglo[o];
}
media=suma/nro_elementos;

for (n=0;n<nro_elementos;n++){
s+= pow((media-arreglo[n]),2);
}
return sqrt(s/(nro_elementos-1));
}//fin funcion rms
};

#endif
