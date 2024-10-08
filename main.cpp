#include <iostream>
using namespace std;

double calcolaArea(double r){
    double area;
    area = (r*r)*3,14;
    return area;
}

double calcolaCirconferenza(double r){
    double circonferenza;
    circonferenza = (r*3,14)*2;
    return circonferenza;
}

int main(){
    double r1,r2,area1,circonferenza1,area2,circonferenza2;
    cout<<"Inserisci il raggio del primo cerchio."<<endl;
    do{
        cin>>r1;
        if(r1>0){
        }else{
            cout<<"Il numero da te inserito è minore di 0"<<endl;
            cout<<"Inserisci il raggio del primo cerchio."<<endl;
        }
    }while(r1<0);
    area1=calcolaArea(r1);
    circonferenza1=calcolaCirconferenza(r1);
    cout<<"Inserisci il raggio del secondo cerchio."<<endl;
    do{
        cin>>r2;
        if(r2>0){
        }else{
            cout<<"Il numero da te inserito è minore di 0"<<endl;
            cout<<"Inserisci il raggio del secondo cerchio."<<endl;
        }
    }while(r2<0);
    area2=calcolaArea(r2);
    circonferenza2=calcolaCirconferenza(r2);
}
