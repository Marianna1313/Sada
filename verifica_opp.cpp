#include<iostream>
#include<string>
#include <cmath>
using namespace std;

class veicolo{
    protected:
    string marca;
    string modello;
    public:
    int anno;
    veicolo(string mr, string md, int an){
        marca=mr;
        modello=md;
        anno=an;
    }
    void mostraDettagli(){
        cout << "La marca è " << marca << ", il modello è " << modello << ", e l'anno è " << anno;
    }

};

    class Auto: public veicolo{
        private:
        int nPorte;
        public:
        Auto(string mr, string md, int an, int np): veicolo(mr,md,an){
            nPorte=np;
        }
        void mostraDettagli(){
            mostraDettagli();
            cout << "il numero di porte è " << nPorte;
        }

    };

    class Moto: public veicolo{
        private:
        bool haBaule;
        public:
        Moto(string mr, string md, int an, bool hb): veicolo (mr,md,an){
            haBaule=hb;
        }
        void mostraDettagli(){
            mostraDettagli();
            if (haBaule==true){
                cout << " ha il bauletto";
            }else{
                cout << " non ha il bauletto";
            }
            
        }
    };


int main(){
    string mr, md;
    int an, np;
    char a;
    bool hb;
    cout << "Inserisci la marca: ";
    cin >>  mr;
    cout << "Inserisci il modello: ";
    cin >> md;
    cout << "Inserisci l'anno: ";
    cin >> an;
    veicolo x=veicolo(mr, md, an);
    x.mostraDettagli();
    cout << "Inserisci il numero porte: ";
    cin >> np;
    Auto y=Auto(mr, md, an,np);
    y.mostraDettagli();
    cout << "Ha il bauletto, 'f' se false, altrimenti 'v': ";
    cin >> a;
    if (a=='f'){
        hb=false;
    }else{
        hb=true;
    }
    Moto xy= Moto(mr, md, an,hb);
}