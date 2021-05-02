#include <iostream>
#include <cstring>
using namespace std;
const int cols = 16, rows = 15;

char words[rows][cols] = {"tgbwwinterwsesn",
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




int main(){
	system("color 64");
    char word[16];
    int n;
    cin>>n;
    cin.ignore();
    
    for (int x=0; x<n; x++){
        cin.getline(word, 16,'\n');
        
        if (CARIHorizontal(word)){
            cout << "Ada\n";
        }else if (CARIVertical(word)){
            cout << "Ada\n";
        }else{
           cout << "Tidak Ada\n";
        }
    }
    return 0;
}
