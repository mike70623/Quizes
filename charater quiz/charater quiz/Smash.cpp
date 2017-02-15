#include <iostream>
using namespace std;
int main() {
	int Lucina = 0;
	int DonkeyKong = 0;
	int LittleMac = 0;
	int Ganondorf = 0;
	int Mii = 0;
	int FRE = 0;
	char input;
	cout << "welcome to a quize i made just now!" << endl << endl << endl << endl;


	cout << "what is your favorite food? (steak=s) (chocolate=c) (bananas=d) (bear meat=b) (???=f) (none=anyting else)" << endl;
	cin >> input;
	if (input == 'c')
		LittleMac++;
	else if (input == 'b')
		Lucina++;
	else if (input == 'd')
		DonkeyKong++;
	else if (input == 's')
		Ganondorf++;
	else if (input == 'f')
		FRE++;
	else
		cout << "really?" << endl << endl << endl << endl;


	cout << "what is your favorite thing to do? (spar=s) (kill time with a friend=c) (play an instruments=b) (look cool=p) (???=f) (none=anyting else)" << endl;
	cin >> input;
	if (input == 'c')
		LittleMac++;
	else if (input == 's')
		Lucina++;
	else if (input == 'b')
		DonkeyKong++;
	else if (input == 'p')
		Ganondorf++;
	else if (input == 'f')
		FRE++;
	else
		cout << "really?" << endl << endl << endl << endl;


	cout << "what is your favorite video game genre? (adventure=j) (beat-m up=g) (stratagy=o) (action=s) (???=f) (none=anyting else)" << endl;
	cin >> input;
	if (input == 'g')
		LittleMac++;
	else if (input == 'j')
		Lucina++;
	else if (input == 's')
		DonkeyKong++;
	else if (input == 'o')
		Ganondorf++;
	else if (input == 'f')
		FRE++;
	else
		cout << "really?" << endl << endl << endl << endl;


	cout << "are you a vegitarian? (y=yes) (n=no) (f=???) (none=anythin else)" << endl;
	cin >> input;
	if (input == 'n')
		LittleMac++, Lucina++, DonkeyKong++, Ganondorf++;
	else if (input == 'f')
		FRE++;
	else if (input == 'y')
		Mii++;
	else
		cout << "really?" << endl << endl << endl << endl;


	cout << "how many siblings do you have? (2=p) (dont have any=c) (its complicated=b) (many=d) (???=f) (none=anyting else)" << endl;
	cin >> input;
	if (input == 'c')
		LittleMac++;
	else if (input == 'b')
		Lucina++;
	else if (input == 'd')
		DonkeyKong++;
	else  if (input == 'p')
		Ganondorf++;
	else if (input == 'f')
		FRE++;
	else
		cout << "really?" << endl << endl << endl << endl;


	cout << "whats your favorite color? (blue=b) (black=k) (yellow=y) (green=g) (???=f) (none=anyting else)" << endl;
	cin >> input;
	if (input == 'g')
		LittleMac++;
	else if (input == 'b')
		Lucina++;
	else if (input == 'y')
		DonkeyKong++;
	else if (input == 'k')
		Ganondorf++;
	else if (input == 'f')
		FRE++;
	else
		cout << "really?" << endl << endl << endl << endl;


	cout << "whats your favorite instrument? (b = Bongos) (v = Violin) (g = Guitar) (t = Trumpets) (??? = f) (none=anything else)" << endl;
	cin >> input;
	if (input == 'g')
		LittleMac++;
	else if (input == 'v')
		Lucina++;
	else if (input == 'b')
		DonkeyKong++;
	else if (input == 'g')
		Ganondorf++;
	else if (input == 'f')
		FRE++;
	else
		cout << "really?" << endl << endl << endl << endl;


	cout << "what do you find enjoyable? (p = walks in the park) (w = watching TV) (t = traveling) (b = playing board games) (??? = f) (none=anything else)" << endl;
	cin >> input;
	if (input == 't')
		LittleMac++;
	else if (input == 'p')
		Lucina++;
	else if (input == 'w')
		DonkeyKong++;
	else if (input == 'b')
		Ganondorf++;
	else if (input == 'f')
		FRE++;
	else
		cout << "really?" << endl << endl << endl << endl;


	cout << "what is your favorite setting? (c = castle) (b = boxing ring) (u = universal tear) (j = rain forests) (??? = f) (none=anything else)" << endl;
	cin >> input;
	if (input == 'b')
		LittleMac++;
	else if (input == 'u')
		Lucina++;
	else if (input == 'j')
		DonkeyKong++;
	else if (input == 'c')
		Ganondorf++;
	else if (input == 'f')
		FRE++;
	else
		cout << "really?" << endl << endl << endl << endl;


	cout << "what is your wepon of choice? (m = magic) (b = boxing gloves) (s = sword) (f = fists) (??? = f) (n = none)" << endl;
	cin >> input;
	if (input = 'b')
		LittleMac++;
	else if (input == 's')
		Lucina++;
	else if (input == 'f')
		DonkeyKong++;
	else if (input == 'm')
		Ganondorf++;
	else if (input == 'f')
		FRE++;
	else if (input == 'n')
		Mii++;
	else
		cout << "really?" << endl << endl << endl << endl;


	if ((Lucina > LittleMac) && (Lucina > DonkeyKong) && (Lucina > Ganondorf) && (Lucina > FRE) && (Lucina > Mii))
		cout << "you are Lucina! a sweet yet deadly women that travled through space and time to save her world from destruction." << endl;

	else if ((Lucina < LittleMac) && (LittleMac > DonkeyKong) && (LittleMac > Ganondorf) && (LittleMac > FRE) && (LittleMac > Mii))
		cout << "you are LittleMac! Once and underdog, now champion he defends his title from his competitors." << endl;

	else if ((DonkeyKong > LittleMac) && (Lucina < DonkeyKong) && (DonkeyKong > Ganondorf) && (DonkeyKong > FRE) && (DonkeyKong > Mii))
		cout << "you are Donkey Kong! this primape enjoys watching tv, eating bananas and stealing toys from Mario" << endl;

	else if ((Ganondorf > LittleMac) && (Ganondorf > DonkeyKong) && (Lucina < Ganondorf) && (Ganondorf > FRE) && (Ganondorf > Mii))
		cout << "you are Ganondorf! A ruthless king bent on obtaining the power of the triforce" << endl;

	else if ((FRE > LittleMac) && (FRE > DonkeyKong) && (FRE > Ganondorf) && (Lucina < FRE) && (FRE > Mii))
		cout << "Its free realestate" << endl;

	else if ((Mii > LittleMac) && (Mii > DonkeyKong) && (Mii > Ganondorf) && (Mii > FRE) && (Lucina < Mii))
		cout << "You are mii. a souless husk ment to fill a spot on the rouster" << endl;
}