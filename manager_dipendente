#include<iostream>
#include<string>
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
        cout <<"Il dipendente si chiama " << nome << "e il suo stipendio è " << stipendioBase;
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

};


int main(){
    
}