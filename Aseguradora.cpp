#include <iostream>
using namespace std;
     int main(){

        float sueldo, anticipacion, pagorestante;
        char montoseguro;
        cout<<"ingresa el sueldo del empleado: ";
        cin>>sueldo;
        cout<<"ingresa el monto del seguro: ";
        cin>>montoseguro;

        if(sueldo >=400 && sueldo <= 910.00){
            montoseguro = 10,000;
            cout<<"El monto del seguro es $10,000"<<endl;

        }else if (sueldo>=910,00 && sueldo <=1,255.00){
            montoseguro= 14,000.00;
            cout<<"El monto del seguro es $20,000"<<endl;

        }else if (sueldo>=1,255.01 && sueldo <=1,630.00){
            montoseguro= 18,000.00;
            cout<<"El monto del seguro es $18,000.00"<<endl;

        }else if (sueldo>=1,630.01){
            montoseguro= 22,000.00;
            cout<<"El monto del seguro es $22,000.00"<<endl;

        cout<<"En caso de muerte se les pagara el monto del seguro"<<endl;

        cout<<"Anticipacion de la suma asegurada por invalidez total o permanente";  
        
        switch(anticipacion=montoseguro){
            case 10,000:
                anticipacion= 10,000/2;
                cout<<"El monto de la anticipacion es $5,000.00"<<endl;
                break;
            case 14,000:
                anticipacion= 14,000/2;
                cout<<"El monto de la anticipacion es $7,000.00"<<endl;
                break;
            case 18,000:
                anticipacion= 18,000/2;
                cout<<"El monto de la anticipacion es $9,000.00"<<endl;
                break;
            case 22,000:
                anticipacion= 22,000/2;
                cout<<"El monto de la anticipacion es $11,000.00"<<endl;
                break;
            default:
                cout<<"El monto de la anticipacion es invalido"<<endl;
                break;
                        
    


       
        










    }
         return 0;
    //fin del programa
     }
    }
