#include <iostream>
namespace std;

int fibonacci(int n){
    if (n == 1 || n==2){
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main(){
 
   int x;
   cout<<"\t\t\tPrograma para calcular sequencia Fibonacci\n\n\n";
   cout<<"Digite a quantidade de termos da sequencia de Fibonacci: ";
   cin>> x;
   if (x> 0 ){
    cout<< "A sequencia de Fibonacci e: "<< x << "e: " <<fibonacci(x);
    
   }
   else{
    cout<<"Numero invalido: "<< x;
   }
   
   system(pause);
   return 0;

}
