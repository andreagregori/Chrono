/*
Classe Date
Costruite una classe Date che rappresenta le date, in maniera analoga a quanto visto a lezione. La rappresentazione interna è libera, perciò non siete vincolati alla terna giorno-mese-anno che abbiamo visto. Le funzioni membro e le helper function lavoreranno di conseguenza.
La classe deve avere:
- un costruttore di default
- un altro costruttore che inizializza le variabili membro ai valori forniti come parametri
- eventualmente (ma non obbligatoriamente) altri costruttori
- overloading degli operatori <<, >>, ==, !=
- un meccanismo per aumentare la data di un certo numero di giorni (è possibile usare l'overloading dell'operatore +, ma questo porta a dover definire una convenzione: cosa significa Date + int?)
- un meccanismo di gestione degli anni bisestili
- ulteriori helper function a vostra discrezione.
Il codice deve essere correttamente suddiviso tra un file header e un file cpp. Consigliato l'uso di un namespace.
*/

namespace Chrono {
	enum class Mese {
		gen = 1, feb, mar, apr, mag, giu, lug, ago, set, ott, nov, dic
	};


	class Date
	{
	public:
		class Invalid {};
		Date();
		Date(int g, Mese m, int a);

		int giorno() { return g; }
		Mese mese() { return m; }
		int anno() { return a; }

		void addGiorno(int n);
		void addMese(int);
		void addAnno(int);

	private:
		int g;
		Mese m;
		int a;
	};

	bool isData(int, Mese, int);
	bool isAnnoBisestile(int);

	//overload degli operatori



}