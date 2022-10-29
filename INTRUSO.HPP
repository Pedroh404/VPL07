#ifndef INTRUSO_H_INCLUDED
#define INTRUSO_H_INCLUDED

#include <string>
#include <vector>
#include <iostream>
#include <sstream>

class Intruso{
private:
std:: vector <std:: vector<char> > palavra;
std:: vector <char> numeros;
std:: vector <int>numeros1;


    public:
        void set_senha_vazada(std::string vazou);
      std:: string crack_senha();


};


#endif // INTRUSO_H_INCLUDED