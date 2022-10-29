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
int element_having_max_freq = 0;
int k = 0;
k = numeros.size();
for(int z=0;z<=k;z++)
	{
	     int maxcount = 0;

    for (int i = 0; i < k; i++) {
        int count = 0;
        for (int j = 0; j < k; j++) {
            if (numeros[i] == numeros[j])
                count++;
        }

        if (count > maxcount) {
            maxcount = count;
            element_having_max_freq = numeros[i];
        }

    }


	}
numeros1.push_back( element_having_max_freq - 48);


numeros.clear();



}
for(int i = 0; i < 6; i++){
    int x;
    x = numeros1[i];
    buffer << x;


}
s1 = buffer.str();
s1.insert(1, " ");
s1.insert(3, " ");
s1.insert(5, " ");
s1.insert(7, " ");
s1.insert(9, " ");
return s1;

}
