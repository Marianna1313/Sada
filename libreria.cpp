#include<iostream>
#include<string>

using namespace std;

class libreria{
    protected:
    string titolo;
    int anPubblicazione;
    public:
    libreria(string t,int ap){
        titolo=t;
        anPubblicazione=ap;
    }
    void mostra(){
        cout <<" Il libro è '" << titolo << "' ed è stato pubblicato nel " << anPubblicazione;
    }
    bool antico(){
        bool trovato=false;
        if (2024 - anPubblicazione>=50){
            trovato=true;
        }
        return trovato;
    }

};
    class libro: public libreria{
        private:
        int numeroPag;
        string genre;
        public:
        libro(string t,int ap,int np, string g): libreria(t,ap){
            numeroPag=np;
            genre=g;
        }
        bool lunghezza (){
            bool lung=false;
             if (numeroPag>=300){
            lung=true;
        }
        return lung;
        }

    };

int main(){
    string t,g;
    int ap=0,np=0;

    cout << "inserisci il titolo del libro: ";
    cin >> t;
    cout << "inserisci l'anno di pubblicazione del libro: ";
    cin >> ap;
    libreria x=libreria(t,ap);
    x.mostra();
    if (x.antico()==true){
        cout << "Il libro ha più di 50 anni";
    }else{
        cout << "Il libro ha meno di 50 anni";
    }
    cout << "inserisci il numero delle pagine del libro: ";
    cin >> np;
    cout << "inserisci il genere del libro: ";
    cin >> g;
    libro y=libro(t,ap,np,g);
    if (y.lunghezza()==true){
        cout << "Il libro ha più di 300 pag";
    }else{
        cout << "Il libro ha meno di 300 pag";
    }
    

    

}

