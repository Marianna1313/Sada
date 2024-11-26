#include<iostream>
#include<string>
#include <cmath>
using namespace std;

class Dipendente {
    protected:
    string nome;
    double stipendioBase;
    public:
    Dipendente (string n, double s){
        nome=n;
        stipendioBase=s;
    }
    void visualizza(){
        cout <<"Il dipendente si chiama " << nome << " e il suo stipendio è " << stipendioBase<<endl;
    }
    double totale_salario(double b){
        double tot=0;
        if (b!=0){
            tot = b + stipendioBase;
        } else {
            tot=stipendioBase;
        }
        return tot;
    }
    double giorni_lavoro (double g){
        double stipl=0;
        stipl=stipendioBase/g;
        stipl = round(stipl * 100) / 100.0;
        return stipl;
    }

};
    class manager: public Dipendente{
        private: 
        double bonus;
        int numeroDipendenti;
        public:
        manager (string n, double s, double bs, int nd): Dipendente(n,s){
            bonus = bs;
            numeroDipendenti=nd;
        }
        void visualizza (){
            cout <<"Il bonus del manager: " << bonus << " e ha " << numeroDipendenti<< " dipendenti " <<endl;
        }
    };


int main(){
    string n;
    double s;
    double b,g=0,bs;
    int nd;
    
    
    cout << "Inserisci il nome: ";
    cin >> n;
    cout << "Inserisci lo stipendio base: ";
    cin >> s;
    Dipendente x=Dipendente(n,s);
    x.visualizza();
    cout << "Se c'è un bonus inseriscilo, altrimenti digita 0: ";
    cin >> b;
    cout<< "Il totale è: " << x.totale_salario(b)<<endl;
    cout << "Quanti giorni ha lavorato? ";
    cin >> g;
    cout<< "Lo stipendio per ogni giorno lavorativo è: : " << x.giorni_lavoro(g);
    cout << "Quant'è il bonus del manager? ";
    cin >> bs;
    cout << "Quanti dipendenti ha il mangaer? ";
    cin >> nd;
    manager y = manager (n, s, bs, nd);
    y.visualizza();

    }