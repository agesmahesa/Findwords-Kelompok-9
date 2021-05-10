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

char *getWordVertical(int);
char *reverse(char *);
bool searchVertical(char *);
bool searchHorizontal(char *);

char *getWordVertical(int dapat){
	char *cekVertikal=(char*) malloc(16*sizeof(char));
	for(int i=0; i<baris; i++)
		cekVertikal[i] = words[i][dapat];
	return cekVertikal;
}

char *reverse(char *masukkan){
	char *cek1, *cek2;
	if(! masukkan || ! *masukkan)	
	for (cek1=masukkan, cek2=masukkan+strlen(masukkan)-1; cek2>cek1; ++cek1, --cek2){
        *cek1 ^= *cek2;
        *cek2 ^= *cek1;
        *cek1 ^= *cek2;
	}
	return masukkan;
}
