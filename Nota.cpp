#include <iostream>
#include <iostream>
using namespace std;

int tono(string array[],int posi){
  posi+=2;
  return 2;
  
};
int semitono(string array[],int posi){
  posi+=1;
  return 1;
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


void EscalaMenor(string arr[],int pos){
  int l=pos;
  cout<<arr[pos]<<endl;
  l+=tono(arr,pos);
  cout<<arr[l]<<endl;
  l+=semitono(arr,pos);
  cout<<arr[l]<<endl;
  l+=tono(arr,pos);
  cout<<arr[l]<<endl;
  l+=tono(arr,pos);
  cout<<arr[l]<<endl;
  l+=semitono(arr,pos);
  cout<<arr[l]<<endl;
  l+=tono(arr,pos);
  cout<<arr[l]<<endl;
  l+=tono(arr,pos);
  cout<<arr[l]<<endl;
  


  };





int main() {
  int i;
 string notas[]={"Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si","Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si"};


for (i=0; i<12; i++) {
cout<<notas[i]<<endl;}
  if(i==12)
    {i-=12;}
  
  
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

EscalaMayor(notas,7);
cout<<endl;
EscalaMenor(notas,4);
  
  }
