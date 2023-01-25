#include <iostream>
#include <string>
#include "Estructuras.h"
using namespace std;





int main() {
  int i;
  string* nat;
  
 enum nota{Do,Reb,Re,Mib,Mi,Fa,Solb,Sol,Lab,La,Sib,Si,Do,Reb,Re,Mib,Mi,Fa,Solb,Sol,Lab,La,Sib,Si};
string notas[]={"Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si","Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si"};
  nat=notas;
  
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
string*a;
Estructuras a1(nat,7);
a1.EscalaMayor;



cout<<endl;

 
  }
