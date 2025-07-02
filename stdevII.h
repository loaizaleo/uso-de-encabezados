#ifndef STDEV_H
#define STDEV_H
float media,S,resul,s;
class desviacion{
 public:
//funcion para calcular media y S
float rms(int arreglo[], int nro_elementos){
int o, int n;
for(o=0;o<nro_elementos;o++){
resul+=arreglo[o];
}
media=resul/(nro_elementos-1);

for (n=0;n<nro_elementos;n++){
s+= pow((media-arreglo[n]),2);
}
S=sqrt(s/(nro_elementos-2));
return (S);
}//fin funcion media
};

#endif
