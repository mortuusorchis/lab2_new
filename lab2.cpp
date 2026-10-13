// zadanie 1
#include <iostream>

using namespace std;

int main()

/* {
    for (int i = 5; i <= 7; i++) {
        cout << i << endl;

    }
    return 0;
}  // kod wyświetla elementy z zakresu [5,7]
/*{
    for (int i = 5; i < 7; i++) {
        cout << i << endl;

    }
    return 0;
} // kod wyświetla elementy z zakresu [5,7)
*/
/* {
    for (int i = 0; i <= 10; i = i + 2)
        cout << i << endl;
} */  // kod, który wyświetla co drugi element z zakresu [0,10]

/* {
    for (int i = 10; i >= 0; i = i - 1)
        cout << i << endl;
}*/ // kod, który wyświetla wartości od 10 do 0 

// zadanie 2
/* {
int fahr, celsius; //zmienne typu int
int start, limit, krok; //zmienne typu int

start = 0; //przypisz 0 do start
limit = 200; //przypisz 200 do limit
krok = 20; //przypisz 20 do krok

fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0
while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest <= od zmiennej limit
    celsius = 5 * (fahr - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius
    cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
    fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok
}
} */ // zadanie 2 przetestowane

// zadanie 3
/* {
    int fahr, celsius; //zmienne typu int
    int start, limit, krok; //zmienne typu int
    start = 0; //przypisz 0 do start
    limit = 200; //przypisz 200 do limit
    krok = 20; //przypisz 20 do krok
    //for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)
    while (fahr <= limit)
    {
        float celsius = (5.0 / 9.0) * (fahr - 32.0);
        cout << fahr << "\t" << celsius << endl;
        fahr = fahr + krok;

    }
} */
// zadanie 5
/*
{
    int fahr, celsius; //zmienne typu int
    int start, limit, krok; //zmienne typu int
    start = 0; //przypisz 0 do start
    limit = 200; //przypisz 200 do limit
    krok = 20; //przypisz 20 do krok
    fahr = 0.0;
    //for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)
    while (fahr <= limit)
    {
        float celsius = (5 / 9) * (fahr - 32.0);
        cout << fahr << "\t" << celsius << endl;
        fahr = fahr + krok;
 */ // sprawdzone po zmianie
 // zadanie 6
/* {

    int fahr, celsius;
    int start, limit, krok;
    start = 0;
    cout << "ustal limit: " << endl;
    cin >> limit;
    cout << "ustal krok: " << endl;
    cin >> krok;
    fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0
    while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest <= od zmiennej limit
        celsius = 5 * (fahr - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius
        cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
        fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok

    }
}
*/
// zadanie 7 
/* {
    int liczba;


    for (int i = 0; i < 10; i++)
    {
        cout << " podaj liczbe rzeczywista: " << endl;
            cin >> liczba;
             if (liczba > 0) {
                 cout << liczba << endl;
             }
             else { cout << " twoja liczba jest ujemna " << endl;
             }
    }
}*/

// zadanie 8
/*{
    for (int i = 0; i <= 100; i = i + 2)
    {
        cout << i << endl;
    }
}
*/
// zadanie 9

{
    int n;
    int c=0;
          cout << " podaj wartosc n:";
             cin >> n;
    
    for ( c = 0; c <= 100; c++)
    {
       
     
       
        if (c%n == 0) {
            cout << c << endl;
        }
        else 
        {
            cout << " ";

        }
    }

}
