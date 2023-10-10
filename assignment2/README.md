# cpp-assignment-2

## oppgave 2 

`char *line = nullptr;` 
I denne koden oppretter vi en peker som ikke peker på noe spesifikt minneområde ennå. Den er i en ventende tilstand for å få en minnelokasjon den kan referere til. Når vi prøver å bruke `strcpy(line, "Dette er en tekst");`, forsøker vi å kopiere strengen "Dette er en tekst" til pekeren `line`. Men siden `line` ikke har blitt tildelt noe minneområde for å lagre denne strengen, vil vi støte på en kompileringsfeil.



## oppgave 3

Pekeren vil fortsette å søke etter bokstaven "e" selv etter den har fullført gjennomgangen av den gitte strengen "tekst". Dette fører til at pekeren vil forsøke å aksessere minneområder utenfor strengens grenser. Som et resultat vil programmet gå inn i en uendelig loop, søke gjennom minnet uten stans, og dette vil forårsake at programmet blir uresponsivt. Dette krever at brukeren eller utvikleren manuelt avslutter programmet.

