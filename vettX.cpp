/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int check()
{
    int temp;
    cin>>temp;
    while ((cin.fail()) or (temp<1))
    {
        cin.clear();
        cin.ignore();
        cout<<"Errore,inserisci un numero valido"<<endl;
        cin>>temp;
        
    }
    return temp;
}
int check2()
{
    int temp;
    cin>>temp;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore();
        cout<<"Errore,inserisci un numero valido"<<endl;
        cin>>temp;
        
    }
    return temp;
}
int main()
{
   int x;
   int a; //Numero dell'utente
   int n=0; //Contatore Match
   
   cout<<"Grandezza del vettore?";
   x=check();
   int vett[x];
   
   for (int i=0;i<x;i++)
   {
       cout<<"Inserisci un numero"<<endl;
      vett[i]=check2();
   
   }
    
    cout<<"Inserisci il numero da verificare"<<endl;
    a=check2();
    
   for (int i=0;i<x;i++) 
   {
       
       if (a==vett[i])
       {
       n=n+1;
       }
   }
   cout<<"Il numero "<<a<<" è presente "<<n<<" volte"<<endl;
  
   cout<<"Nel vettore sono presenti i numeri ";
   for (int i=0;i<x;i++) 
   {
       cout<<vett[i]<<" ";
   }
    return 0;
}