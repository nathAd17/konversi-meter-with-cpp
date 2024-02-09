#include <iostream>
#include <string>
using namespace std;

int main() {
    int pilihan;
    float meter, kilo, hekto, deka, desi, centi;
    double mili;
    char lanjut;

up:
    cout << "Pilihan : \n\n1. KILO METER KE LAIN\n2. HEKTO METER KE LAIN\n3. DEKA METER KE LAIN\n4. METER KE LAIN\n";
    cout << "5. DESI METER KE LAIN\n6. CENTI METER KE LAIN\n7. MILI METER KE LAIN\n\nMasukan Pilihan : ";
    cin >> pilihan;

    switch (pilihan) {

    case 1:

        cout << "Masukan Panjang ( Km ) : ";
        cin >> kilo;

        hekto = kilo * 10;
        deka = kilo * 100;
        meter = kilo * 1000;
        desi = kilo * 10000;
        centi = kilo * 100000;
        mili = kilo * 1000000;

        cout << kilo << " Km \t= " << hekto << " Hm" << endl;
        cout << kilo << " Km \t= " << deka << " Dam" << endl;
        cout << kilo << " Km \t= " << meter << " M" << endl;
        cout << kilo << " Km \t= " << desi << " Dm" << endl;
        cout << kilo << " Km \t= " << centi << " Cm" << endl;
        cout << kilo << " Km \t= " << mili << " Mm" << endl << endl;

        break;
	case 2: 
		
		cout<<"Masukan Panjang ( Hm ) : ";cin>>hekto;
		
		kilo=hekto*0.1;
		deka=hekto*10;
		meter=hekto*100;
		desi=hekto*1000;
		centi=hekto*10000;
		mili=hekto*100000;
		
		cout<<hekto<<" Hm \t= "<<kilo<<" Km"<<endl;		
		cout<<hekto<<" Hm \t= "<<deka<<" Dam"<<endl;		
		cout<<hekto<<" Hm \t= "<<meter<<" M"<<endl;		
		cout<<hekto<<" Hm \t= "<<desi<<" Dm"<<endl;		
		cout<<hekto<<" Hm \t= "<<centi<<" Cm"<<endl;		
		cout<<hekto<<" Hm \t= "<<mili<<" Mm"<<endl<<endl;
		
		break;
				
	case 3: 
		
		cout<<"Masukan Panjang ( Dam ) : ";cin>>deka;
		
		kilo=deka*0.01;
		hekto=deka*0.1;
		meter=deka*10;
		desi=deka*100;
		centi=deka*1000;
		mili=deka*10000;
		
		cout<<deka<<" Dam \t= "<<kilo<<" Km"<<endl;		
		cout<<deka<<" Dam \t= "<<hekto<<" Hm"<<endl;		
		cout<<deka<<" Dam \t= "<<meter<<" M"<<endl;		
		cout<<deka<<" Dam \t= "<<desi<<" Dm"<<endl;		
		cout<<deka<<" Dam \t= "<<centi<<" Cm"<<endl;		
		cout<<deka<<" Dam \t= "<<mili<<" Mm"<<endl<<endl;
		
		break;
		
	case 4: 
		
		cout<<"Masukan Panjang ( M ) : ";cin>>meter;
		
		kilo=meter*0.001;
		hekto=meter*0.01;
		deka=meter*0.1;
		desi=meter*10;
		centi=meter*100;
		mili=meter*1000;
		
		cout<<meter<<" M \t= "<<kilo<<" Km"<<endl;		
		cout<<meter<<" M \t= "<<hekto<<" Hm"<<endl;		
		cout<<meter<<" M \t= "<<deka<<" Dam"<<endl;		
		cout<<meter<<" M \t= "<<desi<<" Dm"<<endl;		
		cout<<meter<<" M \t= "<<centi<<" Cm"<<endl;		
		cout<<meter<<" M \t= "<<mili<<" Mm"<<endl<<endl;
		
		break;
		
	case 5: 
		
		cout<<"Masukan Panjang ( Dm ) : ";cin>>desi;
		
		kilo=desi*0.0001;
		hekto=desi*0.001;
		deka=desi*0.01;
		meter=desi*0.1;
		centi=desi*10;
		mili=desi*100;
		
		cout<<desi<<" Dm \t= "<<kilo<<" Km"<<endl;		
		cout<<desi<<" Dm \t= "<<hekto<<" Hm"<<endl;		
		cout<<desi<<" Dm \t= "<<deka<<" Dam"<<endl;		
		cout<<desi<<" Dm \t= "<<meter<<" M"<<endl;		
		cout<<desi<<" Dm \t= "<<centi<<" Cm"<<endl;		
		cout<<desi<<" Dm \t= "<<mili<<" Mm"<<endl<<endl;
		
		break;
		
	case 6: 
		
		cout<<"Masukan Panjang ( Cm ) : ";cin>>centi;
		
		kilo=centi*0.00001;
		hekto=centi*0.0001;
		deka=centi*0.001;
		meter=centi*0.01;
		desi=centi*0.1;
		mili=centi*10;
		
		cout<<centi<<" Cm \t= "<<kilo<<" Km"<<endl;		
		cout<<centi<<" Cm \t= "<<hekto<<" Hm"<<endl;		
		cout<<centi<<" Cm \t= "<<deka<<" Dam"<<endl;		
		cout<<centi<<" Cm \t= "<<meter<<" M"<<endl;		
		cout<<centi<<" Cm \t= "<<desi<<" Dm"<<endl;		
		cout<<centi<<" Cm \t= "<<mili<<" Mm"<<endl<<endl;
		
		break;
		
    case 7:

        cout << "Masukan Panjang ( Mm ) : ";
        cin >> mili;

        kilo = mili * 0.000001;
        hekto = mili * 0.00001;
        deka = mili * 0.0001;
        meter = mili * 0.001;
        desi = mili * 0.01;
        centi = mili * 0.1;

        cout << mili << " Mm \t= " << kilo << " Km" << endl;
        cout << mili << " Mm \t= " << hekto << " Hm" << endl;
        cout << mili << " Mm \t= " << deka << " Dam" << endl;
        cout << mili << " Mm \t= " << meter << " M" << endl;
        cout << mili << " Mm \t= " << desi << " Dm" << endl;
        cout << mili << " Mm \t= " << centi << " Cm" << endl << endl;

        break;

    default:
        cout << "Pilihan tidak sesuai." << endl;
    }

    cout << "Apakah Anda ingin melanjutkan? (y/n): ";
    cin >> lanjut;

    if (lanjut == 'y' || lanjut == 'Y')
        goto up;
    else if (lanjut == 'n' || lanjut == 'N')
        cout << "Terima kasih telah menggunakan program konversi satuan. Sampai jumpa!" << endl;
    else
        cout << "Input tidak valid. Program akan berhenti." << endl;

    return 0;
}

