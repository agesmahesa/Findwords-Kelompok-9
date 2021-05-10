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

//cari kata horizontal
bool searchHorizontal(char *cari_kata){
	for(int i=0; i<=15; i++)
		if(strstr(words[i], cari_kata) != NULL)
			return true;
			
	for(int i=0; i<=15; i++){
		if(strstr(reverse(words[i]), cari_kata) != NULL)
			return true;
	}
	return false;
}

//fungsi utama
int main(){
	
    char word[16];
    int x;
    cin >> x;
	cin.ignore();
	
	for (int i=0; i<x; i++){
        cin.getline(word, 16,'\n');
        
        if (searchVertical(word) || searchHorizontal(word))
            cout << "Ada\n";
        else 
            cout << "Tidak Ada\n";
    }
    return 0;
}
