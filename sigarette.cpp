#include <iostream>
using namespace std;

int main (){

int mese;
int tentativo=0;
int fisso;
int sigarettevendute;
int fissoconsigarette;
int trattenute;
int stipendionetto;

cout<<"Nei mesi pari il tuo stipendio ammonta a 950 euro,nei dispari 1000. "<<endl;

cout<<"Per ogni sigaretta che vendi guadagni 20 euro,di cui trattenuti sul lordo il 20%. "<<endl;

cout<<"Di quale mese vuoi conoscere lo stipendio?"<<endl;

cin>>mese;


while ((mese<1) or (mese>12) or (cin.fail())){
    
    
    cin.clear();
    cin.ignore();
    cout<<" Inserisci il numero del mese compreso tra 1 e 12 ";
    cin>>mese;
    if ((mese<1) or (mese>12)){
    tentativo=tentativo+1;
        
    }
    
}
    if ((mese=1) or (mese=3) or (mese=5) or (mese=7) or (mese=9) or (mese=11) ){
        fisso=1000;}
        else
        {fisso=950;}
        
        cout<<"Quante sigarette hai venduto?""\n";
        
        cin>>sigarettevendute;
        
        while ((cin.fail()) or (sigarettevendute<1)){
            
            cin.clear();
            cin.ignore();
            cout<<"Inserisci un numero valido";
            cin>>sigarettevendute;
        }
        
        fissoconsigarette=fisso+(sigarettevendute*20);
    cout<<" Il tuo stipendio totale ammonta ad euro ";
    cout<<fissoconsigarette<<endl;
    
    trattenute=fissoconsigarette*20/100;

    cout<<" Di cui trattenute ";
    
    cout<<trattenute<<endl;
    
    stipendionetto=fissoconsigarette-(fissoconsigarette*20/100);
    
    cout<<" Restanti netti di stipendio euro ";
    cout<<stipendionetto<<endl;
    
    cout<<" (hint:riavvia e prova ad inserire per 3 volte un numero non compreso fra 1 e 12 ) ";



return 0;
}