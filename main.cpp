#include <iostream>
#include <string>
#include "Estructuras.h"
using namespace std;





int main() {
  int i;
  string* nat;
  
 
string nota[]={"Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si","Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si"};
  nat=nota;
  
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

Estructuras a1(nota,7,24);

a1.print();
a1.EscalaMayor();

  
  


  }
