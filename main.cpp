#include <iostream>
using namespace std;
void ler_vetor(int v[], int tam){
  for(int i = 0; i < tam; i++){
    cout<<"Digite um valor: " ;
    cin>>v[i];
  }
}
void crescente_vetor(int v[], int tam){
  int aux = v[0];
  for(int i = 0; i < tam; i++){
    if(aux > v[i]){
      cout<<"não está em ordem crescente "<< endl;
    }
    else{
      aux = v[i];
      cout<<"está em ordem crescente "<<endl;
    }
  }
}
int main(){
  const int tam = 5;
  int v[tam];
  ler_vetor(v, tam);
  crescente_vetor(v, tam);
}