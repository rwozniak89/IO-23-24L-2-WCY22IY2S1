`		`Mateusz Krakowski, Piotr Grądziel (WCY22IY2S1)


# <a name="_toc1859328109"></a><a name="_toc1468688283"></a><a name="_toc1953204156"></a><a name="_toc2045777788"></a><a name="_toc298716244"></a><a name="_toc515124812"></a><a name="_toc72161119"></a><a name="_toc994700055"></a><a name="_toc335006071"></a><a name="_toc450477369"></a><a name="_toc1475691957"></a>**Internetowa wypożyczalnia filmów/seriali, VOD, streaming**

<table><tr><th valign="top">Data</th><th valign="top">Opis</th><th valign="top">Autor</th></tr>
<tr><td valign="top"><b>11.04.2024</b></td><td valign="top"><b>Analiza zamówienia, wymagania funkcjonalne i niefunkcjonalne</b></td><td rowspan="3" valign="top"><p><b>Mateusz Krakowski,</b> </p><p><b>Piotr Grądziel</b></p></td></tr>
<tr><td valign="top"><b>13.04.2024</b></td><td valign="top"><b>Identyfikacja aktorów</b></td></tr>
<tr><td valign="top"><b>18.04.2024</b></td><td valign="top"><b>MoSCoW, diagramy przypadków użycia, pokrywanie się wymagań funkcjolanych</b></td></tr>
<tr><td valign="top"><b>28.04.2024</b></td><td valign="top"><b>Naniesienie zmian do  wymagań funkcjonalnych i niefunkcjonalnych, diagramów przypadków użycia</b></td><td valign="top"><b>Mateusz Krakowski</b></td></tr>
<tr><td valign="top"><b>29.04.2024</b></td><td valign="top"><b>Naniesienie zmian do przypadków użycia, diagramów przypadków, pokrywania się wymagań funkcjonalnych</b></td><td valign="top"><b>Piotr Grądziel</b></td></tr>
<tr><td valign="top"><b>30.04.2024</b></td><td valign="top"><b>Utworzenie prototypów ekranów i diagramów czynności</b></td><td valign="top"><p><b>Mateusz Krakowski,</b> </p><p><b>Piotr Grądziel</b></p><p></p></td></tr>
</table>



**SPIS TREŚCI**

[Internetowa wypożyczalnia filmów/seriali, VOD, streaming	1](#_toc1475691957)

[1.	Zamówienie na system internetowej wypożyczali	3](#_toc1940527316)

[1.1 Klient	3](#_toc640093345)

[1.2 Dostawca usług	3](#_toc553647600)

[1.3 Właściciel	3](#_toc1216406815)

[1.4 Dodatkowe	3](#_toc384083628)

[2.	Uszczegółowiony opis zamówienia	4](#_toc830750994)

[2.1 KLIENT	4](#_toc2031045094)

[2.2 DOSTAWCA USŁUG	8](#_toc1532175361)

[2.3 DODATKOWE	9](#_toc730274074)

[3.	Analiza zamówienia	12](#_toc1866674615)

[4.	Wymagania funkcjonalne	13](#_toc637669250)

[4.1 KLIENT	13](#_toc1111130311)

[4.2 DOSTAWCA USŁUG	13](#_toc1407234613)

[4.3 DODATKOWE	14](#_toc864596322)

[5.	Wymagania niefunkcjonalne	14](#_toc1677825310)

[5.1 KLIENT	14](#_toc706424644)

[5.2 DOSTAWCA USŁUG	14](#_toc1456124690)

[5.3 DODATKOWE	14](#_toc279672038)

[6.	Identyfikacja aktorów	15](#_toc1245321117)

[6.1 Użytkownik(dziecko)	15](#_toc1106186533)

[6.2 Użytkownik-zalogowany	15](#_toc1945937060)

[6.3 Użytkownik-niezalogowany	15](#_toc558342634)

[6.4 Pracownik obsługi platformy	15](#_toc1681890650)

[6.5 Dostawcy produkcji	16](#_toc875786618)

[7.	User Story	16](#_toc903068462)

[8.	Pokrywanie się wymagań funkcjonalnych	17](#_toc758714316)

[9.	MoSCoW	19](#_toc2143506325)

[10.	Diagramy przypadków użycia	20](#_toc1864972547)





1. # <a name="_toc988001124"></a><a name="_toc1995343491"></a><a name="_toc278791839"></a><a name="_toc2027475347"></a><a name="_toc1658173722"></a><a name="_toc292515237"></a><a name="_toc2018510624"></a><a name="_toc896128304"></a><a name="_toc1532243159"></a><a name="_toc133552762"></a><a name="_toc1940527316"></a>Zamówienie na system internetowej wypożyczali

Treść zamówienia na system/program/aplikacje dotyczącą internetowej wypożyczalni filmów, seriali, VOD, streaming.

## <a name="_toc640093345"></a>1.1 Klient
1) Rejestracja konta, logowanie 
1) Możliwość oglądania filmów, seriali z różnych urządzeń (telefon, telewizor, tablet, laptop, komputer)
1) Zakup danego pakietu (rodzinny, bez reklam, w zależności od liczby kont użytkowników)
1) Wypożyczenie filmów spoza posiadanego pakietu
1) Edycja profilu (nazwa, mail, hasło, konta użytkowników, pakiet, sposób płatności)
1) Wylogowanie się 
1) Usuwanie konta 
1) Możliwość tworzenia kont użytkowników w ramach jednej subskrypcji
1) Możliwość korzystania z wyszukiwarki filmów i seriali
1) Obsługa płatności (BLIK, Karta płatnicza, PayU, Apple Pay, Google Pay, przelew)
1) Opiniowanie filmów, reżyserów, aktorów
1) Podgląd opisu, zwiastuna, obsady, otrzymanych nagród filmów 
1) Podgląd opinii innych użytkowników, najchętniej oglądanych produkcji
1) Usługa „obejrzyj potem”
1) Możliwość wybierania kategorii filmów i seriali
1) Możliwość ustawienia konta dziecięcego
1) Proponowanie filmów, które mogłyby zostać dodane do platformy (inni użytkownicy mogła głosować za dodaniem danego filmu)
## <a name="_toc553647600"></a>1.2 Dostawca usług
1) Dodawanie produkcji 
1) Usuwanie produkcji 
1) Zarządzanie kontami, opiniami użytkowników
1) Podgląd aktualnego trendu
1) Regulowanie czasu trwania usług
1) Zagwarantowanie centrum obsługi klienta
1) Podgląd aktualnych i przewidywanych przychodów wraz z kosztami
1) Możliwość wprowadzania promocji
## <a name="_toc1216406815"></a>1.3 Właściciel
## <a name="_toc384083628"></a>1.4 Dodatkowe
1) Kontynuacja oglądania
1) Wybór języka
1) Możliwość włączenia transkrypcji
1) Jednoczesne oglądanie z różnych urządzeń 
1) Pobieranie i oglądanie filmów offline
1) Podsystem rekomendacji na podstawie historii
1) Możliwość ustawienie jakości oglądania dostępnych w pakiecie (HD-720p, FULL HD-1080p, UHD-4K)
1) Dostosowanie do praw narodowych (RODO, ust. O ochronie konsumentów, VAT)
1) Usługa ma być dostępna dla użytkowników Windows, Linux i aplikacji mobilnych iOS i Android
1) Usługa ma być dostępna przez 24h przez 7 dni w tygodniu
1) Możliwość zakupu pakietu prezentowego
1) Możliwość włączenia podzielonego ekranu
1) Zapowiedzieć przyszłych produktów, które będą dodane na platformę
2. # <a name="_toc830750994"></a>Uszczegółowiony opis zamówienia
## <a name="_toc2031045094"></a>2.1 KLIENT
Dot. 1a) Rejestracja konta, logowanie 



Użytkownik ma możliwość utworzenia nowego konta w aplikacji poprzez podanie wymaganych danych, takich jak adres e-mail, nazwa użytkownika i hasło. Po pomyślnej rejestracji użytkownik będzie mógł korzystać z pełnej funkcjonalności aplikacji, takiej jak dostęp do treści, zarządzanie ustawieniami konta itp. Zarejestrowani użytkownicy mogą zalogować się do swoich kont, podając swoje dane uwierzytelniające, takie jak adres e-mail i hasło. Po udanym uwierzytelnieniu użytkownik uzyskuje dostęp do swojego konta i pełnej funkcjonalności aplikacji, zachowując swoje preferencje, historię oglądania itp.



Dot. 1b) Możliwość oglądania filmów, seriali z różnych urządzeń (telefon, telewizor, tablet, laptop, komputer)



Użytkownik ma możliwość kontynuowania oglądania filmów i seriali na różnych urządzeniach, takich jak telefon, telewizor, tablet, laptop lub komputer. To oznacza, że użytkownik może zatrzymać odtwarzanie na jednym urządzeniu i wznowić je na innym w dowolnym momencie, zapewniając elastyczność i wygodę. Aplikacja umożliwia użytkownikom logowanie się do swoich kont z różnych urządzeń, zapewniając spójność danych i preferencji użytkownika niezależnie od urządzenia, z którego korzystają. Logowanie pozwala również na dostęp do personalizowanego konta użytkownika.



Dot. 1c) Zakup danego pakietu (rodzinny, bez reklam, w zależności od liczby kont użytkowników)



Użytkownik ma możliwość zakupu różnych pakietów subskrypcji oferowanych przez aplikację streamingową, takich jak pakiet rodzinny, pakiet bez reklam lub pakiet zależny od liczby kont użytkowników. Wybór pakietu może być uzależniony od preferencji użytkownika oraz jego potrzeb dotyczących dostępu do treści. System umożliwia użytkownikom wybór preferowanej opcji subskrypcji w zależności od ich potrzeb, co może obejmować dostęp do treści w jakości HD, brak reklam, możliwość oglądania na wielu urządzeniach jednocześnie itp. Po zakupie pakietu subskrypcji użytkownik ma dostęp do wszystkich funkcji i korzyści związanych z wybranym pakietem, takich jak brak reklam, możliwość tworzenia profilu rodzinnego dla wielu użytkowników, korzystanie z ekskluzywnych treści itp.

Dot. 1d) Wypożyczenie filmów spoza posiadanego pakietu



Użytkownik ma możliwość wypożyczenia filmów lub seriali, które nie są dostępne w ramach jego obecnego pakietu subskrypcji. Wypożyczenie może obejmować określoną opłatę za dostęp do treści przez określony czas. System umożliwia użytkownikom przeglądanie i wybór płatnych opcji wypożyczenia, które pozwalają na dostęp do konkretnych treści za dodatkową opłatą, niezależnie od rodzaju pakietu subskrypcji posiadanej przez użytkownika. Po dokonaniu wypożyczenia użytkownik ma dostęp do treści przez określony czas, po którym treść staje się niedostępna, chyba że użytkownik ponownie dokona opłaty za wypożyczenie lub zakupi pełną subskrypcję obejmującą tę treść.



Dot. 1e) Edycja profilu (nazwa, mail, hasło, konta użytkowników, pakiet, sposób płatności)



Użytkownik ma możliwość edycji swoich danych osobowych, takich jak nazwa użytkownika, adres e-mail oraz hasło, w celu aktualizacji informacji na swoim profilu. Użytkownik może zarządzać kontami użytkowników przypisanymi do swojego profilu, co może obejmować dodawanie nowych kont, usuwanie istniejących kont lub zmianę uprawnień dostępu dla poszczególnych kont. Użytkownik ma możliwość zmiany swojego obecnego pakietu subskrypcji, co może obejmować zmianę rodzaju pakietu (np. z pakietu standardowego na pakiet rodzinny) oraz aktualizację informacji o płatności. Użytkownik może zmienić preferowany sposób płatności, co może obejmować dodanie nowej karty płatniczej, ustawienie płatności przez system PayU, Apple Pay, Google Pay, BLIK itp.

Dot. 1f) Wylogowanie się 



Użytkownik ma możliwość wylogowania się z aplikacji, co powoduje zakończenie bieżącej sesji użytkownika i zaprzestanie dostępu do jego konta.





Dot. 1g) Usuwanie konta 



Użytkownik ma możliwość usunięcia swojego konta z aplikacji, co powoduje trwałe usunięcie wszystkich związanych z nim danych, w tym historii oglądania, preferencji, ustawień konta itp.

Dot. 1h) Możliwość tworzenia kont użytkowników w ramach jednej subskrypcji



Użytkownik, będący właścicielem subskrypcji, ma możliwość tworzenia i zarządzania kontami użytkowników dla innych osób, które mogą korzystać z usług aplikacji na tej samej subskrypcji.



Dot. 1i) Możliwość korzystania z wyszukiwarki filmów i seriali



Użytkownik ma możliwość wyszukiwania filmów i seriali za pomocą funkcji wyszukiwania dostępnej w aplikacji. Wyszukiwarka umożliwia użytkownikowi wprowadzenie kryteriów wyszukiwania, takich jak tytuł, nazwa aktora, gatunek, rok produkcji itp., w celu znalezienia konkretnej treści.





Dot. 1j) Obsługa płatności (BLIK, Karta płatnicza, PayU, Apple Pay, Google Pay, przelew)

Użytkownik ma możliwość dokonywania płatności za dostęp do treści za pomocą różnych metod, takich jak BLIK, karta płatnicza, PayU, Apple Pay, Google Pay oraz tradycyjny przelew bankowy. System zapewnia bezpieczny proces płatności, który chroni dane użytkownika i zapewnia pewność, że transakcje są dokonywane bezpiecznie. Po zakończeniu płatności system automatycznie udziela użytkownikowi dostępu do zakupionych treści lub aktywuje abonament, umożliwiając natychmiastowy dostęp do jego zawartości.

Dot. 1k) Opiniowanie filmów, reżyserów, aktorów 

Dot. 1m) Podgląd opinii innych użytkowników, najchętniej oglądanych produkcji 



Każdy użytkownik (subskrybent) serwisu ma możliwość dodawania opinii na temat filmów, seriali, aktorów i reżyserów. Opinia składa się z tekstu pisanego maksymalnie do 100 znaków oraz opinii w skali 1-5 w postaci gwiazdek. Opinie będą ustawiane w ranking na podstawie średniej wartości otrzymanych gwiazdek. Ranking będzie podzielony na kategorie filmy, seriale, aktorzy, reżyserzy i będzie możliwy do wyświetlenia na wszystkich użytkowników- również tych, którzy nie wykupili subskrypcji. Opinie będą również dostępne poszczególnie dla danej produkcji po wejściu w opis produkcji. Na stronie głównej serwisu będzie tworzona lista 10 najchętniej oglądanych produkcji (pod uwagę będzie brana ilość użytkowników, która obejrzała więcej niż połowę danego filmu lub więcej niż dwa odcinki danego serialu) - z podziałem na filmy i seriale- z ostatniego tygodnia. Lista ta będzie odświeżania w każdą niedziele na podstawie danych z minionego tygodnia.



Dot. 1l) Podgląd opisu, zwiastuna, obsady, otrzymanych nagród filmów 



Użytkownik ma możliwość wyświetlenia opisu filmu lub serialu, który zawiera istotne informacje dotyczące fabuły, gatunku, reżysera itp. Użytkownik może obejrzeć zwiastun filmu lub serialu, który dostarcza wizualnego wrażenia przedstawiającego treść i styl produkcji. System umożliwia użytkownikowi przeglądanie obsady filmu lub serialu, co pozwala na poznanie aktorów i innych osób zaangażowanych w produkcję. Użytkownik może sprawdzić otrzymane nagrody przez film lub serial, co może wpłynąć na decyzję o wyborze treści do oglądania.



Dot. 1n) Usługa „obejrzyj potem”



Każdy użytkownik może dodawać filmy i seriale do listy "obejrzyj potem", aby zapisać treści, które chciałby obejrzeć w przyszłości. System umożliwia użytkownikom przeglądanie listy zawartości dodanych do "obejrzyj potem" w celu łatwego dostępu do zapisanych treści. Użytkownik ma możliwość usuwania elementów z listy "obejrzyj potem", gdy już je obejrzy lub gdy nie jest już zainteresowany ich oglądaniem. System zapewnia spójność listy "obejrzyj potem" na wszystkich urządzeniach użytkownika, umożliwiając dostęp do zapisanych treści z dowolnego miejsca i urządzenia.



Dot. 1o) Możliwość wybierania kategorii filmów i seriali





Każdy użytkownik korzystający z aplikacji streamingowej będzie miał możliwość wyboru kategorii filmów i seriali spośród dostępnych opcji. System będzie prezentować użytkownikom listę wszystkich dostępnych kategorii do wyboru, zapewniając przejrzysty i łatwy w obsłudze interfejs. Po wybraniu jednej lub więcej kategorii, użytkownik będzie mógł przeglądać filmy i seriale należące do wybranej kategorii, co umożliwi mu łatwe znalezienie interesującej go treści. System będzie umożliwiał użytkownikom zmianę wybranych kategorii w dowolnym momencie, automatycznie aktualizując listę dostępnych treści zgodnie z nowymi preferencjami użytkownika.

Dot. 1p) Możliwość ustawienia konta dziecięcego 



Każda osoba wykupująca pakiet ma możliwość ustawienia konta dziecięcego (konto dziecięce będzie uznawane jako oddzielne konto, zatem przykładowo dla klienta chcącego wykupić dostęp na siebie i swojego dziecka wymagane jest wykupienie pakietu dla minimum dwóch użytkowników). Konto dziecięce będzie zawierać listę produkcji w kategorii dziecięcej- nie będzie zawierać innych opcji takich jaki opiniowanie czy podgląd ze względu na kategorie. Dodatkowo osoba zarządzająca kontem dziecięcym ma możliwość ustawienia dziennego limitu czasu oglądania oraz zablokowania możliwości oglądania wybranych produkcji dziecięcych.

Dot. 1q) Proponowanie filmów, które mogłyby zostać dodane do platformy (inni użytkownicy mogła głosować za dodaniem danego filmu) 

W specjalnej zakładce każdy z subskrybentów ma możliwość dodania propozycji filmu lub serialu, który chciałby obejrzeć na platformie. Może on dodawać do propozycji każdy film, który odbył już swoją premierę. Jeżeli jakiś film został już wcześniej zaproponowany przez innego użytkownika to dodaje się znacznik ilości wystąpień do tego filmu. Po ilości znaczników będzie można zobaczyć, który film jest najbardziej pożądany przez klientów. Lista wszystkich filmów w uszeregowanych zgodnie z ilością występujących zgłoszeń będą widoczne w postaci listy.



## <a name="_toc1532175361"></a>2.2 DOSTAWCA USŁUG    
Poniżej opisane wymagania będą dostępne jedynie dla osób zajmujących się administracją serwisu i zarządu. Wymagane jest specjalne konto do zarządzania i edytowania tych wymagań.

Dot. 2a) Dodawanie produkcji

Dostawca usług ma możliwość dodawania nowych produkcji, takich jak filmy i seriale, do biblioteki dostępnej dla użytkowników aplikacji streamingowej. Proces dodawania produkcji może obejmować wprowadzenie szczegółowych informacji o treści, takich jak tytuł, opis, gatunek, daty premiery, obsada itp. , oraz przesłanie plików wideo i innych zasobów.





Dot. 2b) Usuwanie produkcji 

Dostawca usług ma możliwość usuwania produkcji z biblioteki dostępnej dla użytkowników aplikacji streamingowej. Proces usuwania produkcji może być konieczny z różnych powodów, takich jak wygaśnięcie licencji na treść, decyzja o usunięciu treści ze względów prawnych lub jakość techniczna.



Dot. 2c)  Zarządzanie kontami, opiniami użytkowników

Dostawca usług ma możliwość zarządzania kontami użytkowników w aplikacji streamingowej. Proces zarządzania kontami może obejmować tworzenie nowych kont użytkowników, usuwanie istniejących kont, zmianę danych użytkowników oraz zarządzanie uprawnieniami dostępu do różnych funkcji i treści w aplikacji. Dostawca usług zarządza opiniami użytkowników na temat treści dostępnych w aplikacji. Proces zarządzania opiniami może obejmować moderację opinii, odpowiedzi na pytania i komentarze użytkowników, oraz podejmowanie działań w celu poprawy jakości usług na podstawie opinii użytkowników.



Dot. 2e) Regulowanie czasu trwania usług

Dostawca usług ma możliwość regulowania czasu trwania dostępu do treści lub subskrypcji dla użytkowników. Proces ten może obejmować różne scenariusze, takie jak

-Ograniczenie czasu dostępu do określonych treści, na przykład udostępnienie filmu do obejrzenia przez określony czas od daty zakupu.

-Okresowe automatyczne odnawianie subskrypcji na określony czas, na przykład miesięczny abonament, który jest odnawiany co miesiąc automatycznie, chyba że użytkownik zdecyduje się zrezygnować.



Dot. 2f) Zagwarantowanie centrum obsługi klienta

Dostawca usług zapewnia centralne miejsce, które umożliwia użytkownikom uzyskanie pomocy i wsparcia w przypadku pytań, problemów technicznych, reklamacji lub innych kwestii związanych z korzystaniem z aplikacji. Centrum obsługi klienta może obejmować różne kanały komunikacji, takie jak:

-Obsługę telefoniczną, gdzie użytkownicy mogą zadzwonić w celu uzyskania pomocy od agentów obsługi klienta.

-Obsługę e-mailową, gdzie użytkownicy mogą wysłać wiadomość e-mail z zapytaniem lub problemem, na który otrzymają odpowiedź od zespołu wsparcia.

-Obsługę czatu na żywo, gdzie użytkownicy mogą uzyskać natychmiastową pomoc za pośrednictwem czatu online.

-Baza wiedzy lub sekcję pomocy, która zawiera odpowiedzi na często zadawane pytania (FAQ) oraz poradniki użytkownika.

Dot. 2d) Podgląd aktualnego trendu 

Dot. 2g) Podgląd aktualnych i przewidywanych przychodów wraz z kosztami 

Możliwość wglądu w statystki. Statystyki powinny przedstawić dane na temat: aktualnie najchętniej oglądanych produkcji, ile procent produkcji zostało obejrzanych do końca, ram czasowych w jakich użytkownicy korzystają z systemu, urządzenia z jakich użytkownicy korzysta w celu dostępu do systemu, ilości wejść w opis danej produkcji, ilości dodanych komentarzy- kont, które wydają najwięcej opinii, ilość zakupionych kont (z podziałem na rodzaj, datę zakupu, datę odnowienia subskrypcji)- na podstawie tych danych oraz innych przychodów tworzyć zestawienie przychodów, wielkość wydatków (kupno praw do produkcji, opłacenie pracowników, sprzętu ).  Za inne przychody uznaje się przychody z kontraktów reklamowych oraz donacji. Na podstawie przychodów i wydatków można wygenerować raport z danego okresu wskazujący bilans kosztowy. Statystki powinny mieć wygląd upraszczający graficzną ocenę- wykresy, tabele, funkcje.



Dot. 2h) Możliwość wprowadzania promocji 



Administrator ma możliwość wprowadzania promocji dla użytkowników. Promocję mają swoje ograniczenie czasu trwania wraz z ewentualnych ograniczeniem kont na których mogą zostać aktywowane- przykładowo dla kont dla których aktualna subskrypcja trwa dłużej niż 2 lata. Promocje mogą dotyczyć kosztu zakupu subskrypcji lub kosztu wypożyczenia filmu- mogą być procentowe lub dotyczyć obniżenia ceny o konkretną wartość. 



## <a name="_toc730274074"></a>2.3 DODATKOWE
Dot. 4a) Kontynuacja oglądania

Aplikacja umożliwia użytkownikowi kontynuowanie oglądania filmów lub seriali od miejsca, w którym zostały one przerwane. System zapamiętuje postęp oglądania każdej produkcji, co pozwala użytkownikowi łatwo wrócić do treści, którą ostatnio oglądał.



Dot. 4b) Wybór języka

Użytkownik ma możliwość wyboru preferowanego języka interfejsu oraz dźwięku i napisów podczas oglądania filmów i seriali. Aplikacja umożliwia użytkownikowi dostosowanie języka interfejsu do jego preferencji oraz wybór języka napisów lub dźwięku, co zapewnia spersonalizowane doświadczenie oglądania.



Dot. 4c) Możliwość włączenia transkrypcji

Użytkownik ma możliwość włączenia transkrypcji podczas oglądania filmów i seriali. Transkrypcja wyświetla tekstowy opis dialogów i dźwięków występujących w treści, co umożliwia użytkownikom odbieranie treści za pomocą czytania, nawet jeśli nie mogą słyszeć lub preferują czytanie napisów.



Dot. 4d) Jednoczesne oglądanie z różnych urządzeń 

Użytkownicy mają możliwość jednoczesnego oglądania treści na wielu urządzeniach, takich jak telefony komórkowe, tablety, komputery stacjonarne, smartfony, smartfony, itp., korzystając z jednej subskrypcji lub konta



Dot. 4e) Pobieranie i oglądanie filmów offline

Użytkownik ma możliwość pobierania wybranych filmów i seriali na swoje urządzenie w celu oglądania ich w trybie offline, bez konieczności połączenia z internetem. Pobrane treści mogą być dostępne do oglądania przez określony czas lub do momentu ręcznego usunięcia ich przez użytkownika.



Dot. 4g) Możliwość ustawienie jakości oglądania dostępnych w pakiecie (HD-720p, FULL HD-1080p, UHD-4K)

Użytkownik ma możliwość wyboru preferowanej jakości oglądania w ramach pakietu subskrypcji. Dostępne opcje jakości mogą obejmować różne rozdzielczości, takie jak HD (720p), Full HD (1080p) oraz UHD (4K), w zależności od oferowanych możliwości przez dostawcę usług i zgodności z urządzeniem użytkownika.



Dot. 4i) Dostosowanie do praw narodowych (RODO, ust. O ochronie konsumentów, VAT)

Aplikacja streamingowa musi być zgodna z obowiązującymi przepisami prawa narodowego, takimi jak RODO, które regulują ochronę danych osobowych użytkowników. Ponadto, aplikacja musi spełniać przepisy dotyczące ochrony konsumentów, zapewniając im odpowiednie prawa i środki ochrony. Oprócz tego, musi być zgodna z przepisami podatkowymi, takimi jak VAT, co obejmuje odpowiednie rozliczenia podatkowe za usługi świadczone w danym kraju.



Dot. 4j) Usługa ma być dostępna dla użytkowników Windows, Linux i aplikacji mobilnych iOS i Android



Użytkownicy tych różnych platform mają możliwość korzystania z usługi na swoich preferowanych urządzeniach, bez względu na to, czy są to komputery stacjonarne, urządzenia przenośne czy smartfony.



Dot. 4k) Usługa ma być dostępna przez 24h przez 7 dni w tygodniu

Usługa streamingowa jest dostępna dla użytkowników przez całą dobę, 7 dni w tygodniu, bez przerw. Użytkownicy mają możliwość korzystania z usługi o dowolnej porze dnia i nocy, niezależnie od lokalizacji geograficznej czy strefy czasowej.





Dot. 4l) Możliwość zakupu pakietu prezentowego

Użytkownik ma możliwość zakupu pakietu prezentowego, który może następnie podarować innym osobom. Pakiet prezentowy może obejmować subskrypcję na określony czas lub dostęp do wybranych treści w ramach aplikacji streamingowej.



Dot. 4m) Możliwość włączenia podzielonego ekranu

Użytkownik ma możliwość włączenia trybu podzielonego ekranu podczas korzystania z aplikacji streamingowej. Tryb podzielonego ekranu umożliwia użytkownikowi jednoczesne oglądanie treści w aplikacji i wykonywanie innych czynności na swoim urządzeniu, na przykład przeglądanie Internetu, sprawdzanie wiadomości czy korzystanie z innych aplikacji.



Dot. 4n) Zapowiedzieć przyszłych produktów, które będą dodane na platformę

Platforma streamingowa ma możliwość zapowiadania przyszłych produktów, które zostaną dodane do jej biblioteki treści. Zapowiedzi mogą obejmować nowe filmy, seriale, programy telewizyjne, dokumenty lub inne treści, które zostaną udostępnione użytkownikom w przyszłości.



Dot. 4f) Podsystem rekomendacji na podstawie historii

Na podstawie wcześniej oglądanych produkcji użytkownikowi na stronie głównej platformy podpowiadają się podobne produkcje (podobieństwo określane jest na podstawie kategorii, aktorów, typu- serial, film, program rozrywkowy) 


Dot. 4g) Możliwość ustawienie jakości oglądania dostępnych w pakiecie (HD-720p, FULL HD-1080p, UHD-4K)

Każda z dostępnych produkcji ma możliwość wyboru jakości wideo w jakim będzie odtwarzana. Do wyboru dostępne są 4 możliwości. W zależności od jakości zmienia się ilość Internetu niezbędna do płynnego odtwarzania- im lepsza jakość tym więcej potrzebnego Internetu.

3. # <a name="_toc1370357589"></a><a name="_toc894488349"></a><a name="_toc1278639124"></a><a name="_toc699472169"></a><a name="_toc1513983827"></a><a name="_toc2112331439"></a><a name="_toc786700552"></a><a name="_toc942604573"></a><a name="_toc768119845"></a><a name="_toc219181384"></a><a name="_toc1866674615"></a>Analiza zamówienia
System ma umożliwić korzystanie klientom zalogowanym i niezalogowanym.

Niezalogowany użytkownik może tylko przeglądać ofertę aplikacji (wyszukać filmy/seriale po tytule, aktorze, producencie, reżyserze, gatunku). Wybranie konkretnej pozycji daje klientowi możliwość poznania szczegółowych informacji (pobieranych z bazy danych). Przykładem takich informacji jest ważność danego produktu (pakietu) oraz jego cena. Użytkownik ma mieć możliwość dodania produktów do koszyka, a następnie złożenia zamówienia (po podaniu niezbędnych informacji dotyczących płatności).

Użytkownik ma mieć możliwość założenia konta, a w przypadku posiadania takowego – zalogowania się. Zalogowany użytkownik otrzymuje dodatkowe benefity w możliwościach serwisu np. zapowiedź o przyszłych produktach, które zostaną dodane na platformę. Zalogowany użytkownik otrzymuje dostęp do produktów zawierających się w posiadanym przez niego pakiecie. Użytkownik ma możliwość wypożyczenia filmu spoza pakietu po jednorazowej płatności oraz zakupu pakietu prezentowego. Użytkownik w każdej chwili ma możliwość edycji konta (np. zmianę sposobu płatności), wylogowania się oraz usunięcia konta. Każdy użytkownik może wyrażać swoją opinie, czytać opinie innych użytkowników oraz dawać ocenę konkretnego produktu (filmy lub seriale z lepszymi ocenami zawierają się w zakładce „Polecane”). Każdy użytkownik może podawać propozycje filmów, które mogłyby zostać dodane na platformę. Użytkownik może kontynuować oglądanie interesującego go filmu lub serialu oraz dodać go do zakładki „obejrzyj potem”. Użytkownik ma możliwość selekcji filmów, poprzez wybranie interesującej go kategorii. Użytkownik w trakcie oglądania może wybrać język, włączyć transkrypcję, ustawić jakość oglądania (z dostępnych w jego pakiecie) oraz włączyć opcję podzielonego ekranu. Jeżeli użytkownik pobierze film ma możliwość obejrzenia go offline. Użytkownik może korzystać z aplikacji z wielu różnych urządzeń i systemów operacyjnych w każdej chwili (jest ona dostępna przez 24 godziny przez 7 dni w tygodniu).

Dostawca usług zajmuje się dodawaniem, usuwaniem produktów oraz dodawaniem promocji na produkty lub pakiety. Dodatkowo zarządza on kontami użytkowników oraz ich opiniami (sprawdza czy nie zostały naruszone zasady regulaminu aplikacji). Dostawca usług reguluje czasem trwania usług. Dostawca usług ma wgląd w aktualne przychody, koszty oraz panujący na rynku trend. Gwarantuje on również centrum obsługi klienta, która ma zapewnić pomoc użytkownikom w przypadku jakichkolwiek problemów związanych z aplikacją.


3. # <a name="_toc1773875601"></a><a name="_toc1192322366"></a><a name="_toc162286799"></a><a name="_toc251807584"></a><a name="_toc1501701753"></a><a name="_toc1095139724"></a><a name="_toc890957025"></a><a name="_toc396449475"></a><a name="_toc2016278516"></a><a name="_toc1296465591"></a><a name="_toc637669250"></a>Wymagania funkcjonalne
## <a name="_toc83706431"></a><a name="_toc1306718518"></a><a name="_toc505441186"></a><a name="_toc648404984"></a><a name="_toc1560857850"></a><a name="_toc1123391328"></a><a name="_toc1097397446"></a><a name="_toc2064305574"></a><a name="_toc383236118"></a><a name="_toc1707988116"></a><a name="_toc1111130311"></a>4.1 KLIENT
4\.1.1 Możliwość zalogowania się do systemu przy użyciu swojej nazwy użytkownika i hasła

4\.1.2 Możliwość oglądania produktów z różnych urządzeń

4\.1.3 Zakup odpowiedniego pakietu

4\.1.4 Możliwość ustawienia konta dziecięcego

4\.1.5 Proponowania filmów, które powinny zostać dodane na platformę	

4\.1.6 Wypożyczenie filmów spoza posiadanego pakietu

4\.1.7 Edycji profilu

4\.1.8 Użytkownik powinien mieć możliwość wylogowania się

4\.1.9 Użytkownik powinien mieć możliwość usunięcia konta

4\.1.10 Użytkownik powinien mieć możliwość stworzenia kont wielu użytkowników w ramach jednej subskrypcji

4\.1.11 Wyszukiwanie filmów i seriali

4\.1.12 Możliwość płatności za pomocą różnych form

4\.1.13 Opiniowanie filmów, reżyserów i aktorów

4\.1.14 Podgląd opinii innych użytkowników

4\.1.15 Podgląd opisu, zwiastuna, obsady i otrzymanych nagród filmów

4\.1.16 Użytkownik powinien mieć możliwość dodania produkcji, którą chciałby obejrzeć później

4\.1.17 Wybór kategorii filmów i seriali
## <a name="_toc1407234613"></a>4<a name="_toc629403589"></a><a name="_toc1613221977"></a><a name="_toc1034772120"></a><a name="_toc1479509227"></a><a name="_toc1956556749"></a><a name="_toc1218643656"></a><a name="_toc78910836"></a><a name="_toc1578151603"></a><a name="_toc1027720094"></a><a name="_toc602347632"></a>.2 DOSTAWCA USŁUG	
4\.2.1 Możliwość usuwania produkcji

4\.2.2 Zarządzanie kontami użytkowników

4\.2.3 Możliwość zarządzania opiniami użytkowników

4\.2.4 Dostawca usług powinien zagwarantować pomoc techniczną użytkownikom

4\.2.5 Możliwość dodawania produkcji

4\.2.6 Możliwość wprowadzania promocji

## <a name="_toc864596322"></a>4<a name="_toc1279351257"></a><a name="_toc1259723036"></a><a name="_toc2140203380"></a><a name="_toc1000865834"></a><a name="_toc346440422"></a><a name="_toc1448696604"></a><a name="_toc1632299007"></a><a name="_toc166832850"></a><a name="_toc458562456"></a><a name="_toc1462204315"></a>.3 DODATKOWE
4\.3.1 Kontynuacja oglądania danej produkcji

4\.3.2 Możliwość włączenia transkrypcji

4\.3.3 Oglądanie z różnych urządzeń jednocześnie

4\.3.4 Możliwość pobierania i oglądania filmów offline

4\.3.5 Ustawienie jakości oglądania

4\.3.6 Zakupu pakietu prezentowego

4\.3.7 Włączenie opcji podzielonego ekranu

4\.3.8 Możliwość podglądu przyszłych produktów, które zostaną dodane na platformę
3. # <a name="_toc1610512088"></a><a name="_toc2058345149"></a><a name="_toc1926089220"></a><a name="_toc1610855944"></a><a name="_toc2091814708"></a><a name="_toc1268216369"></a><a name="_toc1037343825"></a><a name="_toc1876506561"></a><a name="_toc209174521"></a><a name="_toc8803289"></a><a name="_toc1677825310"></a>Wymagania niefunkcjonalne
## <a name="_toc1204492891"></a><a name="_toc1328510185"></a><a name="_toc1290363380"></a><a name="_toc474230089"></a><a name="_toc103975579"></a><a name="_toc723605332"></a><a name="_toc2082672928"></a><a name="_toc2023037573"></a><a name="_toc1474682615"></a><a name="_toc2143488879"></a><a name="_toc706424644"></a>5.1 KLIENT
5\.1.1 Platforma musi zapewnić bezpieczne przechowywanie danych użytkowników, szyfrowanie transmisji oraz ochronę przed atakami cybernetycznymi

5\.1.2 Interface musi być intuicyjny i łatwy obsłudze dla różnych grup wiekowych i przedziałów umiejętności technicznych użytkowników
## <a name="_toc1456124690"></a>5<a name="_toc1573953355"></a><a name="_toc685911975"></a><a name="_toc125910148"></a><a name="_toc124534095"></a><a name="_toc1323372445"></a><a name="_toc1755837513"></a><a name="_toc965096893"></a><a name="_toc1703275993"></a><a name="_toc1000189057"></a><a name="_toc1263796191"></a>.2 DOSTAWCA USŁUG	
5\.2.1 Możliwość zarządzania i analizy danych dotyczycących aktualnych dotyczycących

5\.2.2 Dostawca usług powinien mieć możliwość zarządzania i analizy danych finansów (przychodów i kosztów)
## <a name="_toc279672038"></a>5<a name="_toc749445519"></a><a name="_toc1081908560"></a><a name="_toc873529317"></a><a name="_toc99021237"></a><a name="_toc2099608103"></a><a name="_toc148858109"></a><a name="_toc358124806"></a><a name="_toc1099483363"></a><a name="_toc205168327"></a><a name="_toc1217993256"></a>.3 DODATKOWE
5\.3.1 Platforma musi obsługiwać duże obciążenia użytkowników jednocześnie bez utraty jakości transmisji lub opóźnień w odtwarzaniu 

5\.3.2 Zgodność z regulacjami dotyczącymi czasu trwania usług

5\.3.3 Platforma musi zapewnić dostępność do usługi wynoszącą 99,999% czasu

5\.3.4 Zapewnienie zgodności z regulacjami dotyczącymi przestrzegania praw autorskich i licencjonowania treści

5\.3.5 Platforma musi być kompatybilna z różnymi przeglądarkami internetowymi oraz urządzeniami, takimi jak smartfony, tablety, komputery stacjonarne i telewizory

5\.3.6 Dostęp w różnych językach

5\.3.6 Dostęp dla użytkowników Windows, Linux i aplikacji mobilnych iOS i Android
3. # <a name="_toc829533926"></a><a name="_toc2138589520"></a><a name="_toc354778754"></a><a name="_toc1706807337"></a><a name="_toc1045301887"></a><a name="_toc1079584620"></a><a name="_toc1683119526"></a><a name="_toc2073802526"></a><a name="_toc626470674"></a><a name="_toc14921088"></a><a name="_toc1245321117"></a>Identyfikacja aktorów
## <a name="_toc802167877"></a><a name="_toc716932140"></a><a name="_toc1519067488"></a><a name="_toc571860967"></a><a name="_toc271079342"></a><a name="_toc32609334"></a><a name="_toc1113706991"></a><a name="_toc1008515412"></a><a name="_toc705749181"></a><a name="_toc1413024545"></a><a name="_toc1106186533"></a>6.1 Użytkownik(dziecko)
Osoba młoda, która korzysta z aplikacji pod nadzorem. Ogląda produkcje przeznaczone jedynie dla swojej kategorii wiekowej- dziecięcej. Osoba ta używa aplikacji jedynie do oglądania produkcji.
## <a name="_toc1661048630"></a><a name="_toc70116659"></a><a name="_toc1223717099"></a><a name="_toc228473835"></a><a name="_toc581230134"></a><a name="_toc1791480936"></a><a name="_toc1634362493"></a><a name="_toc2064104575"></a><a name="_toc1759362150"></a><a name="_toc1851713962"></a><a name="_toc1945937060"></a>6.2 Użytkownik-zalogowany
Osoba mająca wykupioną jedną z subskrypcji dostępnych w aplikacji. Używająca aplikacji do oglądania i opiniowania produkcji, zarządzania kontem użytkownika(dziecko). Chce, aby aplikacja posiadała szereg udogodnień poprawiających wrażenia (kontynuacja oglądania, podpowiedzi co obejrzeć...). 
## <a name="_toc1539673631"></a><a name="_toc1340626918"></a><a name="_toc705500694"></a><a name="_toc587776130"></a><a name="_toc393426355"></a><a name="_toc1198577217"></a><a name="_toc1253068369"></a><a name="_toc896773537"></a><a name="_toc866098352"></a><a name="_toc1478593813"></a><a name="_toc558342634"></a>6.3 Użytkownik-niezalogowany
Osoba nie posiadająca aktualnej subskrypcji aplikacji chcąca dowiedzieć się jaką ofertą produkcji dysponuje platforma. Chcąca dodatkowo zobaczyć opinie o danych produkcjach oraz co jest najchętniej oglądane przez innych użytkowników.
## <a name="_toc208296670"></a><a name="_toc689618727"></a><a name="_toc1989873479"></a><a name="_toc1905998774"></a><a name="_toc241231266"></a><a name="_toc496569603"></a><a name="_toc210470311"></a><a name="_toc949492273"></a><a name="_toc4940545"></a><a name="_toc1297954646"></a><a name="_toc1681890650"></a>6.4 Pracownik obsługi platformy
Administrator może zajmować się różnymi aspektami działania aplikacja, jest to raczej grupa osób niż pojedyncza jednostka. Osoby te zajmują się obsługą aplikacji od drugiej strony niż użytkownik. Ustalają wygląd platformy aplikacji oraz zarządzaniem treściami zawartymi na platformie. Szukają i ustalają jakie produkcje zostaną dodane na platformie, łącznie z zawieraniem z nimi odpowiednich umów. Zarządzają strefą opinii, zgłoszeń filmów do dodania oraz obsługą, aby platforma funkcjonowała bez przerwy. Odpowiadają i starają się rozwiązać problemy z jakimi może się spotkać użytkownik aplikacji.
## <a name="_toc20964840"></a><a name="_toc752081859"></a><a name="_toc1119367238"></a><a name="_toc342782948"></a><a name="_toc1017999739"></a><a name="_toc1001817480"></a><a name="_toc452781812"></a><a name="_toc1667768303"></a><a name="_toc1646546905"></a><a name="_toc696303374"></a><a name="_toc875786618"></a>6.5 Dostawcy produkcji
Jest właścicielem praw autorskich dla danych filmów. Potrzebuje dostępu do listy produkcji dostępnych na platformie, aby mógł na jej podstawie proponować administratorom aplikacji swoje produkcje- te które nie są jeszcze dostępne.
3. # <a name="_toc1400158760"></a><a name="_toc1910552657"></a><a name="_toc743665037"></a><a name="_toc259470848"></a><a name="_toc398972963"></a><a name="_toc332580168"></a><a name="_toc1532134626"></a><a name="_toc468885855"></a><a name="_toc1022014225"></a><a name="_toc2023389730"></a><a name="_toc903068462"></a>User Story
US1

- Ktoś loguje się na swoje konto na platformie internetowej wypożyczalni filmów

US2

- ` `Wyskakuje mi powiadomienie, że skończył mi się okres działalności wykupionego przez mnie wcześniej pakietu

US3

- Ustaliłem z moim kolegą, że kupimy pakiet dla dwóch kont użytkowników

US4

- Dokonuje szybkiej płatności za pomocą BLIKA 

US5

- Zawsze, gdy uruchamiam aplikacje zaczynam od przeglądania szerokiej gamy dostępnych produkcji. 

US6

- Gdy ktoś szuka produkcji korzysta z wyszukiwarki i filtrów, dlatego szybko znajduję coś idealnego 

US7

- Po wybraniu filmu mogę oglądać go na różnych urządzeniach, dzięki temu mogę cieszyć się filmem w jeszcze lepszej jakości obrazu i dźwięku.

US8

- Wybrałem zagraniczny film i dodatkowo włączam napisy w języku polskim

US9

- Podczas oglądania ustawiam jakość 1080p. oraz dzielę ekran na poł

US10

- Osoba zakupiła bon w postaci pakietu prezentowego 

US11

- ` `Podczas oglądania przypominam sobie, że mam jeszcze wiele innych produkcji na liście "obejrzyj potem"

US12

- Nowi członkowie korzystają z obniżonej ceny za usługę przez pierwszy miesiąc

US13

- Postanawiam, że pobiorę go i będę miał możliwość obejrzenia go offline 

US14

- ` `Loguje się na swoje konto pracownicze i modyfikuje opinie pod filmem, które są niezgodne z regulaminem korzystani z platformy

US15

- Pracownik chciałby poszerzyć ilość dostępnych filmów

US16

- Ktoś powinien być odpowiedzialny za rozwiązywaniem problemów klientów. 


3. # <a name="_toc1631214981"></a><a name="_toc2078555328"></a><a name="_toc1960699300"></a><a name="_toc1776906867"></a><a name="_toc1663864902"></a><a name="_toc311051246"></a><a name="_toc99369417"></a><a name="_toc1689190368"></a><a name="_toc1426978366"></a><a name="_toc2033636143"></a><a name="_toc758714316"></a>Pokrywanie się wymagań funkcjonalnych

|` `User Story|Podpunkt w wymaganiach funkcjonalnych|
| :-: | :-: |
|US1|<p>4\.1.1 Możliwość zalogowania się do systemu przy użyciu swojej nazwy użytkownika i hasła</p><p></p>|
|US2|<p>4\.1.3 Zakup odpowiedniego pakietu</p><p></p>|
|US3|<p>4\.1.10 Użytkownik powinien mieć możliwość stworzenia kont wielu użytkowników w ramach jednej subskrypcji</p><p></p>|
|US4|<p>4\.1.12 Możliwość płatności za pomocą różnych form</p><p></p>|
|US5|<p>4\.1.11 Wyszukiwanie filmów i seriali</p><p>4\.1.15 Podgląd opisu, zwiastuna, obsady i otrzymanych nagród filmów</p><p></p><p></p>|
|US6|<p>4\.1.17 Wybór kategorii filmów i seriali</p><p></p>|
|US7|<p>4\.3.3 Oglądanie z różnych urządzeń jednocześnie</p><p>4\.3.5 Ustawienie jakości oglądania</p><p></p>|
|US8|<p>4\.3.2 Możliwość włączenia transkrypcji</p><p></p>|
|US9|<p>4\.3.5 Ustawienie jakości oglądania</p><p>4\.3.7 Włączenie opcji podzielonego ekranu</p><p></p><p></p>|
|US10|<p>4\.3.6 Zakupu pakietu prezentowego</p><p></p>|
|US11|<p>4\.1.16 Użytkownik powinien mieć możliwość dodania produkcji, którą chciałby obejrzeć później</p><p></p>|
|US12|<p>4\.2.6 Możliwość wprowadzania promocji</p><p></p>|
|US13|<p>4\.3.4 Możliwość pobierania i oglądania filmów offline</p><p></p>|
|US14|4\.2.3 Możliwość zarządzania opiniami użytkowników|
|US15|<p>4\.2.5 Możliwość dodawania produkcji</p><p></p>|
|US16|<p>4\.2.4 Dostawca usług powinien zagwarantować pomoc techniczną użytkownikom</p><p></p>|
#
3. # <a name="_toc979835720"></a><a name="_toc875491335"></a><a name="_toc193977979"></a><a name="_toc82674138"></a><a name="_toc75249857"></a><a name="_toc471831426"></a><a name="_toc670192524"></a><a name="_toc1278511505"></a><a name="_toc1364687943"></a><a name="_toc829828007"></a><a name="_toc2143506325"></a>MoSCoW

|Musi być|Powinno być|Mogłoby być|Nie jest priorytetem|
| :-: | :-: | :-: | :-: |
|Rejestracja konta, logowanie, wylogowanie|Możliwość wybierania kategorii filmów i seriali|Usługa „obejrzyj potem”|Możliwość włączenia podzielonego ekranu|
|Zakup danego pakietu|Wybór języka|Podgląd aktualnych i przewidywanych przychodów|Możliwość zakupu pakietu prezentowego|
|Obsługa płatności|Możliwość włączenia transkrypcji|Wypożyczenie filmów spoza posiadanego pakietu|Proponowanie filmów, które mogłyby zostać dodane do platformy|
|Możliwość oglądania filmów, seriali z różnych urządzeń|Możliwość ustawienie jakości oglądania dostępnych w pakiecie|||
|Usługa ma być dostępna przez 24h przez 7 dni w tygodniu|Podgląd opisu, zwiastuna, obsady, otrzymanych nagród filmów|||
|Wylogowanie się|Pobieranie i oglądanie filmów offline|||
|Dostosowanie do praw narodowych|Zagwarantowanie centrum obsługi klienta|||

3. # <a name="_toc777751039"></a><a name="_toc1921538744"></a><a name="_toc533301110"></a><a name="_toc1651953214"></a><a name="_toc2120493535"></a><a name="_toc1779437259"></a><a name="_toc1070684195"></a><a name="_toc2062504361"></a><a name="_toc1429323264"></a><a name="_toc178551681"></a><a name="_toc1864972547"></a>Diagramy przypadków użycia
![](Aspose.Words.6bb87a04-dae5-4004-80e9-f82601d1c21b.001.png)PG

![](Aspose.Words.6bb87a04-dae5-4004-80e9-f82601d1c21b.002.png)

PG

![](Aspose.Words.6bb87a04-dae5-4004-80e9-f82601d1c21b.003.png)MK





![](Aspose.Words.6bb87a04-dae5-4004-80e9-f82601d1c21b.004.png)

MK
2

