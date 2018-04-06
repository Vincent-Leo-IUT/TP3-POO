#include "exception.h"
#include <string>
#include <exception>
#include <iomanip>
#include <iostream>

using namespace std;
using namespace nsUtil;

namespace
{
    void TestException()
    {
        string Libelle;
        unsigned CErr;
        for(;;)
        {
            cout << "Entrer un libelle :" << endl;
            cin >> Libelle;
            if (cin.fail())
                return;
            cout << "Entrer un code erreur :" << endl;
            cin >> CErr;
            Exception Ex (Libelle, CErr);
            Ex.display();
        }
    }
}
