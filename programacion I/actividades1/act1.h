#include <iostream>
#include <map>

using namespace std;
// 1
// Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.

class Ac1
{
private:
    int horasTrabajadas;
    float valorHora, sueldo;

public:
    void setHorasTrabajadas(int horas)
    {
        horasTrabajadas = horas;
    }

    void setValorHora(float valor)
    {
        valorHora = valor;
    }

    float calcularSueldo()
    {
        return horasTrabajadas * valorHora;
    }
};

class Ac2
{
private:
    int A;
    int B;

public:
    int getA()
    {
        return A;
    }

    void setA(int a)
    {
        A = a;
    }

    int getB()
    {
        return B;
    }

    void setB(int b)
    {
        B = b;
    }

    void changeAtoB()
    {
        int inter = A;
        A = B;
        B = inter;
    }
};

// Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más $700 de premio por cada auto vendido. Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a pagar.
// Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $7800.

class Ac3
{
private:
    int autosVendidos;
    string vendedor;
    map<string, int> seller;

public:
    Ac3(string name, int vendidos)
    {
        autosVendidos = vendidos;
        vendedor = name;
    }

    map<string, int> generarSueldo()
    {
        seller[vendedor] = autosVendidos * 700 + 5000;
        return seller;
    }
};
// Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.
// Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el porcentaje de ocupación que se informará será de un 40% y el porcentaje de no ocupación será de un 60%.

class Ac4
{
private:
    int asientos;
    int ocupados;
    map<string, float> calculo;

public:
    Ac4(int asiento, int ocupado)
    {
        asientos = asiento;
        ocupados = ocupado;
    };
    map<string, float> calcularAsientos()
    {
        if (asientos > 0)
        {

            calculo["asientos Disponibles"] = 100 - (((float)ocupados / asientos) * 100);
            calculo["asientos Ocupados"] = (((float)ocupados / asientos) * 100);
        }
        else
        {
            calculo["asientos Disponibles"] = 0.0;
            calculo["asientos Ocupados"] = 0.0;
        }

        return calculo;
    }
};

// 5 Un comercio vende tres marcas de alfajores distintas A, B y C.
// Hacer un programa para ingresar por teclado la cantidad de alfajores 
//vendidos de cada una de las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.

class Ac5{
    private:
        int A; 
        int B; 
        int C;
        int totalVentas;
        
        float PrA, PrB, PrC;
        float promediar(int producto){
            totalVentas = A + B + C;
            return ((producto / (float)totalVentas) * 100) ;
        };
    public:
        Ac5(int a, int b, int c){
            A = a;
            B = b;
            C = c;
        };

        
        void promediarTodo (){
            PrA = promediar(A);
            PrB = promediar(B);
            PrC = promediar(C);
            cout << A << endl;
            cout << "promedio A: " << PrA << endl << "promedo B: " << PrB << endl << "promedio C: " << PrC << endl; 
        }
        
}; 

// 12
// Una granja vende la caja de 12 unidades a $1000 y cada huevo suelto a $120.
// Hacer un programa para ingresar la cantidad de huevos que compra un cliente y mostrar por pantalla el importe total a pagar.
// Recordatorio. Por cada 12 huevos se debe calcular una caja y el excedente se calcula como suelto.
// Ejemplo A. Si la cantidad ingresada son 15 huevos, el programa calculará 1 caja y 3 sueltos, es decir $1000 + $120 x 3 = $1360.
// Ejemplo B. Si la cantidad ingresada son 28 huevos el programa calculará 2 cajas y 4 sueltos, es decir $1000 x 2 + $120 x 4 = $2480.
// Ejemplo C. Si la cantidad ingresada son 8 huevos, el programa calculará: 0 cajas y 8 sueltos, es decir $120 x 8 = $960.
// Ejemplo D. Si la cantidad ingresada son 200 huevos, el programa calculará: 16 cajas y 8 sueltos, es decir $1000 x 16 + $120 x 8 = $16960.
class Ac11
{
private:
    int minuteToParse;
    int days;
    int hours;
    int minutes;

public:
    Ac11(int minutes) { minuteToParse = minutes; };
    void minutesTodays()
    {
        days = (minuteToParse / 60) / 24;
        hours = (minuteToParse / 60) % 24;
        minutes = minuteToParse - (days * 24 * 60 + hours * 60);

        cout << "minutos para covertir: " << minuteToParse << endl
             << endl;
        cout << "dias: " << days << endl;
        cout << "horas: " << hours << endl;

        cout << "minutes: " << minutes << endl;
    }
};

class Ac12
{
private:
    int huevos = 0;
    float importe = 0.0;

public:
    Ac12() {};
    Ac12(int cantidad)
    {
        huevos = cantidad;
    };

    void calcularImporte()
    {
        int promos;
        int sueltos;

        promos = (huevos - (huevos % 12)) / 12;
        sueltos = (huevos % 12);

        cout << "promociones:" << endl;
        cout << promos << endl;

        cout << "unidades sueltas ($120 c/u): " << endl;
        cout << sueltos << endl;

        importe += sueltos * 120;
        importe += promos * 1000;
    }

    float getImporte()
    {
        return importe;
    };
};