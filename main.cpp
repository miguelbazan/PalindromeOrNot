//
//  main.cpp
//  Palindrome or Not
//
//  Created by Miguel Bazán on 1/22/15.
//  Copyright (c) 2015 MiguelBazan. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
bool palindrome (string sLinea)
{
    int iSize;
    int iPos = sLinea.find(" ");        // Inicializr la variable con el numero de la posicion del 1er espacio.
    
    while (iPos > 0)
    {
        sLinea.erase(iPos,1);       //Borrar los espacios de toda la oracion.
        iPos = sLinea.find(" ");
    }
    
    iSize = sLinea.length();    // Dar el tamaño de la oracion
    
    for (int iA = 0 ; iA < iSize; iA++)
    {
        sLinea[iA] = toupper(sLinea[iA]);       //Cambiar a mayusuclas todas las palabras de la oracion
                                                // en el renglon del arreglo.
    }
    for (int iA = 0; iA < iSize/2; iA++)
    {
        if (sLinea[iA] != sLinea[iSize-iA-1])
        {
            return false;
        }
    }
    
    return true;
}
int main(int argc, const char * argv[])
{
    string sLinea;
    
    getline(cin,sLinea);
    
    while (sLinea != "END")
    {
        if (palindrome(sLinea))
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
        getline(cin, sLinea);
    }
    return 0;
}
