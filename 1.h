#include <iostream>
#include <string>
using namespace std;
class Estructuras{
public:


Estructuras(string*no,int posi,int tama);

void tono (int x);
void semitono(int y);

void EscalaMayor();


void print() {
    cout << "[ ";
    for(int i = 0; i < tam; i++)
        cout << notas[i] << " ";
    cout << "]" <<endl;
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
string*notas;
//[]={"Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si","Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si"};
int pos;
int tam=24;


};


