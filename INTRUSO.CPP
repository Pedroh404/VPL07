#include "intruso.hpp"

void Intruso ::set_senha_vazada(std::string vazou){
    int u = vazou.size();
 for(int x=0; x < u; x++)
        if(vazou[x] == ' ') {
            for(int y=x; y < u ; y++)
                vazou[y] = vazou[y+1];
        }
        

for (int i = 0; i < 1; i++){
   std:: vector <char> temp;
for(int j = 0; j < 16; j++){

    temp.push_back(vazou[j]);

}
palavra.push_back(temp);

}

}
std:: string Intruso::crack_senha(){
std:: stringstream buffer;
std:: string s1;
int j = 0;
j = palavra.size();





for(int n = 0; n <= 5; n++){
for(int i = 0; i< j; i++ ){

       if(palavra[i][10 + n] == 'A'){
        numeros.push_back(palavra[i][0]);
        numeros.push_back(palavra[i][1]);
       }


       if(palavra[i][10 + n] == 'B'){
        numeros.push_back(palavra[i][2]);
        numeros.push_back(palavra[i][3]);
       }


       if(palavra[i][10 + n] == 'C'){
        numeros.push_back(palavra[i][4]);
        numeros.push_back(palavra[i][5]);
       }


       if(palavra[i][10 + n] == 'D'){
        numeros.push_back(palavra[i][6]);
        numeros.push_back(palavra[i][7]);
       }


       if(palavra[i][10 + n] == 'E'){
        numeros.push_back(palavra[i][8]);
        numeros.push_back(palavra[i][9]);
       }
}
