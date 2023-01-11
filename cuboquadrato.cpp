#include <iostream>

using namespace std;

int main()
{
    int n;
    int quadrato;
    int cubo;
    
    cout<<"Inserisci un numero";
    cin>>n;
    
    if ((n>0) or (n<0)){
        if (abs(n)%2==0){
            quadrato=n*n;
            cout<<quadrato;
        }
        else if (abs(n)%2==1){
            cubo=n*n*n;
            cout<<cubo;
            
        }
    }
    else if (n=0){
        cout<<"Il risultato è 0";
        
    }
    return 0;
}
