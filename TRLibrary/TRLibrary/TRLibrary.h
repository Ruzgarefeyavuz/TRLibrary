#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <filesystem>
using namespace std;

void yazdir(string text) {
	cout << text;
}

int yazma_yeri_ac_int(string ne_yazcak) {
	int deger = 0;
	cout << ne_yazcak;
	cin >> deger;
	return deger;
}

string yazma_yeri_ac_string(string ne_yazcak) {
	string deger = 0;
	cout << ne_yazcak;
	cin >> deger;
	return deger;
}

vector<string> sil_vector_string(vector<string> ruzgar, string silinmesigerek) {
	for (int i = 0; i < ruzgar.size(); i++) {
		if (ruzgar[i] == silinmesigerek) {
			ruzgar.erase(ruzgar.begin() + i);
		}
	}
	return ruzgar;
}

vector<int> sil_vector_int(vector<int> ruzgar, int silinmesigerek) {
	for (int i = 0; i < ruzgar.size(); i++) {
		if (ruzgar[i] == silinmesigerek) {
			ruzgar.erase(ruzgar.begin() + i);
		}
	}
	return ruzgar;
}

bool icinde_varmi_vector_int(vector<int> ruzgar, int varmi) {
	for (int i = 0; i < ruzgar.size(); i++) {
		if (ruzgar[i] == varmi) {
			return true;
		}
	}
	return false;
}

bool icinde_varmi_vector_string(vector<string> ruzgar, string varmi) {
	for (int i = 0; i < ruzgar.size(); i++) {
		if (ruzgar[i] == varmi) {
			return true;
		}
	}
	return false;
}

int int_vector_ne_kadar_size_kaplýyor(vector<int> istebu) {
	return istebu.size();
}

int string_vector_ne_kadar_size_kaplýyor(vector<string> istebu) {
	return istebu.size();
}

vector <string> vector_stringin_icindeki_son_elamani_sil(vector<string> elaman) {
	elaman.pop_back();
	return elaman;
}

vector <int> vector_intin_icindeki_son_elamani_sil(vector<int> elaman) {
	elaman.pop_back();
	return elaman;
}

int string_vectorun_icinden_yazinin_sirasini_bul(vector<string> baba, string istenensey) {
	for (int i = 0; i < baba.size(); i++) {
		if (baba[i] == istenensey) {
			return i;
		}
	}
	return -1;
}


int int_vectorun_icinden_yazinin_sirasini_bul(vector<int> baba, int istenensey) {
	for (int i = 0; i < baba.size(); i++) {
		if (baba[i] == istenensey) {
			return i;
		}
	}
	return -1;
}

vector<string> vector_stringe_ekle(vector<string> adam, string baba) {
	adam.push_back(baba);
	return adam;
}

vector<int> vector_stringe_ekle(vector<int> adam, int baba) {
	adam.push_back(baba);
	return adam;
}

int bu_int_ne_kadar_yer_kapliyor(int baba) {
	return sizeof(baba);
}

int bu_string_ne_kadar_yer_kapliyor(string baba) {
	return sizeof(baba);
}

void dosya_ac(string dosya_ismi, string dosyada_ne_yazcak = "", string yer_nere = "") {
	ofstream dosya_ismi2(yer_nere + dosya_ismi);
	dosya_ismi2 << dosyada_ne_yazcak;
	dosya_ismi2.close();
}

bool burda_dosya_varmi(string dosya_ismi, string dosyada_ne_yazmasi_gerek = "", string dosya_nerde = "") {
	auto varmi_dosya = std::filesystem::exists(dosya_nerde + dosya_ismi);
    if (varmi_dosya && dosyada_ne_yazmasi_gerek != "") {
		string cokpro = "";
		ifstream baba(dosya_nerde + dosya_ismi);
		baba >> cokpro;
		baba.close();
		if (dosyada_ne_yazmasi_gerek == cokpro) {
			return true;
		}
		else {
			return false;
		}
	}
	else if (varmi_dosya && dosyada_ne_yazmasi_gerek == "") {
		return true;
	}
	else {
		return false;
	}
}

string dosyayi_oku_string(string dosya_ismi, string yer_nere = "") {
	string adam = "";
	ifstream baba(yer_nere + dosya_ismi);
	baba >> adam;
	baba.close();
	return adam;
}

int dosyayi_oku_int(string dosya_ismi, string yer_nere = "") {
	string adam = "";
	ifstream baba(yer_nere + dosya_ismi);
	baba >> adam;
	baba.close();
	return stoi(adam);
}

int stringi_inte_cevir(string baba) {
	return stoi(baba);
}

string inti_stringe_cevir(int baba) {
	return to_string(baba);
}

int ondalik_sayiyi_yuvarla(float adam) {
	return abs(adam);
}

int sayilari_bol(int sayi1, int sayi2) {
	return sayi1 / sayi2;
}

int kalani_bul(int sayi1, int sayi2) {
	return sayi1 % sayi2;
}

int sayiyi_negatif_yap(int sayi1) {
	return sayi1 * -1;
}

int sayilari_carp(int sayi1, int sayi2) {
	return sayi1 * sayi2;
}

int sayilari_cikart(int sayi1, int sayi2) {
	return sayi1 - sayi2;
}

int sayilari_topla(int sayi1, int sayi2) {
	return sayi1 + sayi2;
}

bool sayilar_esit_oldugunu_kontrol_et(int sayi1, int sayi2) {
	if (sayi1 == sayi2) {
		return true;
	}
	else {
		return false;
	}
}

bool stringlerin_ayni_oldugunu_kontrol_et(string str1, string str2) {
	if (str1 == str2) {
		return true;
	}
	else {
		return false;
	}
}

bool degerin_sifirdan_buyuk_oldugunu_kontrol_et(int sayi1) {
	if (sayi1 > 0) {
		return true;
	}
	else {
		return false;
	}
}

bool stringin_icinde_sayi_disinda_bisey_varmi(string str1) {
	if (isdigit(atoi(str1.c_str())))
		return true;
	else
		return false;

}

bool stringin_icinde_varmi(string metin, string kelime) {

		for (int i = 0; i < metin.size() - kelime.size() + 1; ++i)
		{

			int check = 0;
			for (int c = 0; c < kelime.size(); ++c)
			{
				if (metin[i + c] == kelime[c])
				{
					check++;
				}
			}

			if (check == kelime.size())
			{
				return true;
			}

		}
		return false;
}

string string1in_sonuna_string2yi_ekle(string str1, string str2) {
	str1 += str2;
	return str1;
}