# Leeres Projekt mit eingebundenem Google-Test

## Projektstruktur
<!-- prettier-ignore-start -->
    .
    ├── CMakeLists.txt      
    ├── README.md           <-- Dieses Readme
    ├── main.cpp
    ├── src                 <-- Alle Klassen in diesem Ornder erstellen     
    │   └── CMakeLists.txt
    └── test                <-- Alles was mit Testen zu tun hat
        ├── CMakeLists.txt
        ├── lib             <-- Alles von google-Test
        └── test1.cpp       <-- Datei für Tests
<!-- prettier-ignore-end -->

Im Hauptverzeichnis (root) liegt neben der main.cpp und der Readme.md noch die CMakeLists.txt.
Außer an der main.cpp sollten keine Änderungen vorgenommen werden.

Alle selbst erstellten bzw. zu erstellenden Klassen kommen mit ihren .cpp und .h Dateien in den Unterordner src.

Alles was mit dem Testen zusammen hängt kommt in den Unterordner test.  
Hier gibt es bereits eine Datei in die Tests eingefügt werden können. Es können aber auch eigene .cpp Dateien erstellt werden.

Beim Erstellen neuer .cpp/.h-Dateien muss darauf geachtet werden, dass sie in der entsprechenden CMakeLists.txt hinzugefügt werden.     
Beim Erstellen per Rechtsklick auf den Ordner _src -> New -> New C++ Class_ darauf achten, dass der Haken bei _Add to targets_ gesetzt ist und der Haken vor ```_src <- ${SOURCE_FILES}``` gesetzt ist. Wenn die Datei per Hand erstellt und in das Verzeichnis gepackt wurde, dann muss die Datei in der CMakeLists.txt im Ordner _src_ in der Liste der Source-Files ergänzt werden, also zwischen ```set(SOURCE_FILES``` und ```)```.

Gleiches gilt für die Tests, nur dass hier das Target ```Google_Tests_run``` heißt und in der CMakeLists.txt im Ordner tests in ```add_executables(Google_Tests_run test1.cpp)``` hinzugefügt werden muss (nach test1.cpp oder an dessen Stelle, wenn test1.cpp nicht mehr existiert).

## Nutzung des Projekts in CLion
Um dieses Projekt in CLion zu nutzen, kann die integrierte git-Funktion von CLion genutzt werden. Dazu im Menü _git -> clone_ auswählen. Wenn das aktuelle CLion Fenster noch kein Git-Projekt beinhaltet, dann ist es das Menü _VCS -> get from Version Control_ Dort dann als Version control git auswählen und die Clone URL aus dem Gitlab einfügen. CLion holt dann alle benötigten Dateien aus dem Gitlab und initialisiert auch das Submodul für goolge-Test. Sind alle Dateien herunter geladen, dann wird man gefragt, ob man das Projekt im aktuellen oder in einem neuen Fenster öffnen möchte. Ist das Projekt geöffnet, muss man einen kurzen Moment warten, bis CMake alle benötigten Dateien erstellt hat. Danach kann man mit dem Projekt arbeiten.