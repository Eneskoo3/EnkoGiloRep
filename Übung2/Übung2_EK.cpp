//Zum Kompilieren von C++ datein wird folgender 
//Befehl in das Terminal eingegeben: 

// g++ [Dateiname].cpp -o [Dateiname]

//Zum Ausführen des Codes wird folgender Befehl 
//Terminal eingegeben: 

// ./[Dateiname]


//Importieren
#include <iostream>



//Die Main methode:
int main(){
    
    //Ausgabe in die Console
    std::cout << "Hello World!" << std::endl;
    
    //Variablen deklarieren
    int zahl = 1;
    
    char character = 'A';
    double gleitpunktzahl = 2.3;
    bool boolean = true;

    std::cout << zahl << ","<< boolean<< std::endl;

    //Beendet das Programm
    return 0;
}