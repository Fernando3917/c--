#include <iostream>
#include <canio.h>
using namespace std;

int fatorial(int n)
    if (n == 0)
        return (1);
    
    else 
        return ( n  * fatorial(n-1));
    
int main(){
 
   int x;
   cout<<"\t\t\tPrograma para calcular fatorial\n\n\n";
   cout<<"Digite um numero: ";
   cin>> x;
   cout<< "O fatorial de "<< x << "e: " <<fatorial(x);
   getch();
   return 0;

}
