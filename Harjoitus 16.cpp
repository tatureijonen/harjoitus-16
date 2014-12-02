/*
TATU REIJONEN - IIO14S1

Harjoitus 16 (Palautus vko 46)
Tee ohjelma, joka kysyy henkilotietosi ja tallentaa ne tietueeseen.
Tietueeseen talletetaan seuraavat tiedot :
etunimi(merkkijono; C:n merkkitaulukko)
sukunimi(merkkijono; C:n merkkitaulukko)
koulumatka(reaaliluku)
osoite(merkkijono; C:n merkkitaulukko)
postinumero(merkkijono; C:n merkkitaulukko)
kengannumero(kokonaisluku)

Ohjelma tulostaa lopuksi tietueen tiedot naytölle.
*/

#include <iostream>
using namespace std;
struct HENKILOTIEDOT
{
	char etunimi[20];
	char sukunimi[20];
	float koulumatka;
	char osoite[30];
	char postinumero[6];
	int kengannumero;

};
void main()
{
	struct HENKILOTIEDOT henkilotiedot;
	cout << "Anna etunimi: ";
	cin >> henkilotiedot.etunimi;
	cout << "Anna sukunimi: ";
	cin >> henkilotiedot.sukunimi;
	cout << "Anna koulumatka: ";
	cin >> henkilotiedot.koulumatka;
	cout << "Anna osoite: ";
	cin.get();
	cin.get  (henkilotiedot.osoite, 30);
	cout << "Anna postinumero: ";
	cin >> henkilotiedot.postinumero;
	cout << "Anna kengannumero: ";
	cin >> henkilotiedot.kengannumero;
	cout << endl << endl;

	cout << henkilotiedot.etunimi << endl << henkilotiedot.sukunimi << endl << henkilotiedot.koulumatka << endl
		<< henkilotiedot.osoite << endl << henkilotiedot.postinumero << endl << henkilotiedot.kengannumero << endl;

	
	




}
