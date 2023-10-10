//int a = 5;
//int &b;          // Feil 1: Referanser må initialiseres ved deklarasjon.
//int *c;
//c = &b;          // Feil 2: b er en referanse, ikke en adresse. Dette vil ikke kompilere.
//*a = *b + *c;    // Feil 3: a er en int, ikke en peker. Dette vil ikke kompilere.
//&b = 2;          // Feil 4: Du kan ikke tildele en verdi til en adresse.

int main() {
    int a = 5;
    int d = 10;      // En ekstra variabel for å initialisere referansen b.
    int &b = d;      // Rettet Feil 1: Initialiserer referansen b ved deklarasjon.
    int *c;
    c = &a;          // Rettet Feil 2: Setter c til å peke på a.
    a = b + *c;      // Rettet Feil 3: a er en int, så vi trenger ikke å dereferere den.
    // &b = 2;       // Rettet Feil 4: Kommentert ut denne linjen fordi den ikke gir mening.
    return 0;
}
