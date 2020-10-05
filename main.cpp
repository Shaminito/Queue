#include <iostream>
using namespace std;

struct box {
    char nombre;
    char apellido;
    int numExpediente;
    String fecha;
    box *sgt;
};
box *i;
box *f=NULL;
box *a;

void eQ(char nombre, char apellido, int numExpediente, String fecha){
    box *a=new box;
    if(f==NULL){
        a->nombre=nombre;
        a->apellido=apellido;
        a->numExpediente=numExpediente;
        a->fecha=fecha;
        a->sgt=NULL;
        f=a;
        i=f;
    }else{
       f->sgt=a;
       a->nombre=nombre;
       a->apellido=apellido;
       a->numExpediente=numExpediente;
       a->fecha=fecha;
       a->sgt=NULL;
       f=a;
    }

}
void dQ(){
    if(i==NULL)
        cout<<"Queue vacia";
    else if (i->sgt==NULL){
        cout<<"Eliminando";
        i=i->sgt;
        i=NULL;
        f=NULL;
    }else {
        cout << "Eliminando";
        i = i->sgt;
    }
}

void prt() {
    a = i;
    if (a == NULL)
        cout << "Vacia nada que imprimir";
    else
        while (a != NULL)
            cout << a->nombre;
            cout << a->apellido;
            cout << a->numExpediente;
            cout << a->fecha;
            a = a->sgt;
}
int main(){
    int op;
    do{
        cout<<"\n(1) Push    (2) Pop    (3) Print   (4) Salir \n ";
        cout<<"\n Elija ppcion  ?: ",cin>>op;
        switch (op){
            case 1:
                char n;
                cout<<"Nombre: ??  ",cin>>n;
                char a;
                cout<<"Apellido: ??  ",cin>>a;
                String f;
                cout<<"Fecha: ??  ",cin>>f;
                int nE;
                cout<<"numExpediente: ??  ",cin>>nE;
                eQ(n, a, f, nE);
                break;
            case 2:
                cout<<"Eliminando ..... : ";
                dQ();
                break;
            case 3:
                cout<<"Imprimiendo..... : ";
                prt();
                break;
            case 4:
                cout<<"------Bye--------";
        }
    }while(op!=4);
}