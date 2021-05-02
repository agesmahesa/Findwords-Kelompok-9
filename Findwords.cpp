#include <iostream>
#include <cstring>

using namespace std;
const int kolom = 16, baris = 15;

int cari_kata(char *(masukkan)){
	int panjang, kata_ditemukan, cek;
	kata_ditemukan=0;
	panjang=strlen(masukkan);
	char words[baris][kolom] = {"tgbwwinterwsesn",
								"aaunttmmhfoodnb",
                            	"jlwcqldzmpmvdmr",
                           		"asagmquwvvbsohi",
								"bwplotanadtpgnc",
								"rewngodjcpnatnk",
								"eeotwosbqharrsa",
								"azcgeswewnaknpb",
								"dinnerqodlwdcar",
								"onopkwmparktzcc",
								"qbfrogmamwpweey",
								"lqzqnnmrzjjsclg",
								"mosgzczetdbooto",
								"pdcrzmsngrdnrpz",
								"ohnkzwaterjgtra"};
