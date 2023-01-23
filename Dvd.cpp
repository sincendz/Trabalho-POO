
#include "Dvd.h"

Dvd::Dvd(std::string arti , std::string tit , std::vector<std::string> fax, int lanca
, std::string gene, std::vector<std::string> key ,
    std::vector<std::string> audio, std::vector<std::string> tela, std::vector<std::string> legen
):Midia(arti, tit, fax, lanca, gene, key){
    formatoAudio = audio;
    formatoTela = tela;
    legendas = legen;
}

Dvd::Dvd() = default;

Dvd::~Dvd()
{
    
}

   std::vector<std::string> Dvd::getFormatoAudio(){
        return formatoAudio;
    }
    std::vector<std::string> Dvd::getFormatoTela(){
        return formatoTela;
    }
    std::vector<std::string> Dvd::getLegendas(){
        return legendas;
    }

    void Dvd::setFormatoAudio(std::vector<std::string> formatoAudio){
        this->formatoAudio = formatoAudio;
    }
    void Dvd::setFormatoTela(std::vector<std::string> formatoTela){
        this->formatoTela = formatoTela;
    }
    void Dvd::setLegendas(std::vector<std::string> legendas){
        this->legendas = legendas;
    }