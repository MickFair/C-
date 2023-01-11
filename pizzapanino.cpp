#include <iostream>

using namespace std;

int main()
{
   float wlt=0;
   int pizza=0;
   int panino=0;
   int prod1=2;
   int prod2=1;
   int prod;
   
  cout<<"Quanti soldi hai in portafoglio?"<<endl;
  cin>>wlt;
  
   while ((wlt<0) or (cin.fail())){
      
      cin.clear();
      cin.ignore();
      cout<<"Inserisci un numero valido";
      cin>>wlt;}
      
  cout<<"Scegli il prodotto da comprare."<<endl;
  cout<<"Inserisci 1 per la pizza,2 per il panino"<<endl;
  cin>>prod;
  
  while ((prod<0) or (cin.fail())){
      
      cin.clear();
      cin.ignore();
      cout<<"Inserisci un numero valido";
      cin>>prod;
  }
  if (prod==1)
  {
      while (wlt>=prod1){
      pizza=pizza+1;
      wlt=wlt-prod1;}
  }
  else if (prod==2)
  {
       while (wlt>=prod2){
      panino=panino+1;
      wlt=wlt-prod2;}
  }
  
 if (prod==1){
     cout<<"Hai comprato ";cout<<pizza;cout<<" pizze."<<endl;
     if ((wlt>0) and (wlt<prod1)) {
         cout<<"Ti sono avanzati ";cout<<wlt;cout<<" euro e non è stato possibile acquistare un'altro prodotto"<<endl;
 }
 else if (prod==2){
     
     cout<<"Hai comprato ";cout<<panino;cout<<" panini."<<endl;
     if ((wlt>0) and (wlt<prod2)) {
         cout<<"Ti sono avanzati ";cout<<wlt;cout<<" euro e non è stato possibile acquistare un'altro prodotto"<<endl;
     }
 }
 }
  
   
    return 0;
}

