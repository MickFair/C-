/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int vetmax(int v[],int dim)
{    
    int max=0;
    for (int i=0;i<dim;i++)
    {
        if (v[i]>max)
        {max=v[i];}
        
    }
    
    return max;
}

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
int main()
{
    int n; // Numero Partecipanti
    int n2; // Grandezza classifica
    int max=0; // Massimo assoluto [1]
    int maxtemp=0; // Massimo assoluto,temporaneo [2]
    int ran=0; //Range di numeri da 0 a X
    
    cout<<"Quanti partecipanti?"<<endl;
    n=check();
    int p[n]; // Vettore [Partecipanti]
    
    cout<<"Numeri casuali da 1 a...?"<<endl;
    ran=check();
    
        cout<<"La classifica di quanti posti?"<<endl;
    n2=check();
    
 
    while (n>ran)
    {
        cout<<"Errore."<<endl;
            cout<<"al fine di evitare doppioni,i partecipanti non possono essere superiori al range di numeri"<<endl;
                cout<<"Per favore,inserisci un numero di partecipanti valido"<<endl;
                n=check();
                  cout<<"Inserisci il range di numeri casuali da 1 a...?"<<endl;
                   ran=check();

    }
    
   while (n2>n)
    {
        cout<<"Errore."<<endl;
            cout<<"Il numero dei posti in classifica non può superare quello dei partecipanti"<<endl;
                cout<<"Per favore,inserisci un numero posti in classifica valido"<<endl;
                n2=check();
                  
    }
    int c[n2]; //Vettore [Classifica]
    
  for (int j=0;j<n2;j++) // Azzeramento dei valori nelle posizioni j del vettore c
    {
        c[j]=0;
    }

   
    srand(time(NULL)); // Seme funzione rand() vettore p[i]
    
    for (int i=0;i<n;i++)
    {
       p[i]=(rand()%ran+1); //Numeri random fino a X,variabili
       
       for(int j=0;j<i;j++) 
       {
       	if(p[i]==p[j]) 
       	{
           i--;
        }
       }
       
    }
          cout<<"Tutti i partecipanti sono i numeri: "<<endl;;
      
    for (int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
    
    cout<<""<<endl;
        
        int j=0; //Variabile d'appoggio per il while & max
        max=vetmax(p,n); //Ricerca il massimo assoluto
        c[j]=max; //Assegnazione al podio di c
        j++; //Incremento per podi successivi 
        
        while (j<n2)
       {
        for (int i=0;i<n;i++)
        {
            if ((p[i]<max) and (p[i]>c[j]))
            {
                c[j]=p[i];
                maxtemp=p[i];
            } 
            if (i==n-1)
            {
                max=maxtemp; //Il valore in maxtemp va nel massimo assoluto
                maxtemp=0; //Maxtemp si azzera,per poter variare negli ingressi successivi
            }
        }
        j++;
           
       }


//Output valore in indice corrispondente

 for (int j=0,a=1; (j<n2 and a<n2+1); j++,a++) { 
 cout<<"Al posto "<<a<<" si classifica il numero "<<c[j]<<endl;
 }

    return 0;
}