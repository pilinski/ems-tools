<?php

$scdesc = array(
# kody EMS w języku polskim na podstawie dokumentu firmy Buderus: "Kody_EMS_is.pdf"
  "-H200" => "Kod roboczy:   Praca na c.o. Kocioł pracuje na c.o.",
  "=H201" => "Kod roboczy:   Praca na c.w.u. Kocioł pracuje na c.w.u.",
  "0A202" => "Kod roboczy:   Urządzenie w trybie funkcji minimalizującej ilość załączeń.<br>
			  W trakcie ustawionej funkcji minimalizującej ilość załączeń nastąpiło wznowienie zapotrzebowania pracy palnika.<br>
			  Urządzenie znajduje się w „blokadzie taktowania”. Standardowy czas funkcji zezwolenia na ponowne załączenie<br>
			  palnika wynosi 10 min. Sprawdzić nastawy regulacyjne na sterowniku RC35.<br>
			  Dopasować nastawy regulacyjne pod kątem prawidłowej obsługi instalacji",
  "0H203" => "Kod roboczy:   Urządzenie jest w trybie gotowości, nie występuje zapotrzebowanie ciepła.<br>
			  Kocioł w gotowości i nie ma żadnego zapotrzebowania ciepła z przyłączonych obiegów grzewczych",
  "0Y204" => "Kod roboczy:   Aktualna temperatura wody w kotle jest wyższa niż zadana temperatura wody w kotle. Kocioł będzie wyłączony",
  "0P205" => "Kod roboczy:   Kocioł czeka na przepływ powietrza",
  "2E207" => "Kod wstrzymujący (czasowo): Ciśnienie wody w instalacji jest < 0,2 bar dla kotła naściennego lub < 0,6 bar dla GB312.<br>
			  Ustalono podczas sprawdzania ciśnienia wody w kotle, że ciśnienie jest < 0,2 bar.<br>
			  Ewentualnie waha się wskazanie ciśnienia również z fazami zatrzymania 30 s do 2 min, choć manometr wskazuje 1,5 bar<br><br>
			  Czy ciśnienie wody w instalacji wynosi minimum 1 bar? Dopełnić zład i odpowietrzyć instalację",
  "-A208" => "Kod roboczy:   Test spalin. Urządzenie pracuje w teście spalin. Przerwanie pracy w teście spalin następuje automatycznie po 30 minutach.",
  "-Y209" => "Kod roboczy:   Tryb serwisowy kotła. Kocioł pracuje w trybie serwisowym. Kod nie dotyczy kotłów GB142 oraz GB132T!",
  "1C210" => "KOD BLOKUJĄCY: Zadziałał termostat spalin. Tylko dla GB132T: termostat spalin ma temperaturę wyższą niż 105 °C.<br>
			  Pozostawić czujnik spalin do wychłodzenia poniżej 105 °C i następnie sprawdzić pod kątem przejścia.<br>
			  Jeśli wykryto brak przejścia wymienić czujnik spalin<br><br>Sprawdzić czy nie jest zanieczyszczony wymiennik ciepła i palnik<br>
			  Wyczyścić wymiennik ciepła i palnik zgodnie z „Instrukcją montażu i konserwacji”",
  "2P212" => "Kod roboczy:   Przepływ wody. Wzrost temperatury czujnika STB lub zasilania > 5 K/s",
  "2U213" => "Kod roboczy:   Przepływ wody. Różnica temperatur pomiędzy czujnikiem zasilania i powrotu >50 K",
  "3L214" => "KOD BLOKUJĄCY: Transport powietrza. Wentylator wyłącza się podczas testu bezpieczeństwa<<br>
			  Sprawdzić oba połączenia wtykowe na wentylatorze. Odpowiednio połączyć ponownie połączenia wtykowe na wentylatorze.<br>
			  Sprawdzić wysterowanie wentylatora 230 V, sprawdzić kabel zasilający.  W razie potrzeby wymienić  kabel zasilający wentylatora <br>
			  Sprawdzić kabel tachometru pod kątem występowania przerw.  W razie potrzeby wymienić kabel tachometru. W razie potrzeby wymienić wentylator",
  "3Y215" => "KOD BLOKUJĄCY: Transport powietrza. Wentylator obraca się za szybko",
  "3P216" => "KOD BLOKUJĄCY: Transport powietrza. Wentylator obraca się niewystarczająco szybko",
  "3C217" => "KOD BLOKUJĄCY: Transport powietrza. Brak wymuszenia przepływu powietrza po x minutach.<br>
			  Usterka automatu palnikowego UBA lub wentylatora. Wymienić automat palnikowy UBA lub wentylator",
  "4A218" => "KOD BLOKUJĄCY: Temperatura. Temperatura na czujniku zasilania jest > 105 °C",
  "4F219" => "KOD BLOKUJĄCY: Temperatura. Temperatura na czujniku STB jest > 95 °C",
  "4L220" => "KOD BLOKUJĄCY: Temperatura. Zwarcie czujnika STB lub temperatura na czujniku STB > 130 °C",
  "4P221" => "KOD BLOKUJĄCY: Luźny styk lub uszkodzenie czujnika STB. Przerwane jest podłączenie czujnika STB",
  "4U222" => "KOD BLOKUJĄCY: Zwarcie czujnika zasilania. Brak pracy na c.o. i ciepłą wodę",
  "4Y223" => "KOD BLOKUJĄCY: Luźny styk lub uszkodzenie czujnika zasilania.  Przerwane jest podłączenie czujnika zasilania",
  "5C226" => "Kod roboczy:   Oznaczenie dla terminala ręcznego. Nie dotyczy GB142 i GB132 T!",
  "6A227" => "KOD BLOKUJĄCY: Kontrola płomienia. Brak sygnału jonizacji po zapłonie. Ten komunikat generowany jest po czwartej próbie.<br><br>
			  Zmierzyć ciśnienie gazu na przyłączu, zmierzyć stosunek gaz-powietrze, skontrolować dysze gazowe.<br>
			  Jeżeli występuje niewystarczające ciśnienie gazu na przyłączu, należy zgłosić to odpowiedniemu Zakładowi Gazowniczemu.<br>
			  Stosunek gazpowietrze ustawić na -5 Pa. Zamontować odpowiednie do rodzaju gazu dysze.<br>
			  Instalacja gazowa jest odpowietrzona? Odpowietrzyć instalację gazową.<br>
			  Żarowa elektroda zapłonowa pracuje prawidłowo? Jeśli rezystancja elektrody wynosi 50 do 300 ? jest ona poprawna, w przeciwnym razie  wymienić elektrodę.<br>
			  Napięcie na żarowej elektrodzie zapłonowej powinno wynosić 120 V. Jeśli brak przyłożonego napięcia, sprawdzić połączenia wtykowe, lub wymienić uszkodzony transformator.<br>
			  Otwiera się armatura gazowa przy 0L? Sprawdzić połączenia elektryczne. Napięcie podczas 0L powinno wynosić 20 do 24 V.<br>
			  Sprawdzić pod kątem zanieczyszczeń dopływ powietrza, kanał spalinowy i komorę palnika. Usunąć zabrudzenia.<br>
			  Zmierzyć prąd jonizacji Prąd jonizacji powinien przy mocy częściowej wynosić > 1,4 µA, w przeciwnym razie wymienić elektrodę jonizacyjną",
  "6C228" => "KOD BLOKUJĄCY: Kontrola płomienia. Meldunek jonizacji pomimo nie istniejącego płomienia.<br>
			  Sprawdzić elektrodę jonizacyjną pod kątem uszkodzeń względnie zanieczyszczeń. Wymienić względnie oczyścić elektrodę jonizacyjną",
  "6L229" => "Kod wstrzymujący (czasowo): Kontrola płomienia. Zanik napięcia podczas pracy palnika",
  "7C231" => "KOD BLOKUJĄCY: Napięcie zasilania.<br>
			  Po wystąpieniu meldunku usterki zostało wyłączone po czym ponownie załączone napięcie sieciowe - Użyć przycisk „Reset”",
  "8Y232" => "Kod roboczy:   Zewnętrzny zestyk przełączający. Zadziałał zewnętrzny zestyk przełączający, np. czujnik temperatury maksymalnej ogrzewania podłogowego",
  "9U233" => "KOD BLOKUJĄCY: Błąd systemowy. Uszkodzony KIM lub UBA  – Wymienić UBA lub KIM przez Buderus Serwis. ",
  "9L234" => "KOD BLOKUJĄCY: Błąd systemowy. Uszkodzona cewka lub  przewód elekt. armatury.<br>
			  Sprawdzić przewód armatury gazowej - Wymienić przewód<br>
			  Uszkodzona armatura gazowa - Wymienić armaturę gazową",
  "9A235" => "KOD BLOKUJĄCY: Uszkodzony KIM lub UBA.  Uszkodzony KIM lub  UBA  – Wymienić UBA",
  "9H237" => "KOD BLOKUJĄCY: Błąd systemowy. Uszkodzony KIM lub UBA.  – Wymienić UBA lub KIM przez  Buderus Serwis",
  "9L238" => "KOD BLOKUJĄCY: Uszkodzona UBA. Uszkodzona UBA – Wymienić UBA",
  "9P239" => "KOD BLOKUJĄCY: Błąd systemowy. Uszkodzony KIM lub UBA – Wymienić UBA lub KIM przez  Buderus Serwis",
  "CU240" => "KOD BLOKUJĄCY: Zwarcie na czujniku powrotu.  Zwarcie na czujniku powrotu.<br>
			  Uszkodzenie czujnika. Wymienić czujnik.<br><br>Sprawdzić okablowanie czujnika powrotu na zwarcia. Wymienić okablowanie względnie usunąć zwarcie.",
  "CY241" => "KOD BLOKUJĄCY: Czujnik powrotu obluzowany lub uszkodzony. Czujnik powrotu obluzowany lub uszkodzony.<br>
			  Uszkodzenie czujnika. Wymienić czujnik.<br><br>Sprawdzić okablowanie czujnika powrotu na zwarcia. Wymienić okablowanie względnie usunąć zwarcie.",
  
  "7L261" => "KOD BLOKUJĄCY: Błąd czasu w pierwszym teście bezpieczeństwa. Usterka UBA.",
  "9H267" => "KOD BLOKUJĄCY: Błąd systemowy. Uszkodzona UBA – Wymienić UBA",
  "5H268" => "Kod roboczy:   Z poziomu serwisowego jednostki obsługowej RC3x uaktywniono test przekaźników.<br>
			  Z poziomu serwisowego jednostki obsługowej RC3x aktywowano test przekaźników.",
  "9H272" => "KOD BLOKUJĄCY: Błąd systemowy. Uszkodzona UBA – Wymienić UBA (zastosować z aktualną wersją oprogramowania)",
  "5A275" => "Kod roboczy:   UBA w trybie testowym. Nie dotyczy GB142 i GB132 T!",
  "7L280" => "KOD BLOKUJĄCY: Błąd czasu przy próbie ponownego uruchomienia. Usterka UBA",
  "0C283" => "Kod roboczy:   Start palnika",
  "0L284" => "Kod roboczy:   Otwarcie armatury gazowej. Pierwszy test bezpieczeństwa",
  "CA286" => "KOD BLOKUJĄCY: Za wysoka temperatura powrotu na czujniku. Temperatura na czujnika powrotu powyżej 105 oC – Wyłączyć i włączyć urządzenie",
  "CO288" => "KOD BLOKUJĄCY: Ciśnienie wody. UBA nie widzi czujnika ciśnienia wody.<br>Patrz błąd 207, 266.<br>
			  Sprawdzić ciśnienie w instalacji ewentualnie sprawdzić czujnik  ciśnienia wody – w przypadku konieczności wymienić czujnik.",
  "CO289" => "KOD BLOKUJĄCY: Ciśnienie wody. Zwarcie na czujniku ciśnienia wody<br>Uszkodzenie czujnika. Wymienić czujnik<br>
			  Sprawdzić okablowanie czujnika ciśnienia wody. Wymienić okablowanie względnie usunąć zwarcie",
 
  "0A305" => "Kod roboczy: Kocioł przejściowo nie może uruchomić się w tryb podgrzewania c.w.u.<br>
			  Kocioł właśnie zakończył podgrzewanie c.w.u., znajduje się w trybie wybiegu (min. 30s/ maks. 60s) i z tego powodu nie startuje",
  "6C306" => "KOD BLOKUJĄCY: Zmierzono jonizację po zamknięciu zaworu gazowego.<br>
			  Po próbie zamknięcia przez UBA zaworu gazowego, dalej mierzony jest prąd jonizacji.<br>
			  Czy po wyłączeniu wpływa do komory palnika mieszanka gazowo powietrzna, pomimo że armatura nie ma napięcia? Wymienić armaturę gazową",
  "7H328" => "Kod wstrzymujący (czasowo): Pozorne przerwy napięcia. W napięciu sieciowym powstają fałszywe przerwy zasilania<br>
			  Sprawdzić czy w okolicy nie ma elektrowni wiatrowych lub innych urządzeń, które jako źródła napięcia mogą powodować zakłócenia.<br>
			  Zapewnić zasilanie wolne od zakłóceń.<br>
			  Sprawdzić przewody zasilające pod kątem występowania „chwiejnych” kontaktów. Usunąć ewentualne problemy z połączeniami.<br>
			  Sprawdzić okablowanie i poprawność kontaktów wtyczek sieciowych w BC10 względnie UBA3. Usunąć ewentualne problemy z połączeniami.",
 
# pozostałe w oryginalnym, niemieckim języku  
  "2L329" => "Blockierender Störungscode: Der Druckfühler konnte nach vier Versuchen keinen heizseitigen Druckanstieg messen.",
  "4C224" => "Verriegelnder Störungscode: Der Sicherheitstemperaturbegrenzer (STB) hat eine zu hohe Temperatur gemessen und ist dadurch geöffnet, oder es erfolgt keine Verbindung zu den Kontakten 22 und 24 des UBA 3-Montagefußes.",
  "4E225" => "Verriegelnder Störungscode: Der Temperaturunterschied des Heizungswassers, der intern mittels Doppelfühler gemessen wurde, beträgt über 5 K.",
  "2F260" => "Blockierender Störungscode: Der Vorlaufteil des Doppelfühlers hat nach einem Brennerstart keinen Temperaturanstieg des Heizungswassers gemessen.",
  "3A264" => "Blockierender Störungscode: Das Tachosignal des Gebläses oder die Spannung des Gebläses ist während der Betriebsphase ausgefallen.",
  "0E265" => "Das zeitproportionale Programm ist aktiviert. Wenn der Heizleistungsbedarf niedriger ist als die Minimalleistung des Heizkessels im modulierendem Betrieb, wird der Brenner über eine Periode von 10 Minuten abwechselnd ein- und ausgeschaltet. Der Einschaltdauer des Brenners ist abhängig vom Leistungsunterschied zwischen der Leistungsanforderung und der Mindestleistung des Heizkessels.",
  "2L266" => "Blockierender Störungscode: Der Druckfühler konnte nach vier Versuchen keinen heizseitigen Druckanstieg messen.",
  "9H267" => "Verriegelnder Störungscode: Der Brennerautomat (UBA 3) oder das KIM ist defekt.",
  "6P269" => "Verriegelnder Störungscode: Der Glühzünder wurde länger als 10 Minuten angetrieben.",
  "0U270" => "Der Heizkessel wird nach Einschalten der Netzspannung oder nach Durchführung eines Resets hochgefahren.",
  "2F271" => "Blockierender Störungscode: Der Temperaturunterschied des Heizungswassers, gemessen zwischen den Vorlaufteil und Sicherheitsteil des Doppelfühlers, ist zu groß.",
  "3F273" => "Blockierender Störungscode: Der Heizkessel ist während einiger Sekunden ausgeschaltet worden weil das Gerät 24 Stunden ununterbrochen in Betrieb gewesen ist. Dies ist eine Sicherheitskontrolle.",
  "0Y276" => "Blockierender Störungscode: Der Vorlaufteil des Doppelfühlers oder der Vorlauftemperaturfühler hat eine aktuelle Heizungsvorlauftemperatur gemessen, die höher als 95 °C ist.",
  "0Y277" => "Blockierender Störungscode: Der Sicherheitsteil des Doppelfühlers oder der Sicherheitstemperaturfühler hat eine aktuelle Heizungsvorlauftemperatur gemessen, die höher als 95 °C ist.",
  "4E278" => "Verriegelnder Störungscode: Der Fühlertest ist fehlgeschlagen.",
  "0Y285" => "Blockierender Störungscode: Der Rücklauftemperaturfühler hat eine aktuelle Rücklaufwassertemperatur gemessen, die höher als 95 °C ist.",


  "01800" => "Blockierender Störungscode: Die Kontakte zum Außentemperaturfühler sind kurzgeschlossen oder unterbrochen, der Fühler ist falsch angeschlossen oder defekt.",
  "01808" => "Blockierender Störungscode: Die Kontakte zum Warmwassertemperaturfühler sind kurzgeschlossen oder unterbrochen, der Fühler ist falsch angeschlossen oder defekt.",
  "01809" => "Blockierender Störungscode: Die Kontakte zum Warmwassertemperaturfühler 2 sind kurzgeschlossen oder unterbrochen, der Fühler ist falsch angeschlossen oder defekt.",
  "01810" => "Blockierender Störungscode: Kesselwasser wird nicht warm. Bruch oder Kurzschluss der Fühlerleitung, Fühler falsch angeschlossen oder defekt, Ladepumpe falsch angeschlossen oder defekt.",  
  "01811" => "Blockierender Störungscode: Thermische Desinfektion ist fehlgeschlagen. Zapfmenge innerhalb Desinfektionszeitraumes zu hoch, Bruch oder Kurzschluss der Fühlerleitung, Fühler falsch angeschlossen oder defekt, Ladepumpe defekt.",
  "01816" => "Blockierender Störungscode: Keine Verbindung mit EMS. EMS-Bussystem ist überlastet, UBA 3/MC10 ist defekt.",
  "01828" => "Blockierender Störungscode: Wasserdruckfühler geht auf Störung. Digitaler Wasserdruckfühler defekt.",
  "02816" => "Blockierender Störungscode: Keine Kommunikation mit Basiscontroller (BC10). Kontaktproblem am Basiscontroller (BC10) oder Basiscontroller (BC10) ist defekt.",
  "11801" => "Blockierender Störungscode: Interner Laufzeitfehler im RC30/RC35.",
  "11802" => "Blockierender Störungscode: Zeit nicht eingestellt. Zeiteingabe fehlt, z.B. durch einen längeren Stromausfall.",
  "11803" => "Blockierender Störungscode: Datum nicht eingestellt. Datumseingabe fehlt, z.B. durch einen längeren Stromausfall.",
  "11804" => "Blockierender Störungscode: Interner Laufzeitfehler im RC30/RC35.",
  "11821" => "Blockierender Störungscode: RC30/RC35-HK1 Fernbedienung. Keine Fernbedienung zugeordnet, obwohl Raumtemperaturregelung eingestellt ist.",
  "11822" => "Blockierender Störungscode: RC30/RC35-HK2 Fernbedienung. Keine Fernbedienung zugeordnet, obwohl Raumtemperaturregelung eingestellt ist.",
  "11823" => "Blockierender Störungscode: RC30/RC35-HK1 Fernbedienung. Keine Fernbedienung zugeordnet, obwohl Frostschutzart .FROST. eingestellt ist.",
  "11824" => "Blockierender Störungscode: RC30/RC35-HK2 Fernbedienung. Keine Fernbedienung zugeordnet, obwohl Frostschutzart .FROST. eingestellt ist.",
  "11826" => "Blockierender Störungscode: RC30/RC35-HK1 Temperaturfühler. Extern angeschlossener Temperaturfühler der Fernbedienun",
  "11827" => "Blockierender Störungscode: RC30/RC35-HK2 Temperaturfühler. Extern angeschlossener Temperaturfühler der Fernbedienun",
  "12815" => "Blockierender Störungscode: Die Kontakte zum Weichenfühler sind kurzgeschlossen oder unterbrochen, der Fühler ist falsch angeschlossen oder defekt.",
  "12815" => "Blockierender Störungscode: WM10 nicht vorhanden bzw. keine Kommunikation. WM10 oder Busleitung ist falsch angeschlossen oder defekt, WM10 wird von RC30/RC35 nicht erkannt.",
  "18825" => "Blockierender Störungscode: Adressenkonflikt. RC20 und RC30/RC35 sind beide als Master angemeldet.",
  "21806" => "Blockierender Störungscode: RC20-HK1 Temperaturfühler. Eingebauter Temperaturfühler der Fernbedienung (Bedieneinheit) von Heizkreis 1 ist defekt.",
  "21816" => "Blockierender Störungscode: RC20-HK1 Kommunikation. RC20 falsch adressiert, falsch verdrahtet oder defekt.",
  "21829" => "Blockierender Störungscode: RC20 falsch adressiert, falsch verdrahtet oder defekt.",
  "22806" => "Blockierender Störungscode: RC20-HK2 Temperaturfühler. Eingebauter Temperaturfühler der Fernbedienung (Bedieneinheit) von Heizkreis 1 ist defekt.",
  "22816" => "Blockierender Störungscode: RC20-HK2 Kommunikation. RC20 falsch adressiert, falsch verdrahtet oder defekt.",
  "22819" => "Blockierender Störungscode: RC20 falsch adressiert, falsch verdrahtet oder defekt.",
  "32807" => "Blockierender Störungscode: Die Kontakte zum Heizkreis-Vorlauffühler sind kurzgeschlossen oder unterbrochen, der Fühler ist falsch angeschlossen oder defekt.",
  "32816" => "Blockierender Störungscode: MM10 nicht vorhanden bzw. keine Kommunikation. Heizkreisadresse am MM10 und RC30/RC35 stimmen nicht überein, MM10 oder Busleitung ist falsch angeschlossen oder defekt, MM10 wird von RC30/RC35 nicht erkannt.",

  "H7"     => "Ciśnienie wody w instalacji grzewczej jest zbyt niskie i wynosi mniej niż 0,8 bar.",
);

?>