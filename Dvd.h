#ifndef DVD_H
#define DVD_H
#include "Midia.h"

class Dvd : public Midia
{
private:
    std::vector<std::string> formatoAudio;
    std::vector<std::string> formatoTela;
    std::vector<std::string> legendas;
public:
    Dvd(std::string , std::string , std::vector<std::string>,int ,
    std::string , std::vector<std::string>,
    std::vector<std::string>, std::vector<std::string>, std::vector<std::string> );
    
    Dvd();
    
    ~Dvd();

    //GETS
    std::vector<std::string> getFormatoAudio();
    std::vector<std::string> getFormatoTela();
    std::vector<std::string> getLegendas();

    void setFormatoAudio(std::vector<std::string> formatoAudio);
    void setFormatoTela(std::vector<std::string> formatoTela);
    void setLegendas(std::vector<std::string> legendas);

    //Print
    void print_dvd(){
        std::cout <<"===================DVD============D" << '\n';
        
        std::cout << 
        "Artista: " << getArtista() << '\n' << 
        "Titulo: " <<getTitulo() << '\n' <<
        "Genero: " << getGenero() << '\n';

        for(std::string f :getFaixas())
        std::cout <<"FAIXAS: "<< f << '\n';

        for(std::string f :getKeyWord())
        std::cout <<"KEY WORDS: " << f << '\n';

        for(std::string f :getFormatoAudio()){
            std::cout <<"FORMATO AUDIO: " << f << '\n';
        }

        for(std::string f :getFormatoTela()){
            std::cout <<"FORMATO TELA: " << f << '\n';
        }

        for (std::string f : getLegendas()){
            std::cout <<"LEGENDAS: " << f << '\n';
        }
        

    }

};
#endif