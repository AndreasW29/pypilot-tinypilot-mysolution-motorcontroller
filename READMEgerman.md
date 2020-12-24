# pypilot-tinypilot-mysolution-motorcontroller
Diese Repository enthält die Arduino sketches und binär Dateien für den Motorcontroler für pypilot
Die Programme sind für einen Arduino Nano
Es reicht einfach die entsprechende Binärdatei auf den Arduino zu flashen. Der Sketch wird nur benötigt, wenn man selber programmieren möchte.

Der Ordner usbdriver enthält eine kleine Datei mit deren Hilfe man einen usb-Treiber für den Arduino Nano unter Windows installiert.
Datei herunterladen und ausführen.

Der Ordner xloader enthält ein Programm zum flashen der binärdateien auf den Arduino.
Den zip-Ordner herunterladen, entpacken.

Der Ordner binary files enthält zwei Binärdateien. 
pypilotmotorcontrollerwithoutrudder.**** Binärdatei wenn kein Ruderlagesensor verwendet wird
pypilotmotorcontrollerwithrudder.**** Binärdatei wenn ein Ruderlagesensor verwendet wird

Entsprechende Datei herunterladen

Arduino per USB an den Computer anschließen, XLoader starten, COM-Port auswählen, Speicherort der Binärdatei angeben, als Board "Duemilanove/Nano(ATmega328)" auswählen. 
Mit upload den flashvorgang starten.

Für Programmierer
Der Ordner arduino sketch enthält das gesamte Programm für den Arduino Nano.
Den Ordner herunterladen und mit der ARduino IDE öffnen zum Bearbeiten.
Eventuell müssen noch Bibliotheken heruntergeladen und in der Arduino IDE eingebunden werden.

