#include <list>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Conversiones
{
private:
public:
    static void decimalABinario()

    {
        bool valoresCorrectos = true;
        string verificando;
        int entero;

        cout << "Ingrese el entero(base 10) que desea convertir a binario(base 2): ";
        cin >> verificando;
        for (const char c : verificando)
        {
            if (!isdigit(c))
            {
                valoresCorrectos = false;
            }
        }

        if (valoresCorrectos)
        {

            int cociente = stoi(verificando);
            const int base = 2;
            list<int> RestosLista;

            while (cociente >= base)
            {
                RestosLista.push_front(cociente % base);
                cociente = cociente / base;
            };

            if (cociente < base && cociente > 0)
            {
                RestosLista.push_front(cociente);
            }

            cout << "" << endl
                 << endl;

            cout << "Resultado" << endl
                 << endl;
            for (int num : RestosLista)
            {
                cout << num;
            }
            cout << "" << endl
                 << endl;
        }
        else
        {
            cout << "" << endl
                 << endl;

            cout << "Resultado" << endl
                 << endl;
            cout << "valores incorrectos";
            cout << "" << endl
                 << endl;
        }
    };

    static void binarioADecimal()
    {
        bool valoresCorrectos = true;
        string binario;
        list<int> arrayBinario;

        cout << "Ingrese el binario(base 2) que desea convertir a entero(base 10): ";
        cin >> binario;

        for (int i = 0; i < binario.length(); i++)
        {
            if (binario[i] != '0' && binario[i] != '1')
            {
                valoresCorrectos = false;
            }
            arrayBinario.push_front(binario[i] - '0');
        };

        int decimal = 0;

        int power = 1;
        for (const auto val : arrayBinario)
        {
            decimal += val * power;
            power *= 2;
        };

        cout << "" << endl
             << endl;

        cout << "Resultado" << endl
             << endl;
        if (valoresCorrectos)
        {
            cout << decimal;
        }
        else
        {
            cout << "valores incorrectos";
        }
        cout << "" << endl;
    };

    static void decimalAHexa()
    {
        bool valoresCorrectos = true;
        string verificando;
        int entero;

        cout << "Ingrese el entero(base 10) que desea convertir a binario(base 2): ";
        cin >> verificando;
        for (const char c : verificando)
        {
            if (!isdigit(c))
            {
                valoresCorrectos = false;
            }
        }
        if (valoresCorrectos)
        {

            int cociente = stoi(verificando);
            const int base = 16;
            list<string> RestosLista;

            while (cociente >= base)
            {
                if (cociente % base < 10)
                {

                    RestosLista.push_front(to_string(cociente % base));
                }
                else
                {
                    map<string, string> valores;
                    valores["10"] = "A";
                    valores["11"] = "B";
                    valores["12"] = "C";
                    valores["13"] = "D";
                    valores["14"] = "E";
                    valores["15"] = "F";
                    RestosLista.push_front(valores[to_string(cociente % base)]);
                }
                cociente = cociente / base;
            };

            if (cociente < base && cociente > 0)
            {

                RestosLista.push_front(to_string(cociente));
            }
            cout << endl
                 << endl;
            cout << "Resultado" << endl
                 << endl;

            for (string num : RestosLista)
            {
                cout << num;
            }
            cout << endl
                 << endl;
        }else{
             cout << endl
                 << endl;
            cout << "Resultado" << endl
                 << endl;

            cout << "valores incorrctos";
            cout << endl
                 << endl;
        }
    };

    static void hexaADecimal()
    {
        bool valoresCorrectos = true;

        map<string, string> valores;
        valores["0"] = "0";
        valores["1"] = "1";
        valores["2"] = "2";
        valores["3"] = "3";
        valores["4"] = "4";
        valores["5"] = "5";
        valores["6"] = "6";
        valores["7"] = "7";
        valores["8"] = "8";
        valores["9"] = "9";
        valores["A"] = "10";
        valores["B"] = "11";
        valores["C"] = "12";
        valores["D"] = "13";
        valores["E"] = "14";
        valores["F"] = "15";

        string hexaDecimal;
        list<int> arrayDecimal;

        cout << "Ingrese el hexaDecimal(base 16) que desea convertir a entero(base 10): ";
        cin >> hexaDecimal;

        for (int i = 0; i < hexaDecimal.length(); i++)
        {
            char val = toupper(hexaDecimal[i]);
            string validated(1, val);
            if (valores.find(validated) != valores.end())
            {
                arrayDecimal.push_front(stoi(valores[validated]));
            }
            else
            {
                valoresCorrectos = false;
            }
        };

        int decimal = 0;

        int power = 1;
        for (const auto val : arrayDecimal)
        {
            decimal += val * power;
            power *= 16;
        };
        cout << endl
             << endl;
        cout << "Resultado" << endl
             << endl;
        if (valoresCorrectos)
        {
            cout << decimal;
        }
        else
        {
            cout << "los valores ingresados son incorrectos";
        }
        cout << endl
             << endl;
    };
};
