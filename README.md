# DOKUMENTACJA – GRA W STATKI
Zasady gry: Każdy z graczy posiada po dwie plansze o wielkości, zazwyczaj, 10x10 pól. Pola oznaczone są poprzez współrzędne liczbami od 1 do 10. Na jednym z kwadratów (plansz) gracz zaznacza swoje statki, których położenie będzie odgadywał przeciwnik. Na drugim zaznacza trafione statki przeciwnika i oddane przez siebie strzały. Statki ustawiane są w pionie lub poziomie, w taki sposób, aby nie stykały się one ze sobą ani bokami, ani rogami. Okręty są różnej wielkości i zazwyczaj więcej jest jednostek o mniejszej wielkości, np. gracze mogą posiadać po jednym czteromasztowcu wielkości czterech kratek, dwóch trójmasztowcach wielkości trzech kratek, trzech dwumasztowcach o wielkości dwóch kratek i po czterech jednomasztowcach.

Trafienie okrętu przeciwnika polega na strzale, który jest odgadnięciem położenia jakiegoś statku. Strzały oddawane są naprzemiennie, poprzez podanie współrzędnych pola (np. (2,5)). W przypadku strzału trafionego, gracz kontynuuje strzelanie (czyli swój ruch) aż do momentu chybienia. Gdy wszystkie pola zajęte przez dany statek zostaną trafione, statek uznany jest za zatopiony. O chybieniu gracz informuje przeciwnika słowem „pudło”, o trafieniu „trafiony”

Schemat klas:

![image alt](https://github.com/wiktorowczuk/GraWStatki/blob/main/schemat_klas.png?raw=true)
 
Instrukcja obsługi gry: Po uruchomieniu (oraz w każdej naszej turze) gry terminal poprosi nas o podanie koordynatów naszego strzału (x y). Wpisujemy dwie liczby – pierwsza reprezentująca koordynat x na planszy oraz druga reprezentująca koordynat y na planszy. Liczby te wpisujemy po sobie w jednej linii, bez przecinków i w odstępie spacji. Następnie klikamy enter.
Przykład: 3 3

Cała linijka (razem z poprzedzającym liczby tekstem wyświetlonym przez terminal) przed naciśnięciem enter: 
Wprowadz koordynaty twojego strzalu (x y): 3 3

Po kliknięciu enter oddany jest nasz strzał we wpisane koordynaty. 

Sposób rozmieszczenia swoich statków: W repozytorium, w którym znajduje się projekt umieszczamy plik tekstowy o tytule „init.txt”, o następującym formacie: 

Wpisujemy dokładnie pięć wierszy – każdy z nich reprezentuje jeden statek. Każdy wiersz wygląda w następujący sposób:
Liczba od 2 do 5(długość statku), 
liczba od 1 do 10 reprezentująca współrzędną x punktu w którym zaczyna się statek, 
liczba od 1 do 10 reprezentująca współrzędną y punktu w którym zaczyna się statek, 
liczba 0 lub 1 reprezentująca orientację statku – pionową (0) lub poziomą (1)
Liczby te zapisujemy po sobie, w odstępie spacji i bez przecinków!
Przykładowa zawartość pliku init.txt: <br/>
5 1 2 1 <br/>
4 3 4 0 <br/>
3 5 7 1 <br/>
3 7 3 0 <br/>
2 8 8 1 <br/>

Jeżeli statek jest w orientacji pionowej, to rozciąga się on w dół od punktu, w którym się zaczyna. Przykład:
Statek: 4 3 4 0 ma długość czterech pól, zaczyna się w punkcie (3,4) na planszy i jest on w orientacji pionowej. Zatem od punktu (3,4) rozciąga się on w dół na pola (3,5), (3,6) oraz (3,7).

Jeżeli statek jest w orientacji poziomej, to rozciąga się on na prawo od punktu, w którym się zaczyna. Przykład:
Statek: 5 1 2 1 ma długość pięciu pól, zaczyna się w punkcie (1,2) na planszy i jest on w orientacji poziomej. Zatem od punktu (1,2) rozciąga się on w prawo na pola (2,2), (3,2), (4,2) oraz (5,2).
