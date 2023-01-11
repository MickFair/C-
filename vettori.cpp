#include <iostream>

using namespace std;

int check(int a)
{
    while (cin.fail())
    {
        cin.clear();
        cin.ignore();
        cout<<"Errore,inserisci un numero valido"<<endl;
        cin>>a;
        
    }
    return a;
}
int main()
{
   int x;
   int a; //Numero dell'utente
   int n=0; //Contatore Match
   
   cout<<"Grandezza del vettore?";
   cin>>x;
   while (cin.fail())
    {
        cin.clear();
        cin.ignore();
        cout<<"Errore,inserisci un numero valido"<<endl;
        cin>>x;
        
    }
   int vett[x];
   
   for (int i=0;i<x;i++)
   {
       cout<<"Inserisci un numero"<<endl;
       cin>>vett[i];
       while (cin.fail())
    {
        cin.clear();
        cin.ignore();
        cout<<"Errore,inserisci un numero valido"<<endl;
        cin>>vett[i];
        
    }
   }
    
    cout<<"Inserisci il numero da verificare"<<endl;
    cin>>a;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore();
        cout<<"Errore,inserisci un numero valido"<<endl;
        cin>>a;
        
    }
    
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