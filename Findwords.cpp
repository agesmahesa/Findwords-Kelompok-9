#include <iostream>
#include <cstring>

using namespace std;

const int kolom = 16, baris = 15;

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
			
int cari_kata(char *(masukkan)){
	int panjang, kata_ketemu, cek;
	kata_ketemu=0;
	panjang=strlen(masukkan);
	
    for (int i=0; i<15; i++){
		for (int j=0; j<15 ;j++){
			if (masukkan[0]==words[i][j]){
				//cari kata horizontal kanan
				for (int n=0; n<panjang; n++){
					if (masukkan[n]==words[i][j+n]){
						cek=n;
				}else{
					break;
				}
				}
				if (cek==panjang-1){
					kata_ketemu+=1;
				}else{
					kata_ketemu+=0;
				}
				cek=0;
				//cari kata horizontal kiri
				for (int n=0; n<panjang; n++){
					if (masukkan[n]==words[i][j-n]){
						cek=n;
					}else{
						break;
					}
				}
				if (cek==panjang-1){
					kata_ketemu+=1;
				}else{
					kata_ketemu+=0;
				}
				cek=0;

