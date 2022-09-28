#include <iostream>

using namespace std;

int main()
{

    int tabin = 0;
    int i = 0;
    int j = 0;
    int tabfin = 0;
    int rangoin = 0;
    int rangofin = 0;
    int multi = 0;
    
    cout<<"¿En qué tabla quieres iniciar? ";
    cin>>tabin;
    cout<<"¿En qué tabla quieres terminar? ";
    cin>>tabfin;
    cout<<"¿En cual numero empezaré a multiplicar? ";
    cin>>rangoin;
    cout<<"¿En qué cual numero dejaré de multiplicar? ";
    cin>>rangofin;
    
    for( i=tabin; i<=tabfin; i++){
        
        for(j=rangoin; j<=rangofin; j++){
            
        //cout<<"Calificacion " <<i+1 <<" - " <<cal[i] <<"\n" <<endl;
        multi = j * i;
        cout<<j <<" * " <<i <<" = " << multi <<endl;
        //suma = suma+cal[i];


    }
    }

    return 0;
}
