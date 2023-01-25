#include <iostream>
#include <iostream>
using namespace std;
class Estructuras{
public:



Estructuras(string* note,int );




void EscalaMayor();
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


};

Estructuras::Estructuras(string* not, int _pos){
  pos=_pos;
  notas=not;
  


}



void Estructuras::EscalaMayor(){
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
int tono (){
  return 2;
}
int semitono(){
  return 1;
}
