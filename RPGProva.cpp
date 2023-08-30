/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void assegnapos(char vet[][8])
{
    srand(time(NULL));
for (int j=0;j<8;j++)
    {
       for (int i=0;i<8;i++)
        {
           int evento=(rand()%3)+1;
           if (evento==1) 
           {
           vet[i][j]='E';
           }
           else if (evento==2)
           {
           vet[i][j]='O';
           }
           if (evento==3) 
           {
           vet[i][j]='B';
           }
        }
    } 
int uscitaX=(rand())%8;
int uscitaY=(rand())%8;
vet[uscitaX][uscitaY]='U';
}

void mostrapos(char vet[][8]){
    cout<<" __ __ __ __ __ __ __ __"<<endl;
    for (int j=0;j<8;j++)
    {
        for (int i=0;i<8;i++)
        {
            cout<<"| "<<vet[i][j];
        }
        cout<<"|"<<endl;
    }
}
void mostramappa()
{
cout<<"Questa e' la mappa"<<endl;
cout<<" __ __ __ __ __ __ __ __"<<endl;
cout<<"|__|__|__|__|__|__|__|__|"<<endl;
cout<<"|__|__|__|__|__|__|__|__|"<<endl;
cout<<"|__|__|__|__|__|__|__|__|"<<endl;
cout<<"|__|__|__|__|__|__|__|__|"<<endl;
cout<<"|__|__|__|__|__|__|__|__|"<<endl;
cout<<"|__|__|__|__|__|__|__|__|"<<endl;
cout<<"|__|__|__|__|__|__|__|__|"<<endl;
cout<<"|__|__|__|__|__|__|__|__|"<<endl;
}

void percorsoutente(char vet[][8])
{
    cout<<" __ __ __ __ __ __ __ __"<<endl;
    for (int j=0;j<8;j++)
    {
        for (int i=0;i<8;i++)
        {
            if (vet[i][j]=='X')
            cout<<"| X";
            
            else if (vet[i][j]=='+')
            cout<<"| +";
            
            else
            cout<<"|__";
        }
        cout<<"|"<<endl;
    }
}
void percorsoutentecompleto(char vet[][8])
{
    cout<<" __ __ __ __ __ __ __ __"<<endl;
    for (int j=0;j<8;j++)
    {
        for (int i=0;i<8;i++)
        {
            if (vet[i][j]=='X')
            cout<<"| X";
            
            else if (vet[i][j]=='+')
            cout<<"| +";
            
            else if (vet[i][j]=='U')
            cout<<"| U";
            else
            cout<<"|__";

        }
        cout<<"|"<<endl;
    }
}

void direzioniutente(char vet[][8],int colonne,int righe)
{
    char direzione;
    bool uscita=false;
    while (!uscita)
    {
        cout<<"Scegli la direzione"<<endl;
        cin>>direzione;
        switch (direzione)
        {
            case 'U':
            if (righe-1>=0)
            {
            vet[colonne][righe]='+';
            righe=righe-1;
            if (vet[colonne][righe]!='U')
                vet[colonne][righe]='X';
            else
                {
                vet[colonne][righe]=='U';
                uscita=true;
                }
                percorsoutente(vet);
            }
            else
            cout<<"Muro!"<<endl;
            break;
            case 'D':
            if (righe+1<8)
                {
                vet[colonne][righe]='+';
                righe=righe+1;
                if (vet[colonne][righe]!='U')
                    vet[colonne][righe]='X';
            else
                {
                vet[colonne][righe]=='U';
                uscita=true;
                }
                    percorsoutente(vet);
                }
            else
                cout<<"Muro!"<<endl;
            break;
            case 'R':
            if (colonne+1<8)
                {
                vet[colonne][righe]='+';
                colonne=colonne+1;
                if (vet[colonne][righe]!='U')
                    vet[colonne][righe]='X';
                else
                    {
                    vet[colonne][righe]=='U';
                    uscita=true;
                    }
                    
                    percorsoutente(vet);
                }
            else
                cout<<"Muro!"<<endl;
            break;
            case 'L':
            if (colonne-1>=0)
            {
            vet[colonne][righe]='+';
            colonne=colonne-1;
            if (vet[colonne][righe]!='U')
                vet[colonne][righe]='X';
            else
                {
                vet[colonne][righe]=='U';
                uscita=true;
                }
                percorsoutente(vet);
            }
            else
            cout<<"Muro!"<<endl;
            break;
            default:
            cout<<"Inserisci una direzione valida"<<endl;
            break;
        }
    }
}

int main (){

cout<<"Benvenuto in un RPG casuale,iniziamo"<<endl;
mostramappa();
cout<<"           ^   "<<endl;
cout<<"           |   "<<endl;
cout<<"       Tu sei qui"<<endl;

const int col=8;
const int rig=8;
int colonna=3;
int riga=7;
char vetmappa[col][rig];
assegnapos(vetmappa);
vetmappa[colonna][riga]='X';
direzioniutente(vetmappa,colonna,riga);
percorsoutentecompleto(vetmappa);
cout<<"Hai trovato l'uscita"<<endl;
system("pause");







return 0;
}
