#include <iostream>
#include <string>
#include <list>
#include "conversiones.h"

using namespace std;


class MainMenu
{
private:
    static void sending(string message)
    {
        cout << message << endl;
    }

    static void options (){
          sending("Conversor de Bases v_1.0");
        sending(":::::::::------:::::::::");
        sending("");
        sending("---- Menu principal ----");
        sending("seleccione la opcion por su indice numerico: ");
        sending("");
        sending("1. Decimal(base 10) a Binario(base 2)");
        sending("2. Binario(base 2) a Decimal(base 10)");
        sending("");

        sending("3. Decimal(base 10) a Hexadecimal(base 16)");
        sending("4. Hexadecimal(base 16) a Decimal(base 10)");
        sending("");

       
        sending("0 para salir.");
        sending("");
    }

public:


    static void firstMenu()
    {
      
        options();
        int selection = 10 ;
        do{
            cin >> selection;
            switch (selection)
            {
            case 1:
                Conversiones::decimalABinario();
                break;
            case 2:
                Conversiones::binarioADecimal();
                break;
            case 3:
                Conversiones::decimalAHexa();
                break;
            case 4:
                Conversiones::hexaADecimal();
                break;
            
            default:
                break;
            }
            if(selection != 0){
                sending("");
                sending("");
                options();
            }else{
                sending("");
                sending("saliendo de la aplicacion gracias :) --");
                sending("");
            }
        }while(selection != 0);

    };
};