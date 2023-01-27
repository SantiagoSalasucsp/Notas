#include <iostream>
#include <string>
using namespace std;
class Estructuras{
public:



Estructuras(string* note,int _pos ){
  notas=note;
  pos=_pos;
}

Estructuras(string arr[], int pos,int tam=24){
  this->tam = tam;
    notas = new string[tam];
    for(int i = 0; i < tam; i++)
        notas[i] = arr[i];
}


int tono (){
  return 2;
}
int semitono(){
  return 1;
}

void EscalaMayor(){  
  int k=pos;
  cout<<notas[k]<<endl;
  k+=tono();
  cout<<notas[k]<<endl;
  k+=tono();
  cout<<notas[k]<<endl;
  k+=semitono();
  cout<<notas[k]<<endl;
  k+=tono();
  cout<<notas[k]<<endl;
  k+=tono();
  cout<<notas[k]<<endl;
  k+=tono();
  cout<<notas[k]<<endl;
  k+=semitono();
  cout<<notas[pos]<<endl;

  
}

void EscalaMenor();
void intervalos();
void Conversor();
void MenorArmonica();
void MenorMelodica();
void Cromatica();
void EscalaTonosEnteros();
void Pentatonica();
void PentatonicaMenor();

private:
string *notas;//[]={"Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si","Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si"};
int pos;
int tam=24;


};


int tono (){
  return 2;
}
int semitono(){
  return 1;
}
