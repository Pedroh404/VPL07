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
