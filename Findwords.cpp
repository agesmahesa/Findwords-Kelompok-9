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

char *getWordVertical(int);
char *reverse(char *);
bool searchVertical(char *);
bool searchHorizontal(char *);



int main()
{
    char word[16];
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin.getline(word,16,'\n');
        if (searchVertical(word) || searchHorizontal(word))
            cout << "Ada\n";
        else 
            cout << "Tidak Ada\n";
    }
    return 0;
}
