#include "intruso.hpp"

void Intruso ::set_senha_vazada(std::string vazou){
    int u = vazou.size();
 for(int x=0; x < u; x++)
        if(vazou[x] == ' ') {
            for(int y=x; y < u ; y++)
                vazou[y] = vazou[y+1];
        }
