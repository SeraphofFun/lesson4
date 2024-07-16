#include <iostream>
using namespace std;
int main()
{
	cout << "Filmin olcusunu gb ile daxil edin - ";
	double fGb;
	cin >> fGb;
	cout << "internerin b/san suretini  daxil edin - ";
	double bsan;
	cin >> bsan;
	double sanFt = fGb * 1024 * 1024*8 / bsan;
	int saatF = sanFt / 3600;
	int deqF =(sanFt- saatF*3600)/60;
	int sanF = (sanFt - saatF * 3600-deqF*60) ;

	sanFt - saatF * 3600 - deqF * 60 > sanF ? sanF + 1 : sanF;
	cout << "Filmin yuklenecek vaxti: " << saatF << ":" << deqF << ":" << sanF << endl;





	cout << "drayvin olcusunu gb ile daxil edin - ";
	double dGb;
	cin >> dGb;
	cout << "Kinonun olcusunu Mb ile daxil edin - ";
	double kMb;
	cin >> kMb;
	int defe = dGb*1024 / kMb;
	cout << "film " << defe << " defe drayva yerlesir"<< endl;



	cout << "imtahan verenler sayi - ";
	int veren;
	cin >> veren;
	cout << "borclularin verenler sayi - ";
	int borc;
	cin >> borc;
	float say = veren + borc;
	double verenF = veren / say * 100;
	double borcF = borc / say * 100;
	cout << "Verenlerin faizi: " << verenF << endl;
	cout << "Borclularin faizi: " << borcF << endl;





	cout << "gunun baslamasina nece saniye kecdi - ";
	int sanG;
	cin >> sanG;
	int gun = 24 * 3600;
	int qalanv = gun - sanG;
	int saatq = qalanv / 3600;
	int deqq = (qalanv - saatq * 3600) / 60;
	int sanq = qalanv - saatq * 3600 - deqq * 60;
	cout << "gunun qutarmasina " << saatq << ":" << deqq << ":" << sanq << endl;




	cout << "filmin olcusunu Gb ile daxil edin - ";
	double kGb;
	cin >> kGb;
	double const disket = 1.44;
	int nece=kGb*1024/disket;
	kGb * 1024 / disket > nece ? nece + 1 : nece;
	cout << "film " << nece << "  drayva yerlesir"<< endl;



	cout << "kesr eded daxil edin - ";
	double kesr;
	cin >> kesr;
	int yuz = kesr * 100;
	cout << yuz << endl;
	double yuzi = (double)yuz;
	double yuvar = yuzi / 100;
	cout << "100de bilere yuvarlaqlasdirdiqdan sonra = " << yuvar;
}

