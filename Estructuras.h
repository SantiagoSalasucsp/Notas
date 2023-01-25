#include <iostream>
#include <iostream>
using namespace std;
class Estructuras{
public:
Estructuras(string arr[],int);
int tono(string array[],int posi);
int semitono(string array[],int posi);
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
string arr[];
int pos;


};

void EscalaMayor(string arr[],int pos){
  int k=pos;
  cout<<arr[k]<<endl;
  k+=tono(arr,pos);
  cout<<arr[k]<<endl;
  k+=tono(arr,pos);
  cout<<arr[k]<<endl;
  k+=semitono(arr,pos);
  cout<<arr[k]<<endl;
  k+=tono(arr,pos);
  cout<<arr[k]<<endl;
  k+=tono(arr,pos);
  cout<<arr[k]<<endl;
  k+=tono(arr,pos);
  cout<<arr[k]<<endl;
  k+=semitono(arr,pos);
  cout<<arr[pos]<<endl;

};
