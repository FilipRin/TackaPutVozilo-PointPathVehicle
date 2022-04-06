# TackaPutVozilo-PointPathVehicle
------------------------------------
• *Lista* sadrži proizvoljan broj podataka nekog tipa i stvara se prazna. Moguće je dodati
podatak na kraj liste (lista+=podatak). Moguće je dohvatiti broj podataka u listi. Moguće
je dohvatiti podatak sa zadate celobrojne pozicije u listi (lista[i]). Greška je ukoliko
podatak na zadatoj poziciji ne postoji.

• *Tačka* u ravni se stvara sa zadatim celobrojnim koordinatama. Moguće je izračunati
udaljenost između dve zadate tačke. Moguće je uporediti dve tačke na jednakost
(tacka1==tacka2). Tačke su jednake ukoliko su im koordinate jednake. Tačka se u izlazni
tok ispisuje (it<<tacka) u obliku (x,y), gde su x i y koordinate tačke.

• *Put* sadrži listu tačaka u ravni. Moguće je dodati tačku u put (put+=tacka). Greška je
ukoliko je zadata tačka jednaka nekoj od postojećih tačaka u putu. Moguće je izračunati dužinu
puta kao zbir udaljenosti svake dve susedne tačke na putu. Put se u izlazni tok ispisuje
(it<<put) tako što se sadržane tačke ispisuju u pojedinačnim redovima.

• *Vozilo* se stvara sa zadatim nazivom modela. Moguće je izračunati cenu prevoza vozilom za
zadati pređeni put. Cena prevoza predstavlja zbir startne cene i cene pređenog puta. Cena
jedne jedinice pređenog puta iznosi 0.1 RSD. Vozilo se u izlazni tok ispisuje (it<<vozilo)
tako što se ispiše naziv njegovog modela. Startna cena prevoza običnim vozilom iznosi 120
RSD.

-Napisati glavnu funkciju koja napravi put, doda nekoliko tačaka u put, ispiše dužinu puta, a
potom ispiše i put.
