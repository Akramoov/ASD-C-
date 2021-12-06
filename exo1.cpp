#include <iostream>
using namespace std;
const int NMOIS = 12;
struct enreg
{
	int stock;float prix;int ventes[NMOIS];
}s;
void raz(enreg & s)
{
	s.stock = 0;
	for(int i = 0;i<NMOIS;i++)
	{
		s.ventes[i] = 0;
	}
}
void affiche(enreg & t)
{
	cout<<"Le prix est: "<<t.prix<<endl;
	cout<<"Le stock est: "<<t.stock<<endl;
	for(int i = 0;i<NMOIS;i++)
	{
		cout<<"Les ventes sont: "<<t.ventes[i]<<endl;
	}
}
int main()
{
	void raz(enreg &);
	enreg e={2, 5.25, {2, 3, 4, 58 ,6 ,7 ,95, 45 ,42 ,21}};
	cout<<"contenu avant raz\n";
	affiche(e);
	raz(e);
	cout<<"contenu apres raz\n";
	affiche(e);
}
