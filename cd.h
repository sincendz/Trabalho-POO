#ifndef CD_H
#define CD_H

#include "Midia.h"

class cd : public Midia
{
private:
    //Duração
    int duracao;

    //Volume
    float volume;

    //Coletania  
    bool coletania;
public:
    //Construtor
    cd(std::string , std::string , std::vector<std::string>,int , std::string , std::vector<std::string> ,int ,float , bool );
    cd ();
    //Destrutor
    ~cd();

    //Duração
    void setDuracao(int);
    int getDuracao();

    //Volume
    void setVolume(float);
    float getVolume();

    //Coletania
    void setColetania(bool);
    bool getColetania();

    //PRINT
    void print(){
        std::cout <<"===================CD============D" << '\n';
        
        std::cout << 
        "Artista: " << getArtista() << '\n' << 
        "Titulo: " <<getTitulo() << '\n' <<
        "Lancamento: " << getLancamento() << '\n' <<
        "Genero: " << getGenero() << '\n' <<
        "Duração: " << getDuracao() << '\n' <<
        "Volume: " << getVolume() << '\n' <<
        "Coletania: " << getColetania() << '\n';
        for(std::string f :getFaixas())
        std::cout <<"FAIXAS: "<< f << '\n';
        for(std::string f :getKeyWord())
        std::cout <<"KEY WORDS: " << f << '\n';

    }
};
#endif